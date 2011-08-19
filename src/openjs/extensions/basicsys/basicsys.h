/* openjs -- XML Scripting Preprosessor
 * $Id: basicsys.h 7386 2009-03-30 18:57:48Z jheusala $
 */

#ifndef OPENJS_EXTENSIONS_BASICSYS_H
#define OPENJS_EXTENSIONS_BASICSYS_H 1

#include "../../core/extension.h"

namespace openjs {

  namespace extensions {
	
	/** */
	class basicsys : public openjs::core::extension {
	public:
		basicsys(const Settings& a_settings);
		void init(openjs::core::extension_context& context);
		std::string name() const;
		std::string version() const;
		
	};
	
  } // end of openjs::extensions
  
} // end of openjs

#endif
