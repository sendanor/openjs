/**
 * Extension framework test -- module class
 */

#ifndef SENDANOR_XSP_TESTS_MODULAR_BARMODULE_H
#define SENDANOR_XSP_TESTS_MODULAR_BARMODULE_H 1

#include "Module.h"

namespace Test {
	
	class BarModule : public Module {
	public:
		BarModule(const Settings&);
		~BarModule();
		std::string name() const;
		std::string version() const;
	};
	
};

#endif

/* EOF */
