
/*

$ g++ -ggdb3 -O2 -rdynamic -fmessage-length=0 -Wall -Wshadow -Wextra -Wpointer-arith -Wconversion -o exec-test exec-test.cc

$ ./exec-test
[DEBUG] function exec: command=`grep', args[2], output, error_output
[DEBUG] function write_to_stream: fd=4, input
[DEBUG] buffer.size() = 11
[DEBUG] Calling fwrite(134537272, 1, 11, 0)...
Segmentation fault

*/

#include <string>
#include <vector>
#include <ostream>
#include <iostream>
#include <sstream>

extern inline int do_exec( const std::string& command
                         , const std::vector<std::string>& args
                         , std::ostream& output
                         , std::ostream& error_output
                         , std::istream& input);

int main() {
	
	std::string command = "grep";
	std::vector<std::string> args;
	args.push_back("-m1");
	args.push_back("Hello");
	
	std::ostringstream output;
	std::istringstream input("Hello World\nLine two\n");
	
	do_exec(command, args, output, std::cerr, input);
	
	std::cout << "Result was: " << output.str() << std::endl;
}

/* Implementation */
#include <algorithm>			// for std::copy
#include <vector>
#include <string>
#include <ostream>
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <cerrno>			// for errno
#include <cstdlib>			// for exit()
#include <cstdio>			// for fopen()
#include <cstring>			// for strerror()
#include <stdexcept>        // for std::runtime_error

#define SENDANOR_LOGGER_FUNCTION(NAME, VAR) std::cerr << "[DEBUG] function " << NAME << ": " << VAR << std::endl;
#define SENDANOR_LOGGER_DEBUG(VAR) std::cerr << "[DEBUG] " << VAR << std::endl;

/* */
template<int buf_size>
inline void read_to_stream(int fd, std::ostream& output) {
	SENDANOR_LOGGER_FUNCTION("read_to_stream", "fd=" << fd << ", output" );
	FILE* file = fdopen(fd, "r");
	try {
		size_t bytes;
		do {
			char buf[buf_size] = { 0 };
			bytes = fread(buf, 1, buf_size-1, file);
			//std::cerr << "[debug " << __FILE__ << ":" << __LINE__ << "] bytes=`" << bytes << "', buf_size=`" << buf_size << "'" << std::endl;
			if(bytes != 0) output << buf;
		} while(bytes == buf_size-1);
		fclose(file);
	} catch (...) {
		fclose(file);
		throw;
	}
}

/* Write */
inline void write_to_stream(int fd, std::istream& input) {
	SENDANOR_LOGGER_FUNCTION("write_to_stream", "fd=" << fd << ", input" );
	SENDANOR_LOGGER_DEBUG("Calling fopen(" << (int)fd << ", \"w\")..." );
	FILE* file = fdopen(fd, "w");
	try {
		std::string data, row;
		while(getline(input, row)) data += row + "\n";
		SENDANOR_LOGGER_DEBUG("data = " << data );
		std::vector<char> buffer( data.begin(), data.end() );
		SENDANOR_LOGGER_DEBUG("buffer.size() = " << buffer.size() );
		if(buffer.size() >= 1) {
			SENDANOR_LOGGER_DEBUG("Calling fwrite(" << (int)&(buffer[0]) << ", 1, " << buffer.size() << ", " << (int)file << ")..." );
			fwrite(&(buffer[0]), 1, buffer.size(), file);
		}
		SENDANOR_LOGGER_DEBUG("Calling fclose(" << (int)file << ")..." );
		fclose(file);
	} catch (...) {
		SENDANOR_LOGGER_DEBUG("Calling fclose(" << (int)file << ")..." );
		fclose(file);
		throw;
	}
}

/** exec with input */
inline int do_exec(const std::string& command, const std::vector<std::string>& args, std::ostream& output, std::ostream& error_output, std::istream& input) {
	SENDANOR_LOGGER_FUNCTION("exec", "command=`" << command << "', args[" << args.size() << "], output, error_output" );
	
	int stdin_pfd[2] = {-1,-1};
	int stdout_pfd[2] = {-1,-1};
	int stderr_pfd[2] = {-1,-1};
	
	if (pipe(stdin_pfd) == -1) throw std::runtime_error(strerror(errno));
	if (pipe(stdout_pfd) == -1) throw std::runtime_error(strerror(errno));
	if (pipe(stderr_pfd) == -1) throw std::runtime_error(strerror(errno));
	
	#define PARENT_WRITE stdin_pfd[1]
	#define PARENT_READ stdout_pfd[0]
	#define PARENT_READ_ERROR stderr_pfd[0]
	
	#define CHILD_READ stdin_pfd[0]
	#define CHILD_WRITE stdout_pfd[1]
	#define CHILD_WRITE_ERROR stderr_pfd[1]
	
	pid_t pid = -1;
	pid = fork();
	if (pid == -1) throw std::runtime_error(strerror(errno));
	if (pid == 0) {
		try {
			// Close parent's pipes
			close(PARENT_WRITE);
			close(PARENT_READ);
			close(PARENT_READ_ERROR);
			
			// Dup my pipes
			if(dup2(CHILD_READ, STDIN_FILENO) == -1) throw std::runtime_error(strerror(errno));
			if(dup2(CHILD_WRITE, STDOUT_FILENO) == -1) throw std::runtime_error(strerror(errno));
			if(dup2(CHILD_WRITE_ERROR, STDERR_FILENO) == -1) throw std::runtime_error(strerror(errno));
			
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
			throw std::runtime_error(strerror(errno));
		} catch (std::exception& e) {
			std::cerr << "Forked child: Error: " << e.what() << std::endl;
			exit(1);
		} catch (...) {
			std::cerr << "Forked child: Error: Unknown exception" << std::endl;
			exit(1);
		}
	}
	
	// Close child's pipes
	close(CHILD_READ);
	close(CHILD_WRITE);
	close(CHILD_WRITE_ERROR);
	
	// Write data from our input to the child
	int input_fd = dup(PARENT_WRITE);
	if(input_fd == -1) throw std::runtime_error(strerror(errno));
	write_to_stream(input_fd, input);
	
	// Wait for it...
	int status;
	SENDANOR_LOGGER_DEBUG("Calling wait()..." );
	if(wait(&status) == -1) throw std::runtime_error(strerror(errno));
	
	// Read data from stdout
	SENDANOR_LOGGER_DEBUG("Reading PARENT_READ..." );
	int fd = dup(PARENT_READ);
	if(fd == -1) throw std::runtime_error(strerror(errno));
	read_to_stream<1024>(fd, output);
	
	// Read data from stderr
	SENDANOR_LOGGER_DEBUG("Reading PARENT_READ_ERROR..." );
	int errfd = dup(PARENT_READ_ERROR);
	if(errfd == -1) throw std::runtime_error(strerror(errno));
	read_to_stream<1024>(errfd, error_output);
	
	// Return with status
	return WEXITSTATUS(status);
}

#undef PARENT_WRITE
#undef PARENT_READ
#undef PARENT_READ_ERROR
#undef CHILD_READ
#undef CHILD_WRITE
#undef CHILD_WRITE_ERROR

/* EOF */
