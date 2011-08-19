/**
 * Extension framework test -- module class
 */

#ifndef SENDANOR_XSP_TESTS_MODULAR_FOOMODULE_H
#define SENDANOR_XSP_TESTS_MODULAR_FOOMODULE_H 1

#include "Module.h"

namespace Modular {
	
	class FooModule : public Module {
	public:
		FooModule(const std::string& name);
		~FooModule();
	};
	
};

#endif

/* EOF */
