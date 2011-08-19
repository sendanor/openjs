/**
 * Extension framework test
 */
#include "FooModule.h"
#include "ModuleRegister.h"

REGISTER_DL_MODULE(Modular::FooModule, "Foo");

/** Constructor */
Modular::FooModule::FooModule(const std::string& a_name) : Module(a_name) {}

/** Destructor */
Modular::FooModule::~FooModule() {}

/* EOF */
