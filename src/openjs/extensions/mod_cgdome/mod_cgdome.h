/* GDOME Document Object Model C API for openjs
 * $Id: mod_cgdome.h 9009 2009-08-28 18:30:19Z jheusala $
 */

#ifndef OPENJS_EXTENSIONS_CGDOME_H
#define OPENJS_EXTENSIONS_CGDOME_H 1

#include "../../core/extension.h"

namespace openjs {
  namespace extensions {
	
	/** */
	class cgdome : public openjs::core::extension {
	public:
		cgdome(const Settings& a_settings);
		void init(openjs::core::extension_context& context);
		std::string name() const;
		std::string version() const;
		
	};
	
  }
  
}

#endif
