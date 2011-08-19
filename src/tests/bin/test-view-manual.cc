/* 
 * Test for view preprosessor
 */

#include <iostream>
#include <string>

/* */
int main (int argc, char **argv) {
	
	if(1>=argc) {
		std::cerr << "view: no arguments." << std::endl;
		std::cerr << "USAGE: " << argv[0] << " <FILE>" << std::endl;
		return 1;
	}
	
	std::cerr << "view: DEBUG: file = '" << argv[1] << "'" << std::endl;
	
	parse_file(argv[1]);
	return 0;
}

/* EOF */
