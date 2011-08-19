/* openjs::basicfastcgi
 * $Id: basicfastcgi.h 10024 2009-11-09 00:49:07Z jheusala $
 */

#ifndef OPENJS_EXTENSIONS_BASICFASTCGI_H
#define OPENJS_EXTENSIONS_BASICFASTCGI_H 1

#include "../../core/extension.h"

class FCGX_Request;
	
namespace openjs {
  namespace extensions {
	
	/** */
	class basicfastcgi : public openjs::core::extension {
	public:
		basicfastcgi(const Settings& a_settings);
		~basicfastcgi();
		void init(openjs::core::extension_context& context);
		static std::set<FCGX_Request*>& requests();
		std::string name() const;
		std::string version() const;
		
	private:
		
	}; // end of class basicfastcgi
	
  } // end of openjs::extensions
  
} // end of openjs

#endif
