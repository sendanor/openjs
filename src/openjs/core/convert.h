/* OPENJS -- XML Scripting Preprosessor
 * $Id: convert.h 10465 2009-12-31 18:18:53Z jheusala $
 */

#ifndef SENDANOR_OPENJS_CORE_CONVERT_H
#define SENDANOR_OPENJS_CORE_CONVERT_H 1

#ifndef USE_GLIB
#define USE_GLIB 1
#endif

#ifndef USE_V8
#define USE_V8 1
#endif

#include <sendanor/convert.h>        // for sendanor::convert

namespace openjs {
	
	using sendanor::convert;
	
}

#endif
