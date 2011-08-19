/* OPENJS -- XML Scripting Preprosessor
 * $Id: env.h 10465 2009-12-31 18:18:53Z jheusala $
 */

#ifndef OPENJS_JSVIEWPP_H
#define OPENJS_JSVIEWPP_H 1

#include <string>                       // for std::string
#include <stdexcept>                    // for std::runtime_error
#include "libexecstream/exec-stream.h"  // for exec_stream_t
#include <boost/lexical_cast.hpp>       // for boost::lexical_cast

#include <ostream>                     // for std::ostream
#include <istream>                     // for std::istream
#include <vector>                       // for std::vector
#include "sendanor/logger.h"            // for SENDANOR_LOGGER_DEBUG

namespace jsxmlpp {
	
	/* Type for exec callbacks */
	typedef std::string (*get_data_callback)(const std::string& );
	
	/* Parse environment from a pointer to vector */
	extern inline std::string escape(const std::string& buf);
	
	/* Read single line response from stdin */
	extern inline std::string fetch_singleline_response(std::istream& in, const char code);

	/* Write command to stdout and read response from stdin. Supports multilines. */
	std::string fetch_multiline_response(std::ostream& out, std::istream& in, const std::string& command);
	
	/* jsxmlpp child process handler */
	class process {
	public:
		
		/* Constructor */
		process(const std::string& arg_command);
		
		/* Destructor */
		~process();
		
		/* Start jsxmlpp child process */
		void start();
		
		/* Run template at the child process. Child will use get_data callback to fetch responses from the parent. */
		void run(std::ostream& out, const std::string& arg_file, get_data_callback get_data);
		
		/* Stop jsxmlpp child process */
		int stop();
		
		/* Read child error logs to stderr */
		void write_errors(std::ostream& out);
		
		/* Check if process is running */
		bool is_running() const;
		
	private:
		bool m_is_running;
		std::string m_command;
		exec_stream_t m_es;
	};
	
}

/* Check if process is running */
bool jsxmlpp::process::is_running() const {
	return m_is_running;
}

/** Read single line response from input stream */
inline std::string jsxmlpp::fetch_singleline_response(std::istream& in, const char code) {
	SENDANOR_LOGGER_FUNCTION("jsxmlpp::fetch_singleline_response", "in=...,code='" << code << "'");
	std::string buf;
	getline (in, buf, '\n');
	if(buf.empty()) throw std::runtime_error("unexpected empty line");
	if(buf[0] != code) throw std::runtime_error("unknown control character: " + buf);
	return buf.substr(1);
}

/* Read single line response from stdin */
/*
inline std::string jsxmlpp::fetch_singleline_response(const char code) {
	SENDANOR_LOGGER_FUNCTION("jsxmlpp::fetch_singleline_response", "code='" << code << "'");
	return fetch_singleline_response(std::cin, code);
}
*/

/** Write command to stdout and read response from stdin. Supports multilines. */
std::string jsxmlpp::fetch_multiline_response(std::ostream& out, std::istream& in, const std::string& command) {
	SENDANOR_LOGGER_FUNCTION("jsxmlpp::fetch_multiline_response", "out, in, command='" << command << "'");
	
	// Write command
	out << jsxmlpp::escape(command) << std::endl;
	
	// Read response
	std::string buf, result;
	while( getline (in, buf, '\n').good() ) {
		if(buf.empty()) throw std::runtime_error("unexpected empty line");
		if(buf[0] == '+') {
			if(!result.empty()) result += '\n';
			result += buf.substr(1);
			continue;
		}
		if(buf != "=") throw std::runtime_error("unknown control character: " + buf);
		break;
	}
	return result;
}

/** Escape string for view communication stream */
inline std::string jsxmlpp::escape(const std::string& buf) {
	SENDANOR_LOGGER_FUNCTION("jsxmlpp::escape", "buf='" << buf << "'");
	std::string ret = "+";
	for(std::size_t i = 0; i<buf.size(); ++i) {
		if(buf[i] == '\n') ret += "\n+";
		else ret += buf[i];
	}
	ret += "\n=";
	return ret;
}

/* Constructor */
jsxmlpp::process::process(const std::string& arg_command) 
 : m_is_running(false), m_command(arg_command) {
	SENDANOR_LOGGER_FUNCTION("jsxmlpp::process::process", "arg_command='" << arg_command << "'");
	m_es.set_wait_timeout(exec_stream_t::s_child, 1000);
	m_es.set_wait_timeout(exec_stream_t::s_err, 0);
}

/* Destructor */
jsxmlpp::process::~process() {
	SENDANOR_LOGGER_FUNCTION("jsxmlpp::process::~process", "");
	if(m_is_running) stop();
}

/* Start jsxmlpp child process */
void jsxmlpp::process::start() {
	SENDANOR_LOGGER_FUNCTION("jsxmlpp::process::start", "");
	SENDANOR_LOGGER_DEBUG( "m_command = '" << m_command << "'" );
	m_es.start(m_command, "");
	m_is_running = true;
}

/* Run template at the child process. Child will use get_data callback to fetch responses from the parent. */
void jsxmlpp::process::run(std::ostream& out, const std::string& arg_file, get_data_callback get_data) {
	SENDANOR_LOGGER_FUNCTION("jsxmlpp::process::run", "arg_file=" << arg_file << ", get_data=...");
	
	m_es.in() << "<" << arg_file << std::endl;
	
	std::string buf, command;
	while( std::getline( m_es.out(), buf ).good() ) {
		SENDANOR_LOGGER_DEBUG( "buf = '" << buf << "'" );
		
		if(buf.empty()) throw std::runtime_error("unexpected empty line");
		
		if(buf[0] == '+') {
			if(!command.empty()) command += '\n';
			command += buf.substr(1);
			continue;
		}
		
		if(buf == "=") {
			SENDANOR_LOGGER_DEBUG( "command = '" << command << "'" );
			const std::string response = get_data(command);
			SENDANOR_LOGGER_DEBUG( "response = '" << response << "'" );
			m_es.in() << jsxmlpp::escape(response) << std::endl;
			command = "";
			continue;
		}
		
		if(buf == "--") break;
		
		if(buf == "-- ") throw std::runtime_error("jsxmlpp: unexpected control character: '"+ buf + "'");
		
		throw std::runtime_error("jsxmlpp: unknown control character: "+ buf);
	}
	
	SENDANOR_LOGGER_DEBUG( "reading child output stream" );
	
	std::string len_str = fetch_singleline_response(m_es.out(), 'L');
	std::size_t len = boost::lexical_cast<int>(len_str);
	
	SENDANOR_LOGGER_DEBUG( "buffer length = " << len );
	
	std::vector<char> tmpbuf(len, 0);
	if(!m_es.out().read(&tmpbuf[0], len)) throw std::runtime_error("failed to read result");
	out << std::string(&tmpbuf[0], len) << std::endl;
	
	buf = "";
	if(!std::getline( m_es.out(), buf ).good()) {
		throw std::runtime_error("failed to read result end tag");
	}
	if(buf != "-- ") throw std::runtime_error("unexpected result end: " + buf);
	
}

/* Read child error logs to stderr */
void jsxmlpp::process::write_errors(std::ostream& out) {
	SENDANOR_LOGGER_FUNCTION("jsxmlpp::process::write_errors", "out=...");
	SENDANOR_LOGGER_DEBUG( "reading child error stream" );
	
	//m_es.err().peek();
	//if(!m_es.err().good()) return;
	
	try {
		std::string buf;
		while( std::getline( m_es.err(), buf ).good() ) {
			out << buf << std::endl;
		}
	} catch(...) {
		// Ignore exceptions
	}
}

/* Stop jsxmlpp child process */
int jsxmlpp::process::stop() {
	SENDANOR_LOGGER_FUNCTION("jsxmlpp::process::stop", "");
	
	if(!m_is_running) throw std::runtime_error("process not running");
	
	// Send quit command
	m_es.in() << ":quit" << std::endl;
	
	SENDANOR_LOGGER_DEBUG( "waiting child to quit" );
	m_es.close_in();
	usleep(10000);
	
	m_es.out().peek();
	usleep(10000);
	
	SENDANOR_LOGGER_DEBUG( "closing child streams" );
	
	m_es.close();
	
	SENDANOR_LOGGER_DEBUG( "Getting exit status" );
	int ret = m_es.exit_code();
	
	m_is_running = false;
	
	SENDANOR_LOGGER_DEBUG( "child exited with " << ret );
	return ret;
}

#endif
/* EOF */
