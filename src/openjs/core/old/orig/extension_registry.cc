/* XSP -- XML Scripting Preprosessor
 * $Id: extension_registry.cc 10385 2009-12-22 08:18:01Z jheusala $
 * XSP Extension Registry Source
 */

#include "extension_registry.h"
#include "extension.h"
#include "extension_context.h"
#include <sendanor/logger.h>
#include <sendanor/exception.h>
#include <plugin/plugin.hpp>

/* */
xsp::core::extension_registry& xsp::core::extension_registry::ref() {
	SENDANOR_LOGGER_FUNCTION("ref", "");
	static extension_registry* reg = new extension_registry();
	return *reg;
}

/* Constructor */
xsp::core::extension_registry::extension_registry() {
	SENDANOR_LOGGER_FUNCTION("extension_registry", "");
}

/* Destructor */
xsp::core::extension_registry::~extension_registry() {
	SENDANOR_LOGGER_FUNCTION("~extension_registry", "");
	for(std::vector<extension*>::const_iterator i=m_extensions.begin(); i!=m_extensions.end(); ++i) {
		delete(*i);
	}
}

/* Initialize extensions */
void xsp::core::extension_registry::init(xsp::core::extension_context& extcontext) {
	SENDANOR_LOGGER_FUNCTION("init", "");
	for(xsp::core::extension_plugin_registry::iterator i=xsp::core::extension_plugin_registry::begin();
	    i!=xsp::core::extension_plugin_registry::end();
	    ++i) {
		SENDANOR_LOGGER_DEBUG( "* " << (*i).name << " (" << (*i).version << ")" );
		//m_extensions.push_back( i( *i ) );
		//extension* e = m_extensions.back();
		
		extension* e = i( *i );
		if(!e) throw RUNTIME_ERROR("!e");
		m_extensions.push_back( e );
		e->init(extcontext);
	}
}

/* EOF */
