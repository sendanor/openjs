#include <iostream>
#include <stdint.h>
#include "gdome.h"

int main() {
	std::cout << "sizeof(char) = " << sizeof(char) << std::endl;
	std::cout << "sizeof(short int) = " << sizeof(short int) << std::endl;
	std::cout << "sizeof(int) = " << sizeof(int) << std::endl;
	std::cout << "sizeof(unsigned int) = " << sizeof(unsigned int) << std::endl;
	std::cout << "sizeof(unsigned long) = " << sizeof(unsigned long) << std::endl;
	std::cout << "sizeof(long int) = " << sizeof(long int) << std::endl;
	std::cout << "sizeof(long long int) = " << sizeof(long long int) << std::endl;
	std::cout << "sizeof(gpointer) = " << sizeof(gpointer) << std::endl;
	std::cout << "sizeof(gulong) = " << sizeof(gulong) << std::endl;
	std::cout << "sizeof(gchar) = " << sizeof(gchar) << std::endl;
	std::cout << "sizeof(intptr_t) = " << sizeof(intptr_t) << std::endl;
	std::cout << "sizeof(uintmax_t) = " << sizeof(uintmax_t) << std::endl;
}
