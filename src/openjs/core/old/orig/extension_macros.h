/* XSP -- XML Scripting Preprosessor
 * $Id: extension_macros.h 10385 2009-12-22 08:18:01Z jheusala $
 */

#ifndef SENDANOR_XSP_CORE_EXTENSION_MACROS_H
#define SENDANOR_XSP_CORE_EXTENSION_MACROS_H 1

#include "extension.h"
#include "extension_registry.h"
#include <plugin/plugin.hpp>

#define XSP_REGISTER_EXTENSION(name, version, extension_type) \
	namespace { \
		plugin::simple<xsp::core::extension_plugin_registry, extension_type> r(xsp::core::settings(name, version)); \
	}

#endif
