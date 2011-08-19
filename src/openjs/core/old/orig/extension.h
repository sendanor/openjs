/* XSP -- XML Scripting Preprosessor
 * $Id: extension.h 10385 2009-12-22 08:18:01Z jheusala $
 */

#ifndef SENDANOR_XSP_CORE_EXTENSION_H
#define SENDANOR_XSP_CORE_EXTENSION_H 1

#include <string>
#include <plugin/plugin.hpp>
#include "extension_context.h"

namespace xsp {
  namespace core {
	
	/* */
	struct settings {
		std::string name;
		std::string version;
		settings(const std::string& a_name, const std::string& a_version);
	};
	
	/* */
	inline bool operator<(const settings& a, const settings& b) {
		if(a.name == b.name) return a.version<b.version;
		return a.name<b.name;
	}
	
	/* */
	inline std::ostream& operator<<(std::ostream& out, const settings& a) {
		return out << a.name << " (" << a.version << ")";
	}
	
	/* */
	class extension {
	public:
		
		/** Constructor */
		extension(const settings& a_settings);
		
		/** Destructor */
		virtual ~extension();
		
		/** Init extension */
		virtual void init(extension_context& context) = 0;
		
		/** Init extension */
		const settings& get_settings();
		
	private:
		
		settings m_settings;
		
		extension();
		extension(const extension& e);
		
	};
	
	typedef plugin::registry<extension, settings, settings> extension_plugin_registry;
	
  }
}

#endif
