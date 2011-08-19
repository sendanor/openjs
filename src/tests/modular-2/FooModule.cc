/**
 * Extension framework test
 */
#include "FooModule.h"
#include "Modular.h"
#include "Modular.hcc"

REGISTER_DL_MODULE(Test::FooModule);

/** Constructor */
Test::FooModule::FooModule(const Settings& a_settings) : Module(a_settings) {}

/** Destructor */
Test::FooModule::~FooModule() {}

/** Get module name */
std::string Test::FooModule::name() const { return "Foo"; }

/** Get module version */
std::string Test::FooModule::version() const { return "$Id: FooModule.cc 10443 2009-12-30 11:45:34Z jheusala $"; }

/* EOF */
