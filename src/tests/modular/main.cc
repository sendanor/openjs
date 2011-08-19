/**
 * Extension framework test
 */

#include "ModuleRegister.h"
#include <iostream>
#include <stdexcept>

int main() {
	try {
		Modular::ModuleRegister reg;
		
		Modular::RegisteredModule* modfoo = reg.load("./FooModule.so");
		if(!modfoo) throw std::runtime_error("FooModule.so load failed");
		std::cout << "Module loaded: " << modfoo->module()->name() << std::endl;
		
		Modular::RegisteredModule* modbar = reg.load("./BarModule.so");
		if(!modbar) throw std::runtime_error("BarModule.so load failed");
		std::cout << "Module loaded: " << modbar->module()->name() << std::endl;
		
		std::cout << "Listing modules:" << std::endl;
		for(Modular::ModuleRegister::const_iterator i = reg.begin(); i!=reg.end(); ++i) {
			Modular::RegisteredModule* mod = *i;
			if(!mod) std::cerr << "Warning! Empty pointer in the module list." << std::endl;
			else std::cout << " #" << mod->id() << " " << mod->module()->name() << std::endl;
		}
		
		std::cout << "Listing modules in reverse:" << std::endl;
		for(Modular::ModuleRegister::const_reverse_iterator i = reg.rbegin(); i!=reg.rend(); ++i) {
			Modular::RegisteredModule* mod = *i;
			if(!mod) std::cerr << "Warning! Empty pointer in the module list." << std::endl;
			else std::cout << " #" << mod->id() << " " << mod->module()->name() << std::endl;
		}
		
		return 0;
	} catch(std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	} catch(...) {
		std::cerr << "Exception: Unknown" << std::endl;
	}
	return 1;
}

/* EOF */
