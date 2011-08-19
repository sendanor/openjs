/* openjs -- XML Scripting Preprosessor
 * $Id: sql.h 7356 2009-03-27 23:43:08Z jheusala $
 */

#ifndef OPENJS_EXTENSIONS_BASICJSXMLPP_H
#define OPENJS_EXTENSIONS_BASICJSXMLPP_H 1

#include "../../core/extension.h"

namespace openjs {
  namespace extensions {
	
	/** */
	class basicjsxmlpp : public openjs::core::extension {
	public:
		basicjsxmlpp(const Settings& a_settings);
		void init(openjs::core::extension_context& context);
		std::string name() const;
		std::string version() const;
		
	};
	
  }
  
}

#endif
