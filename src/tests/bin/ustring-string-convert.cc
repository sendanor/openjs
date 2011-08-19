
#include <sendanor/exception.h>
#include <iostream>
#define USE_GLIB 1
#include <sendanor/convert.h>

int main() {
	
	std::locale loc("");
	std::locale::global(loc);
	
	std::string strbuf = "Tämä on testi";
	std::cout << "strbuf=`" << strbuf << "'" << std::endl;
	
	Glib::ustring buf = sendanor::convert<Glib::ustring>(strbuf);
	std::cout << "buf=`" << buf << "'" << std::endl;
	
	std::string strbuf2 = sendanor::convert<std::string>(buf);
	std::cout << "strbuf2=`" << strbuf2 << "'" << std::endl;
	
	if(strbuf != strbuf2) throw RUNTIME_ERROR("strbuf != strbuf2");

	std::cout << "No errors." << std::endl;
}
