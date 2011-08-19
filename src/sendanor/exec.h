/* libsendanor-base -- Advanced command execution
 * $Id: exec.h 6229 2008-09-18 16:38:28Z jheusala $
 */

#ifndef SENDANOR_EXEC_H
#define SENDANOR_EXEC_H

#include <vector>
//#include <string>
#include <ostream>
#include <glibmm/ustring.h> // for Glib::ustring

namespace sendanor {
	
	/* Run command in a shell like system() but take output streams
	 * \param command Command to run
	 * \param args Command arguments
	 * \param output Standard output stream (stdout)
	 * \param error_output Standard error stream (stderr)
	 * \return Returns status code from the command. Zero means no errors.
	 */
	extern inline int exec(const Glib::ustring& command, const std::vector<Glib::ustring>& args, std::ostream& output, std::ostream& error_output);
	
	/* Run command in a shell like system() but take output streams
	 * \param command Command to run
	 * \param args Command arguments
	 * \param output Standard output stream (stdout)
	 * \param error_output Standard error stream (stderr)
	 * \param input Standard input stream (stdin)
	 * \return Returns status code from the command. Zero means no errors.
	 */
	extern inline int exec(const Glib::ustring& command, const std::vector<Glib::ustring>& args, std::ostream& output, std::ostream& error_output, std::istream& input);
	
}


/*
 * The Source Implementation
 */

#include <algorithm>			// for std::copy
#include <vector>
#include <string>
#include <ostream>
#include "exception.h" // for RUNTIME_ERROR
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <cerrno>			// for errno
#include <cstdlib>			// for exit()
#include <cstdio>			// for fopen()
#include "logger.h" // for SENDANOR_LOGGER_FUNCTION
#include <cstring>			// for strerror()
#include <boost/thread.hpp>

/* Smart pointer container for FILE */
struct SafeFILE {
	int fd;
	FILE* file;
	SafeFILE(int a_fd, const char *mode): fd(a_fd), file(fdopen(a_fd, mode)) {
		SENDANOR_LOGGER_DEBUG("Called fdopen(" << (int)a_fd << ", \"" << mode << "\"), result was " << (int)file << "." );
		if (!file) throw RUNTIME_ERROR(strerror(errno));
	}
	~SafeFILE() {
		SENDANOR_LOGGER_DEBUG("Calling fclose(" << (int)file << ")..." );
		fclose(file);
		SENDANOR_LOGGER_DEBUG("Calling close(" << (int)fd << ")..." );
		close(fd);
	}
	operator int() { return (int)file; }
	operator FILE*() { return file; }
};

/* Smart container for FDs */
struct SafeFD {
	int m_fd;
	SafeFD(int fd): m_fd(fd) {
		if (!fd) throw RUNTIME_ERROR(strerror(errno));
	}
	~SafeFD() {
		SENDANOR_LOGGER_DEBUG("Calling close(" << (int)m_fd << ")..." );
		close(m_fd);
	}
	operator int() { return (int)m_fd; }
};

/* dup() which throws exceptions on errors */
inline int safedup(int x) {
	int fd = dup(x);
	if(fd == -1) throw RUNTIME_ERROR(strerror(errno));
	return fd;
}

/* read for strings */
std::istream& myread(std::istream& is, std::string& destination, const size_t buffer_size) {
	std::vector<char> buffer(buffer_size);
	is.read( &(buffer[0]), buffer.size() );
	buffer.resize(is.gcount());
	destination = std::string(buffer.begin(), buffer.end());
	return is;
}

/* */	
template<int buffer_size>
inline void read_to_stream(int fd, std::ostream& output) {
	SENDANOR_LOGGER_FUNCTION("read_to_stream", "fd=" << fd << ", output" );
	SafeFILE file(fd, "r");
	size_t bytes;
	do {
		char buf[buffer_size] = { 0 };
		bytes = fread(buf, 1, buffer_size-1, file);
		//std::cerr << "[debug " << __FILE__ << ":" << __LINE__ << "] bytes=`" << bytes << "', buffer_size=`" << buffer_size << "'" << std::endl;
		if(bytes != 0) output << buf;
	} while(bytes == buffer_size-1);
}

/* */	
template<int buffer_size>
struct fd_stream_reader {
	int m_fd;
	std::ostream& output;
	
	fd_stream_reader(int a_fd, std::ostream& a_output) : m_fd(a_fd), output(a_output) { }
	
	void operator()() {
		SENDANOR_LOGGER_FUNCTION("fd_stream_reader", "m_fd=" << m_fd << ", output" );
		SafeFD fd(m_fd);
		ssize_t bytes = 0;
		do {
			std::vector<char> buffer(buffer_size, 0);
			SENDANOR_LOGGER_DEBUG("Calling read(" << fd << ", " << (int)&(buffer[0]) << ", " << buffer.size() << ")..." );
			bytes = read( fd, &(buffer[0]), buffer_size);
			if(bytes == -1) throw RUNTIME_ERROR(strerror(errno));
			if(bytes > SSIZE_MAX) throw RUNTIME_ERROR("bytes > SSIZE_MAX");
			if(bytes > 0) {
				buffer.resize((size_t)bytes);
				SENDANOR_LOGGER_DEBUG("bytes=`" << bytes << "', buffer_size=`" << buffer_size << "', buffer='" << std::string(buffer.begin(), buffer.end()) << "'");
				output.write( &(buffer[0]), buffer.size() );
				output.flush();
			}
		} while(bytes > 0);
	}

};

/* Write */
template<int buffer_size>
struct fd_stream_writer {
	int m_fd;
	std::istream& input;
	
	fd_stream_writer(int a_fd, std::istream& a_input) : m_fd(a_fd), input(a_input) { }
	
	void operator()() {
		SENDANOR_LOGGER_FUNCTION("fd_stream_writer", "m_fd=" << m_fd << ", input" );
		SafeFD fd(m_fd);
		size_t readed_bytes=0;
		do {
			std::vector<char> buffer(buffer_size);
			input.read( &(buffer[0]), buffer.size() );
			buffer.resize(input.gcount());
			readed_bytes = buffer.size();
			SENDANOR_LOGGER_DEBUG("buffer = '" << std::string(buffer.begin(), buffer.end()) << "'" );
			SENDANOR_LOGGER_DEBUG("buffer.size() = " << buffer.size() );
			if(buffer.size() >= 1) {
				SENDANOR_LOGGER_DEBUG("Calling write(" << fd << ", " << (int)&(buffer[0]) << ", " << buffer.size() << ")..." );
				ssize_t writed_bytes = write( fd, &(buffer[0]), buffer.size() );
				if(writed_bytes == -1) throw RUNTIME_ERROR(strerror(errno));
				if(writed_bytes != (ssize_t)readed_bytes) throw RUNTIME_ERROR("writed_bytes != readed_bytes");
			}
		} while(readed_bytes == buffer_size);
	}
	
};

/* */
template<int buffer_size>
struct file_stream_reader {
	int fd;
	std::ostream& output;
	
	file_stream_reader(int a_fd, std::ostream& a_output) : fd(a_fd), output(a_output) { }
	
	void operator()() {
		SENDANOR_LOGGER_FUNCTION("fd_stream_reader", "fd=" << fd << ", output" );
		SafeFILE file(fd, "r");
		size_t bytes = 0;
		do {
			std::vector<char> buffer(buffer_size, 0);
			bytes = fread( &(buffer[0]), 1, buffer_size, file);
			buffer.resize(bytes);
			SENDANOR_LOGGER_DEBUG("bytes=`" << bytes << "', buffer_size=`" << buffer_size << "', buffer='" << std::string(buffer.begin(), buffer.end()) << "'");
			output.write( &(buffer[0]), buffer.size() );
			output.flush();
		} while(bytes == buffer_size);
	}

};

/* Write */
template<int buffer_size>
struct file_stream_writer {
	int fd;
	std::istream& input;
	
	file_stream_writer(int a_fd, std::istream& a_input) : fd(a_fd), input(a_input) { }
	
	void operator()() {
		SENDANOR_LOGGER_FUNCTION("fd_stream_writer", "fd=" << fd << ", input" );
		SafeFILE file(fd, "w");
		size_t readed=0;
		do {
			std::string str;
			myread(input, str, buffer_size);
			readed = str.size();
			SENDANOR_LOGGER_DEBUG("str = '" << str << "'" );
			std::vector<char> buffer( str.begin(), str.end() );
			SENDANOR_LOGGER_DEBUG("buffer.size() = " << buffer.size() );
			if(buffer.size() >= 1) {
				SENDANOR_LOGGER_DEBUG("Calling fwrite(" << (int)&(buffer[0]) << ", 1, " << buffer.size() << ", " << (int)file << ")..." );
				fwrite( &(buffer[0]), 1, buffer.size(), file );
				SENDANOR_LOGGER_DEBUG("Calling fflush(" << (int)file << ")..." );
				fflush(file);
			}
		} while(readed == buffer_size);
	}
};

/** FIXME: argbuf could be std::vector */
inline int sendanor::exec(const Glib::ustring& command, const std::vector<Glib::ustring>& args, std::ostream& output, std::ostream& error_output) {
	SENDANOR_LOGGER_FUNCTION("exec", "command=`" << command << "', args[" << args.size() << "], output, error_output" );
//	std::cerr << "[debug " << __FILE__ << ":" << __LINE__ << "] sendanor::exec(`" << command << "', args[" <<  args.size() << "], out, err)" << std::endl;
	
	int stdout_pfd[2];
	int stderr_pfd[2];
	
	if (pipe(stdout_pfd) == -1) throw RUNTIME_ERROR(strerror(errno));
	if (pipe(stderr_pfd) == -1) throw RUNTIME_ERROR(strerror(errno));
	
	int& PARENT_READ_OUT = stdout_pfd[0];
	int& PARENT_READ_ERR = stderr_pfd[0];
	
	int& CHILD_WRITE_OUT = stdout_pfd[1];
	int& CHILD_WRITE_ERR = stderr_pfd[1];
	
	pid_t pid = -1;
	pid = fork();
	if (pid == -1) throw RUNTIME_ERROR(strerror(errno));
	if (pid == 0) {
		try {
			// Close parent's pipes
			close(PARENT_READ_OUT);
			close(PARENT_READ_ERR);
			
			// Dup my pipes
			if(dup2(CHILD_WRITE_OUT, STDOUT_FILENO) == -1) throw RUNTIME_ERROR(strerror(errno));
			if(dup2(CHILD_WRITE_ERR, STDERR_FILENO) == -1) throw RUNTIME_ERROR(strerror(errno));
			
			typedef char* arg_t;
			arg_t* argbuf = new arg_t[args.size()+2];
			
			argbuf[0] = new char[command.size()+1];
			std::copy(command.begin(), command.end(), argbuf[0]);
			argbuf[0][command.size()] = 0;
			//std::cerr << "[debug " << __FILE__ << ":" << __LINE__ << "] argbuf[0]=`" << argbuf[0] << "'" << std::endl;
			
			for(std::size_t i=0; i<args.size(); ++i) {
				argbuf[i+1] = new char[args[i].size()+1];
				std::copy(args[i].begin(), args[i].end(), argbuf[i+1]);
				argbuf[i+1][args[i].size()] = 0;
				//std::cerr << "[debug " << __FILE__ << ":" << __LINE__ << "] argbuf[" << i+1 << "]=`" << argbuf[i+1] << "'" << std::endl;
			}
			argbuf[args.size()+1] = 0;
			execvp(command.c_str(), argbuf);
			throw RUNTIME_ERROR(strerror(errno));
		} catch (std::exception& e) {
			std::cerr << "Forked child: Error: " << e.what() << std::endl;
			exit(1);
		} catch (...) {
			std::cerr << "Forked child: Error: Unknown exception" << std::endl;
			exit(1);
		}
	}
	
	// Close child's pipes
	close(CHILD_WRITE_OUT);
	close(CHILD_WRITE_ERR);
	
	// Wait for it...
	int status = -1;
	SENDANOR_LOGGER_DEBUG("Calling waitpid(" << pid << ", &status, 0)..." );
	if(waitpid(pid, &status, 0) == -1) throw RUNTIME_ERROR(strerror(errno));
	
	// Read output
	int output_fd = dup(PARENT_READ_OUT);
	if(output_fd == -1) throw RUNTIME_ERROR(strerror(errno));
	read_to_stream<1024>(output_fd, output);
	
	// Read errors
	int error_fd = dup(PARENT_READ_ERR);
	if(error_fd == -1) throw RUNTIME_ERROR(strerror(errno));
	read_to_stream<1024>(error_fd, error_output);
	
	// Get return value
	int return_value = WEXITSTATUS(status);
	SENDANOR_LOGGER_DEBUG("Return value was "  << return_value );
	return return_value;
}

/** exec with input */
inline int sendanor::exec(const Glib::ustring& command, const std::vector<Glib::ustring>& args, std::ostream& output, std::ostream& error_output, std::istream& input) {
	SENDANOR_LOGGER_FUNCTION("exec", "command=`" << command << "', args[" << args.size() << "], output, error_output" );
//	std::cerr << "[debug " << __FILE__ << ":" << __LINE__ << "] sendanor::exec(`" << command << "', args[" <<  args.size() << "], out, err)" << std::endl;
	
	int stdout_pfd[2];
	int stderr_pfd[2];
	int stdin_pfd[2];
	
	if (pipe(stdout_pfd) == -1) throw RUNTIME_ERROR(strerror(errno));
	if (pipe(stderr_pfd) == -1) throw RUNTIME_ERROR(strerror(errno));
	if (pipe(stdin_pfd) == -1) throw RUNTIME_ERROR(strerror(errno));
	
	int& PARENT_WRITE_IN = stdin_pfd[1];
	int& PARENT_READ_OUT = stdout_pfd[0];
	int& PARENT_READ_ERR = stderr_pfd[0];
	
	int& CHILD_READ_IN   = stdin_pfd[0];
	int& CHILD_WRITE_OUT = stdout_pfd[1];
	int& CHILD_WRITE_ERR = stderr_pfd[1];
	
	pid_t pid = -1;
	pid = fork();
	if (pid == -1) throw RUNTIME_ERROR(strerror(errno));
	if (pid == 0) {
		try {
			// Close parent's pipes
			close(PARENT_WRITE_IN);
			close(PARENT_READ_OUT);
			close(PARENT_READ_ERR);
			
			// Dup my pipes
			if(dup2(CHILD_WRITE_OUT, STDOUT_FILENO) == -1) throw RUNTIME_ERROR(strerror(errno));
			if(dup2(CHILD_WRITE_ERR, STDERR_FILENO) == -1) throw RUNTIME_ERROR(strerror(errno));
			if(dup2(CHILD_READ_IN, STDIN_FILENO) == -1) throw RUNTIME_ERROR(strerror(errno));
			
			typedef char* arg_t;
			arg_t* argbuf = new arg_t[args.size()+2];
			
			argbuf[0] = new char[command.size()+1];
			std::copy(command.begin(), command.end(), argbuf[0]);
			argbuf[0][command.size()] = 0;
			//std::cerr << "[debug " << __FILE__ << ":" << __LINE__ << "] argbuf[0]=`" << argbuf[0] << "'" << std::endl;
			
			for(std::size_t i=0; i<args.size(); ++i) {
				argbuf[i+1] = new char[args[i].size()+1];
				std::copy(args[i].begin(), args[i].end(), argbuf[i+1]);
				argbuf[i+1][args[i].size()] = 0;
				//std::cerr << "[debug " << __FILE__ << ":" << __LINE__ << "] argbuf[" << i+1 << "]=`" << argbuf[i+1] << "'" << std::endl;
			}
			argbuf[args.size()+1] = 0;
			execvp(command.c_str(), argbuf);
			throw RUNTIME_ERROR(strerror(errno));
		} catch (std::exception& e) {
			std::cerr << "Forked child: Error: " << e.what() << std::endl;
			exit(1);
		} catch (...) {
			std::cerr << "Forked child: Error: Unknown exception" << std::endl;
			exit(1);
		}
	}
	
	// Close child's pipes
	close(CHILD_WRITE_OUT);
	close(CHILD_WRITE_ERR);
	close(CHILD_READ_IN);
	
	// Start workers
	boost::thread_group threads;
	int return_value = 0;
	try {
		threads.add_thread(new boost::thread(fd_stream_writer<1024>(PARENT_WRITE_IN, input)));
		threads.add_thread(new boost::thread(fd_stream_reader<1024>(PARENT_READ_OUT, output)));
		threads.add_thread(new boost::thread(fd_stream_reader<1024>(PARENT_READ_ERR, error_output)));
		
		// Wait for it...
		int status = -1;
		SENDANOR_LOGGER_DEBUG("Calling waitpid(" << pid << ", &status, 0)..." );
		if(waitpid(pid, &status, 0) == -1) throw RUNTIME_ERROR(strerror(errno));
		return_value = WEXITSTATUS(status);
		SENDANOR_LOGGER_DEBUG("Return value was "  << return_value );
		
		// Wait threads to finish
		SENDANOR_LOGGER_DEBUG("Joining threads..." );
		threads.join_all();
		
	} catch(...) {
		SENDANOR_LOGGER_DEBUG("Joining threads..." );
		threads.join_all();
		throw;
	}
	
	// Return with status
	return return_value;
}

#endif
/* EOF */
