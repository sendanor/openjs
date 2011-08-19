/* OPENJS -- XML Scripting Preprosessor
 * $Id: env.cc 10465 2009-12-31 18:18:53Z jheusala $
 * OPENJS Extension Context Source
 */

#include "env.h"
#include <sendanor/env.h>       // for sendanor::env
#include "convert.h"            // for openjs::convert
#include <map>                  // for std::make_pair

/** Parse environment from a pointer to vector */
void openjs::core::parse_environ(char** env_pointer, openjs::core::environ_type& env_vector) {
	SENDANOR_LOGGER_FUNCTION("parse_environ", "");
	sendanor::env sysenv(env_pointer);
	for(sendanor::env::iterator i = sysenv.begin(); i!=sysenv.end(); ++i) {
		SENDANOR_LOGGER_DEBUG("i->key=" << i->key << ", i-value=" << i->value);
		Glib::ustring key = openjs::convert<Glib::ustring>(i->key);
		SENDANOR_LOGGER_DEBUG("normalizing key...");
		key = key.normalize();
		SENDANOR_LOGGER_DEBUG("key=" << key);
		Glib::ustring value = openjs::convert<Glib::ustring>(i->value);
		SENDANOR_LOGGER_DEBUG("normalizing value...");
		value = value.normalize();
		SENDANOR_LOGGER_DEBUG("value=" << value);
		env_vector.push_back( std::make_pair(key, value) );
	}
	SENDANOR_LOGGER_DEBUG("env_vector.size() = " << env_vector.size() );
}

/* EOF */
