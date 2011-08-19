/**
 * Extension framework test -- module class
 */

#ifndef SENDANOR_XSP_TESTS_MODULAR_BARMODULE_H
#define SENDANOR_XSP_TESTS_MODULAR_BARMODULE_H 1

#include "Module.h"

namespace Modular {
	
	class BarModule : public Module {
	public:
		BarModule(const std::string& name);
		~BarModule();
	};
	
};

#endif

/* EOF */
