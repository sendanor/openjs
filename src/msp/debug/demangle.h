/* $Id$

This file is part of libmspcore
Copyright © 2007 Mikko Rasa, Mikkosoft Productions
Distributed under the LGPL
*/
#ifndef MSP_DEBUG_DEMANGLE_H_
#define MSP_DEBUG_DEMANGLE_H_

#include <string>

namespace Msp {
namespace Debug {

inline std::string demangle(const std::string &);

} // namespace Debug
} // namespace Msp


/* The Source Implementation */

/* $Id$

This file is part of libmspcore
Copyright © 2007 Mikko Rasa, Mikkosoft Productions
Distributed under the LGPL
*/

#include <cstdlib>
#include <cxxabi.h>
#include "demangle.h"

namespace Msp {
namespace Debug {

inline std::string demangle(const std::string &sym)
{
#ifdef __GNUC__
	int status;
	char *dm=abi::__cxa_demangle(sym.c_str(), 0, 0, &status);
	
	std::string result;
	if(status==0)
		result=dm;
	else
		result=sym;
	
	free(dm);

	return result;
#else
	return sym;
#endif
}

} // namespace Debug
} // namespace Msp

#endif
/* EOF */
