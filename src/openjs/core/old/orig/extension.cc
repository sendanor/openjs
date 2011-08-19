/* XSP -- XML Scripting Preprosessor
 * $Id: extension.cc 10385 2009-12-22 08:18:01Z jheusala $
 */

#include "extension.h"
#include "extension_context.h"
#include "extension_registry.h"
#include <sendanor/logger.h>

/** */
xsp::core::settings::settings(const std::string& a_name, const std::string& a_version)
 : name(a_name), version(a_version) {
	SENDANOR_LOGGER_FUNCTION("settings", "name=" << a_name << ", version=" << a_version);
}
 
/** */
const xsp::core::settings& xsp::core::extension::get_settings() {
	return m_settings;
}

/* Constructor */
xsp::core::extension::extension(const settings& a_settings) 
: m_settings(a_settings) {
	SENDANOR_LOGGER_FUNCTION("extension", "settings=" << a_settings);
}

xsp::core::extension::extension() : m_settings("none", "none") {
	SENDANOR_LOGGER_FUNCTION("extension", "settings=" << m_settings);
}

xsp::core::extension::extension(const extension& e) : m_settings(e.m_settings) {
	SENDANOR_LOGGER_FUNCTION("extension", "settings=" << e.m_settings);
}

/* Destructor */
xsp::core::extension::~extension() {
	SENDANOR_LOGGER_FUNCTION("~extension", "");
}

/* EOF */
