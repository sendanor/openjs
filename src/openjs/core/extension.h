/* OPENJS -- XML Scripting Preprosessor
 * $Id: extension.h 10465 2009-12-31 18:18:53Z jheusala $
 */

#ifndef SENDANOR_OPENJS_CORE_EXTENSION_H
#define SENDANOR_OPENJS_CORE_EXTENSION_H 1

#include <string>
#include "Modular/Modular.h"    // for MODULAR_REGISTER_MODULE
#include "Modular/Modular.hcc"  // for MODULAR_REGISTER_MODULE
#include <map>
#include "config.h"             // for openjs::config_type

namespace openjs {
  namespace core {
	
	class extension_context;
	
	/* */
	class extension {
	public:
		
		typedef extension Base;
		typedef openjs::configuration Settings;
		
		/** Constructor */
		inline extension(const Settings& a_settings);
		
		/** Destructor */
		inline virtual ~extension();
		
		/** Init extension */
		virtual void init(extension_context& context) = 0;
		
		/** Get name */
		virtual std::string name() const = 0;
		
		/** Get version */
		virtual std::string version() const = 0;
		
	private:
		
		extension();
		extension(const extension& e);
		
	};
	
  }
}

#define OPENJS_REGISTER_EXTENSION(ModuleType) MODULAR_REGISTER_MODULE(ModuleType)


/* The Source Implementation */

#include <sendanor/logger.h>

/* Constructor */
inline openjs::core::extension::extension(const Settings&) {
	SENDANOR_LOGGER_FUNCTION("extension", "");
}

/* Destructor */
inline openjs::core::extension::~extension() {
	SENDANOR_LOGGER_FUNCTION("~extension", "");
}

#endif
/* EOF */
