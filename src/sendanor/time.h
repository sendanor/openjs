/*
 * Copyright 2007 Sendanor <info@sendanor.fi>
 * Distributed under the Sendanor Open Source License, Version 0.9. See
 * accompanying file COPYING or copy at
 * http://www.sendanor.org/license/0_9.txt.
 * $Id: time.h 10128 2009-11-17 11:06:08Z jheusala $
 */

#ifndef SENDANOR_TIME_H
#define SENDANOR_TIME_H 1

#include <ctime>
#include <string>

namespace sendanor {
	
	/** Format time */
	extern inline std::string strftime(const std::string& format, const struct std::tm *tm);
	
	/** Time class */
	class time {
	public:
		
		typedef time_t time_type;
		
		/* Initializes values with current time */
		inline time();
		
		/* Get seconds since the Epoch */
		inline time_type sec() const { return m_sec; }
		
		/* Get trailing microseconds */
		inline time_type usec() const { return m_usec; }
		
	private:
		time_type m_sec;
		time_type m_usec;
	};

	/** Duration of period of time */
	class period {
	public:
		
		/* Initializes values with current time */
		inline period() { }
		
		/* Get microseconds since the start time */
		inline double duration() const {
			time now;
			return double(now.sec()-m_start.sec()) + double(now.usec()-m_start.usec())/1000000;
		}
		
	private:
		time m_start;
	};

} // end of namespace


/*
 * The Source Implementation
 */

#include "exception.h"
#include <cerrno>
#include <cstring>
#include <sys/time.h>

/** Format time */
inline std::string sendanor::strftime(const std::string& format, const struct std::tm *tm) {
	char buf[512];
	std::size_t size = strftime(buf, 512, format.c_str(), tm);
	return std::string(buf, size);
}

/* Initializes with current time */
inline sendanor::time::time() {
	timeval tv;
	if(gettimeofday(&tv, NULL) != 0) throw RUNTIME_ERROR(std::string("gettimeofday failed: ") + strerror(errno));
	m_sec = tv.tv_sec;
	m_usec = tv.tv_usec;
}

#endif
/* EOF */
