/* openjs::ccurl
 * $Id: ccurl.h 10061 2009-11-13 18:36:39Z jheusala $
 */

#ifndef OPENJS_EXTENSIONS_CCURL_H
#define OPENJS_EXTENSIONS_CCURL_H 1

#include "../../core/extension.h"

namespace openjs {
  namespace extensions {
	
	class ccurl : public core::extension {
	public:
		ccurl(const Settings&);
		~ccurl();
		void init(core::extension_context&);
		std::string name() const;
		std::string version() const;
	};
	
  }
}

#endif
