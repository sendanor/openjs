/* XSP -- XML Scripting Preprosessor
 * $Id$
 * XSP Extension Registry Source
 */

#include "extension_registry.h"
#include "extension.h"
#include "extension_context.h"
#include <sendanor/logger.h>
#include <sendanor/exception.h>
//#include <plugin/plugin.hpp>

/* */
xsp::core::extension_registry& xsp::core::extension_registry::self() {
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
/*
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
*/

/** Load extension into the registry */
std::size_t xsp::core::extension_registry::load(extension* ext) {
	const std::size_t id = self().m_extensions.size();
	self().m_extensions.push_back( ext );
	return id;
}

/** Unload extension from the registry */
void xsp::core::extension_registry::unload(const std::size_t id) {
	self().m_extensions.at( id ) = 0;
}

/** Get extension by id */
xsp::core::extension* xsp::core::extension_registry::get(const std::size_t id) {
	extension* e = self().m_extensions.at(id);
	if(!e) throw RUNTIME_ERROR(std::string("Extension #") + boost::lexical_cast<std::string>(id) + " has been unloaded.");
	return e;
}

/** Get count of extensions */
std::size_t xsp::core::extension_registry::size() {
	return self().m_extensions.size();
}

/* EOF */
