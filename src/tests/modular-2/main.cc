/**
 * Extension framework test
 */

#include "Module.h"
#include "Modular.h"
#include "Modular.hcc"
#include <iostream>
#include <stdexcept>

int main() {
	try {
		Test::Module::Settings settings;
		Modular::ModuleRegister<Test::Module> reg;
		
		Modular::LoadedModule<Test::Module>* modfoo = reg.load("./FooModule.so", settings);
		if(!modfoo) std::cerr << "./FooModule.so: Warning! Library load failed." << std::endl;
		else std::cout << "Module loaded: " << *(modfoo->module()) << std::endl;
		
		Modular::LoadedModule<Test::Module>* modbar = reg.load("./BarModule.so", settings);
		if(!modbar) std::cerr << "./BarModule.so: Warning! Library load failed." << std::endl;
		else std::cout << "Module loaded: " << *(modbar->module()) << std::endl;
		
		std::cout << "Listing modules:" << std::endl;
		for(Modular::ModuleRegister<Test::Module>::const_iterator i = reg.begin(); i!=reg.end(); ++i) {
			if(!*i) std::cerr << "Warning! Empty pointer in the module list." << std::endl;
			else std::cout << " #" << (*i)->id() << " " << *((*i)->module()) << std::endl;
		}
		
		std::cout << "Listing modules in reverse order:" << std::endl;
		for(Modular::ModuleRegister<Test::Module>::const_reverse_iterator i = reg.rbegin(); i!=reg.rend(); ++i) {
			if(!*i) std::cerr << "Warning! Empty pointer in the module list." << std::endl;
			else std::cout << " #" << (*i)->id() << " " << *((*i)->module()) << std::endl;
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
