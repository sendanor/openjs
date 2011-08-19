/* OPENJS -- JavaScript CGI
 * $Id: log.h 10465 2009-12-31 18:18:53Z jheusala $
 */

#ifndef SENDANOR_OPENJS_CORE_LOG_H
#define SENDANOR_OPENJS_CORE_LOG_H 1

#include "v8.h"                 // for v8
#include "convert.h"            // for Glib::ustring
#include <string>               // for std::string
#include <glibmm/ustring.h>     // for Glib::ustring
#include <sendanor/logger.h>    // for sendanor::ScopedLoggerSink

/** Library name and dependencies */
namespace openjs {
	void log_v8_exception_catch(const std::string& log_file, const int log_line, v8::TryCatch& try_catch);
}

/** Log catched v8 exception */
#ifdef DEBUG
inline void openjs::log_v8_exception_catch(const std::string& log_file, const int log_line, v8::TryCatch& try_catch) {
#else
inline void openjs::log_v8_exception_catch(const std::string&, const int, v8::TryCatch& try_catch) {
#endif

	SENDANOR_LOGGER_DEBUG( "openjs::log_v8_exception_catch called from " << log_file << ":" << log_line );
	
	v8::Handle<v8::Value>   e = try_catch.Exception();
	v8::Handle<v8::Message> m = try_catch.Message();
	const Glib::ustring e_msg = openjs::convert<Glib::ustring>(e);
	//SENDANOR_LOGGER_ERROR("v8 script exception: " << str );
	
	const Glib::ustring m_filename = openjs::convert<Glib::ustring>(m->GetScriptResourceName());
	
	const Glib::ustring m_msg = openjs::convert<Glib::ustring>(v8::Handle<v8::Value>(m->Get()));
	
	SENDANOR_LOGGER_DEBUG( m_msg );
	
	const Glib::ustring m_line = openjs::convert<Glib::ustring>(v8::Handle<v8::Value>(m->GetSourceLine()));
	const int m_line_num = m->GetLineNumber();
	const int m_col = m->GetStartColumn();
	const int m_col_end = m->GetEndColumn();
	
	SENDANOR_LOGGER_ERROR( m_filename << ":" << m_line_num << ": " << e_msg );
	SENDANOR_LOGGER_ERROR( m_line );
	
	if( (m_col<m_col_end) && (m_col-1 >= 1) && (m_col_end-m_col-2 >= 1) ) {
		SENDANOR_LOGGER_ERROR( std::string(m_col-1, ' ') << '^' << std::string(m_col_end-m_col-2, '-') << '^' );
	} else if(m_col >= 2) {
		SENDANOR_LOGGER_ERROR( std::string(m_col-1, ' ') << '^' );
	} else if(m_col <= 1) {
		SENDANOR_LOGGER_ERROR( '^' );
	}
	SENDANOR_LOGGER_DEBUG( "line=" << m_line_num << ", m_col=" << m_col << ", m_col_end=" << m_col_end );
}

// This is a macro so that we could log __FILE__, __LINE__ etc
#define SENDANOR_LOG_JS_EXCEPTION(ARG) openjs::log_v8_exception_catch(__FILE__, __LINE__, ARG);

#endif

/* EOF */
