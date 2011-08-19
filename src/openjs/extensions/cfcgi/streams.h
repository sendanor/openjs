/* openjs fastcgi Extensions
 * $Id: streams.h 10066 2009-11-13 19:56:42Z jheusala $
 */

#ifndef OPENJS_EXTENSIONS_CGCGI_STREAMS_H
#define OPENJS_EXTENSIONS_CGCGI_STREAMS_H 1

//#include <sendanor/logger.h>               // for SENDANOR_LOGGER_FUNCTION
#include <fcgi_config.h>            // for FCGX_Request
#include <fcgio.h>                  // for FCGX_*
#include <istream>					// for std::istream
#include <ostream>					// for std::ostream

namespace openjs {
	
	/** FastCGI input stream */
	class our_fcgi_istream : public std::istream {
	public:
		our_fcgi_istream(FCGX_Stream* buf);
		virtual ~our_fcgi_istream();
	private:
		fcgi_streambuf m_buf;
	};
	
	/** FastCGI output stream */
	class our_fcgi_ostream : public std::ostream {
	public:
		our_fcgi_ostream(FCGX_Stream* buf);
		virtual ~our_fcgi_ostream();
	private:
		fcgi_streambuf m_buf;
	};
	
}

/** Constructor */
openjs::our_fcgi_istream::our_fcgi_istream(FCGX_Stream* buf)
 : std::istream(&m_buf), m_buf(buf) {
	rdbuf(&m_buf);
}

/** Destructor */
openjs::our_fcgi_istream::~our_fcgi_istream() {
}

/** Constructor */
openjs::our_fcgi_ostream::our_fcgi_ostream(FCGX_Stream* buf)
 : std::ostream(&m_buf), m_buf(buf) {
	rdbuf(&m_buf);
}

/** Destructor */
openjs::our_fcgi_ostream::~our_fcgi_ostream() {
}

#endif
/* EOF */
