/*
 * Copyright 2007 Sendanor <info@sendanor.fi>
 * Distributed under the Sendanor Open Source License, Version 0.9. See
 * accompanying file COPYING or copy at
 * http://www.sendanor.org/license/0_9.txt.
 * $Id: string.h 869 2008-06-30 19:56:38Z jheusala $
 */

#ifndef SENDANOR_DIFF_H
#define SENDANOR_DIFF_H 1

#include <string> // for std::string

namespace sendanor {
	
	/** Returns a diff between a and b */
	std::string diff(const std::string& str_a, const std::string& str_b);
	
} // namespace sendanor


/** The Source Implementation */

/*
 * Sendanor's XML Library
 * Copyright 2007 Sendanor <info@sendanor.fi>
 * Distributed under the Sendanor Open Source License, Version 0.9. See
 * accompanying file COPYING or copy at
 * http://www.sendanor.org/license/0_9.txt.
 * $Id: string.cc 869 2008-06-30 19:56:38Z jheusala $
 */

#include <diff/Diff.h> // for Diff::Diff
#include <sstream>     // for std::istringstream
#include "logger.h" // for SENDANOR_LOGGER_FUNCTION

/* Returns a diff between a and b */
inline std::string sendanor::diff(const std::string& str_a, const std::string& str_b) {
	SENDANOR_LOGGER_FUNCTION("diff", "str_a=`" << str_a << "', str_b=`" << str_b << "'");
	std::istringstream a(str_a);
	std::istringstream b(str_b);
	diff::Diff diff;
	diff.create(a, b);
	std::stringstream c;
	diff.write(c);
	return c.str();
}

#endif
/* EOF */
