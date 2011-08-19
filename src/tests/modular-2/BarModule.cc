/**
 * Extension framework test
 */
#include "BarModule.h"
#include "Modular.h"
#include "Modular.hcc"

REGISTER_DL_MODULE(Test::BarModule);

/** Constructor */
Test::BarModule::BarModule(const Settings& a_settings) : Module(a_settings) {}

/** Destructor */
Test::BarModule::~BarModule() {}

/** Get module name */
std::string Test::BarModule::name() const { return "Bar"; }

/** Get module version */
std::string Test::BarModule::version() const { return "$Id: BarModule.cc 10443 2009-12-30 11:45:34Z jheusala $"; }

/* EOF */
