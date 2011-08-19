/**
 * Extension framework test
 */
#include "BarModule.h"
#include "ModuleRegister.h"

REGISTER_DL_MODULE(Modular::BarModule, "Bar");

/** Constructor */
Modular::BarModule::BarModule(const std::string& a_name) : Module(a_name) {}

/** Destructor */
Modular::BarModule::~BarModule() {}

/* EOF */
