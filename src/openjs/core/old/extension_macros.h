/* XSP -- XML Scripting Preprosessor
 * $Id: extension_macros.h 10445 2009-12-30 12:18:44Z jheusala $
 */

#ifndef SENDANOR_XSP_CORE_EXTENSION_MACROS_H
#define SENDANOR_XSP_CORE_EXTENSION_MACROS_H 1

#include "extension.h"
#include "extension_registry.h"
//#include <plugin/plugin.hpp>

#define XSP_REGISTER_EXTENSION(name, version, extension_type) \
	namespace { xsp::core::scoped_extension_loader<extension_type> r(xsp::core::settings(name, version)); }

#endif
