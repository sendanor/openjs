/* openjs::cfcgi
 * $Id: cfcgi.h 10061 2009-11-13 18:36:39Z jheusala $
 */

#ifndef OPENJS_EXTENSIONS_CGCGI_H
#define OPENJS_EXTENSIONS_CGCGI_H 1

#include "../../core/extension.h"

namespace openjs {
  namespace extensions {
	
	/** */
	class cfcgi : public openjs::core::extension {
	public:
		cfcgi(const Settings& a_settings);
		~cfcgi();
		void init(openjs::core::extension_context& context);
		std::string name() const;
		std::string version() const;
		
	};
	
  }
  
}

#endif
