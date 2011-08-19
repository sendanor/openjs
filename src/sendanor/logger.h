/*
 * Copyright 2007 Sendanor <info@sendanor.fi>
 * Distributed under the Sendanor Open Source License, Version 0.9. See
 * accompanying file COPYING or copy at
 * http://www.sendanor.org/license/0_9.txt.
 * $Id: logger.h 10130 2009-11-17 11:25:43Z jheusala $
 */

/*
 * See notes from: http://www.crystalclearsoftware.com/cgi-bin/boost_wiki/wiki.pl?Boost.Logging
 */

#ifndef SENDANOR_LOGGER_H
#define SENDANOR_LOGGER_H 1

#include <ostream>                // for std::ostream
#include <string>                 // for std::string
#include <iostream>               // for std::endl
#include <iomanip>                // for std::setw
#include "macros.h"               // for MACRO_QUOTE
#include "time.h"               // for MACRO_QUOTE
#include <sstream>                // for std::ostringstream
#include "ScopedLocale.h"   // for sendanor::ScopedLocale

namespace sendanor {
	
	class Logger {
	public:
		
		inline virtual ~Logger();
		inline static Logger& log();
		inline void flush();
		inline void sink(std::ostream* sink);
		inline std::ostream* sink();
		inline std::ostream& sink_ref();
		inline int level() const { return m_level; }
		inline void level(const int a_level) { m_level = a_level; }
		inline int auto_level() const { return m_auto_level; }
		inline int level_limit() const { return m_level_limit; }
		inline void level_limit(const int a_level) { m_level_limit = a_level; }
		inline bool has_voice() const { return m_level<=m_level_limit; }
		inline void level_up() { m_auto_level++; }
		inline void level_down() { m_auto_level--; }
		inline void imbue(const std::locale& loc);
		
		/** The time duration since the start of the logger */
		period time;
		
	private:
		
		/** Constructor */
		inline Logger(std::ostream* a_sink);
		
		/** Output stream target */
		std::ostream* m_sink;
		
		/** Current static verbose level for new log messages */
		int m_level;
		
		/** Current verbose level */
		int m_auto_level;
		
		/** Current verbose level */
		int m_level_limit;
		
	}; // class sendanor::Logger
    
	/* Stream operator */
	template<class T>
	inline extern Logger& operator<<(Logger& log, const T& buf);
	
	/** Write log when constructor and destructor are called. Useful for functions etc. */
	class ScopedLogger {
	public:
		inline ScopedLogger(const std::string& a_end_msg);
		inline ~ScopedLogger();
	private:
		std::string m_end_msg;
	}; // class ScopedLogger
	
	/* Internal details */
	namespace logger_detail {
		
		/* Replace substring */
		inline std::string replace_string(const std::string& input, const std::string& tag, const std::string& value);
		
		/** Get file and line as a string */
		inline std::string get_eof_tag(const int level, const std::string& msg) {
			std::ostringstream tmp;
			tmp << std::setfill('0') << std::setw(4) << level << msg;
			return tmp.str();
		}
	} // namespace sendanor::logger_detail
	
	/** Set sink to something else, reset at the destructor */
	class ScopedLoggerSink {
	public:
		inline ScopedLoggerSink(std::ostream* a_sink);
		inline ~ScopedLoggerSink();
		inline void close();
		
	private:
		std::ostream* m_sink;
		
	}; // class sendanor::ScopedSink
	
	/** Set sink to a file, stderr, stdlog, or stdout; reset at the destructor */
	class ScopedLoggerTarget {
	public:
		inline ScopedLoggerTarget(const std::string& target);
		inline ~ScopedLoggerTarget();
		inline void close();
		
	private:
		std::ostream* m_orig_sink;
		std::ofstream* m_file_sink;
		
	}; // class sendanor::ScopedLoggerTarget
	
	/** Get parent stack frame */
	extern inline std::string get_parent_stack_frame();
	
	/* Log format */
	extern inline std::string log_format(const std::string& input);
	
	/* Get unique ID for function logs */
	typedef std::size_t unique_id_type;
	unique_id_type get_unique_function_id();
	
} // namespace sendanor

/** Stream operator */
template<class T>
inline sendanor::Logger& sendanor::operator<<(sendanor::Logger& log, const T& buf) {
	std::ostream* sink = log.sink();
	if(!sendanor::Logger::log().has_voice()) return log;
	if(sink) {
		(*sink) << buf;
	}
	return log;
}

#ifdef DEBUG
  #define SENDANOR_LOGGER_BASIC(TAG, VAR)  \
	if(sendanor::Logger::log().has_voice()) sendanor::Logger::log().sink_ref() << std::setfill('0') << std::setw(8) << std::setprecision(8) << std::fixed << sendanor::Logger::log().time.duration() << " " << std::setfill('0') << std::setw(4) << sendanor::Logger::log().level() << " [" TAG "] " __FILE__ ":" MACRO_QUOTE(__LINE__) ": " << VAR << std::endl;
#else
  #define SENDANOR_LOGGER_BASIC(TAG, VAR)  \
	if(sendanor::Logger::log().has_voice()) sendanor::Logger::log().sink_ref() << std::setfill('0') << std::setw(8) << std::setprecision(8) << std::fixed << sendanor::Logger::log().time.duration() << " " << std::setfill('0') << std::setw(4) << sendanor::Logger::log().level() << " [" TAG "] " << VAR << std::endl;
#endif

#define SENDANOR_LOGGER_ERROR(VAR)   sendanor::Logger::log().level(0); SENDANOR_LOGGER_BASIC("error", VAR)
#define SENDANOR_LOGGER_WARNING(VAR) sendanor::Logger::log().level(1); SENDANOR_LOGGER_BASIC("warni", VAR)
#define SENDANOR_LOGGER_INFO(VAR)    sendanor::Logger::log().level(2+sendanor::Logger::log().auto_level()); SENDANOR_LOGGER_BASIC("info ", VAR)
#define SENDANOR_LOGGER(VAR)         sendanor::Logger::log().level(10+sendanor::Logger::log().auto_level()); SENDANOR_LOGGER_BASIC("n/a  ", VAR)
#ifdef DEBUG
 #define SENDANOR_LOGGER_DEBUG(VAR)   sendanor::Logger::log().level(100+sendanor::Logger::log().auto_level()); SENDANOR_LOGGER_BASIC("debug", VAR)
#else // DEBUG
 #define SENDANOR_LOGGER_DEBUG(VAR)
#endif // DEBUG

/** Get unique ID for function logs */
sendanor::unique_id_type sendanor::get_unique_function_id() {
	static unique_id_type id = 0;
	return id++;
}

namespace sendanor {
	namespace logger_detail {
		template <class R, class T>
		R lexical_cast(const T& var) {
			sendanor::ScopedLocale loc(std::locale("C"));
			return boost::lexical_cast<R>(var);
		}
	}
}

/** Write log message at the start of function and at the end using sendanor::ScopedLogger's destructor
 * \param NAME Should be a static string
 * \param ARGS Arguments. Set to empty string value or "void" if function has no arguments.
 */
#ifdef DEBUG
#define SENDANOR_LOGGER_FUNCTION(NAME, ARGS) \
  const std::string scoped_logger_function_parent_stack = sendanor::get_parent_stack_frame(); \
  const sendanor::unique_id_type scoped_logger_function_id = sendanor::get_unique_function_id(); \
  sendanor::Logger::log().level(100+sendanor::Logger::log().auto_level()); \
  SENDANOR_LOGGER_BASIC("funct", "SOF#" << scoped_logger_function_id << " " NAME " (" << ARGS << ") at " << scoped_logger_function_parent_stack); \
  sendanor::ScopedLogger scoped_logger_function( sendanor::logger_detail::get_eof_tag( sendanor::Logger::log().level() \
                                 , std::string(" [funct] " __FILE__ ":" MACRO_QUOTE(__LINE__) ": EOF#") \
                                 + sendanor::logger_detail::lexical_cast<std::string>(scoped_logger_function_id) + " " NAME " at " \
                                 + scoped_logger_function_parent_stack ) );
#else // DEBUG
 #define SENDANOR_LOGGER_FUNCTION(NAME, ARGS)
#endif // DEBUG


/* 
 * The Source Implementation
 */

#include <iostream>         // for std::cerr
#include "exception.h"      // for STD_RUNTIME_ERROR
#include <sstream>          // for std::ostringstream
#include <msp/debug/backtrace.h> // for Msp::Debug::Backtrace
#include <fstream>
#include <ios> // for ios::app
#include "time.h"   // for sendanor::ScopedLocale
#include <locale> // for std::locale

/** Constructor */
inline sendanor::Logger::Logger(std::ostream* a_sink)
 : m_sink(a_sink)
 , m_level(0)
 , m_auto_level(0)
 , m_level_limit(
#ifdef LOGGER_LEVEL
LOGGER_LEVEL
#else
0
#endif
)
 {
}

/** Destructor */
inline sendanor::Logger::~Logger() { }

/** Get logger instance
 * See static (de)initialization order fiasco 
 * <http://www.parashift.com/c++-faq-lite/ctors.html#faq-10.14>.
 */
inline sendanor::Logger& sendanor::Logger::log() {
	static sendanor::Logger logger(&std::cerr);
	return logger;
}

/** Flush stream */
inline void sendanor::Logger::flush() {
	if(m_sink == 0) m_sink = &std::cerr;
	m_sink->flush();
}

/** Change logger target stream */
inline void sendanor::Logger::sink(std::ostream* a_sink) {
	if(a_sink) m_sink = a_sink;
}

/** Get pointer to current sink */
inline std::ostream* sendanor::Logger::sink() {
	if(m_sink == 0) m_sink = &std::cerr;
	return m_sink;
}

/** Get reference to current sink */
inline std::ostream& sendanor::Logger::sink_ref() {
	if(m_sink == 0) m_sink = &std::cerr;
	return *m_sink;
}

/** */
inline void sendanor::Logger::imbue(const std::locale& loc) {
	if(m_sink == 0) return;
	m_sink->imbue(loc);
}


/**  */
inline sendanor::ScopedLogger::ScopedLogger(const std::string& a_end_msg)
 : m_end_msg(a_end_msg) {
	sendanor::Logger::log().level_up();
}

/** Write log message at the end */
inline sendanor::ScopedLogger::~ScopedLogger() {
	if(sendanor::Logger::log().has_voice()) {
		sendanor::Logger::log().sink_ref()
			<< std::setfill('0') << std::setw(8) << std::setprecision(8) << std::fixed << Logger::log().time.duration()
			<< " " << m_end_msg << std::endl;
	}
	sendanor::Logger::log().level_down();
}


/** */
inline sendanor::ScopedLoggerSink::ScopedLoggerSink(std::ostream* a_sink) {
	m_sink = sendanor::Logger::log().sink();
	sendanor::Logger::log().sink(a_sink);
}

/** */
inline sendanor::ScopedLoggerSink::~ScopedLoggerSink() {
	if(m_sink) sendanor::Logger::log().sink(m_sink);
}

/** */
inline void sendanor::ScopedLoggerSink::close() {
	sendanor::Logger::log().sink(m_sink);
	m_sink = 0;
}


/** Open target */
inline sendanor::ScopedLoggerTarget::ScopedLoggerTarget(const std::string& a_target)
 : m_orig_sink(0), m_file_sink(0) {
	
	std::string target = a_target;
	
	// Set default target
	if(target.empty()) target = "stderr";
	
	// Save original sink
	m_orig_sink = sendanor::Logger::log().sink();
	
	// Set sink by target type
	if(target == "stderr") {
		sendanor::Logger::log().sink(&std::cerr);
	} else if(target == "stdlog") {
		sendanor::Logger::log().sink(&std::clog);
	} else if(target == "stdout") {
		sendanor::Logger::log().sink(&std::cout);
	} else {
		m_file_sink = new std::ofstream(target.c_str(), std::ios::out|std::ios::app);
		if(m_file_sink && *m_file_sink) {
			sendanor::Logger::log().sink(m_file_sink);
		} else {
			SENDANOR_LOGGER_ERROR("Cannot open log file: " << target );
		}
	}
}

/** */
inline sendanor::ScopedLoggerTarget::~ScopedLoggerTarget() {
	if(m_orig_sink) sendanor::Logger::log().sink(m_orig_sink);
	if(m_file_sink) {
		m_file_sink->close();
		delete m_file_sink;
	}
}

/** */
inline void sendanor::ScopedLoggerTarget::close() {
	if(m_orig_sink) sendanor::Logger::log().sink(m_orig_sink);
	if(m_file_sink) {
		m_file_sink->close();
		delete m_file_sink;
	}
	m_orig_sink = 0;
	m_file_sink = 0;
}


/** Get parent stack frame */
inline std::string sendanor::get_parent_stack_frame() {
	sendanor::ScopedLocale loc(std::locale("C"));
	Msp::Debug::Backtrace trace = Msp::Debug::Backtrace::create();
	std::ostringstream tmp;
	Msp::Debug::Backtrace::FrameSeq seq = trace.get_frames();
	if(seq.empty()) throw RUNTIME_ERROR("seq is empty!");
	if(seq.size() >= 4) {
		seq.pop_front();
		seq.pop_front();
		seq.pop_front();
		tmp << seq.front();
	} else {
		tmp << "unknown";
	}
	return tmp.str();
}

/** Replace all substrings with new values
 * @param input Input string
 * @param tag   Substring to replace
 * @param value New value
 * @return Replaced string
 * @todo This could be inside a string specific library header
 */
inline std::string sendanor::logger_detail::replace_string(const std::string& input, const std::string& tag, const std::string& value) {
	//SENDANOR_LOGGER_FUNCTION("replace_string", "input=" << input << ", tag=" << tag << ", value=" << value);
	std::string buf = input;
	std::size_t found = buf.find(tag);
	while(found != std::string::npos) {
		buf.replace(found, tag.size(), value);
		found = buf.find(tag);
	};
	//SENDANOR_LOGGER_DEBUG("buf=" << buf);
	return buf;
}

/** Format string with strftime and our extended %i identifier for PID
 * @param input Input string
 * @param tag   Substring to replace
 * @param value New value
 * @return Replaced string
 */
inline std::string sendanor::log_format(const std::string& input) {
	std::string str = logger_detail::replace_string(input, "%i", boost::lexical_cast<std::string>(getpid()) );
	std::time_t t = std::time(NULL);
	return sendanor::strftime(str, std::localtime(&t) );
}

#endif // SENDANOR_LOGGER_H
/* EOF */
