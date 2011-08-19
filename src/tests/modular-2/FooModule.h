/**
 * Extension framework test -- module class
 */

#ifndef SENDANOR_XSP_TESTS_MODULAR_FOOMODULE_H
#define SENDANOR_XSP_TESTS_MODULAR_FOOMODULE_H 1

#include "Module.h"

namespace Test {
	
	class FooModule : public Module {
	public:
		FooModule(const Settings&);
		~FooModule();
		std::string name() const;
		std::string version() const;
	};
	
};

#endif

/* EOF */
