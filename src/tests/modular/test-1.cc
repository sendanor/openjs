/**
 * Extension framework test
 */

#include <iostream>
#include <stdexcept>
#include <dlfcn.h>              // for dlopen

int main() {
	try {
		void* dl = dlopen("./dummy.so", RTLD_LAZY | RTLD_GLOBAL);
		if(!dl) throw std::runtime_error(dlerror());
		dlclose(dl);
		std::cout << "OK." << std::endl;
		return 0;
	} catch(std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	} catch(...) {
		std::cerr << "Exception: Unknown" << std::endl;
	}
	return 1;
}

/* EOF */
