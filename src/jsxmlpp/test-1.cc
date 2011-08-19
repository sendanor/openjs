/*
 * Test for JavaScript View Preprosessor
 * Copyright 2010 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

#include <iostream>
#include <string>
#include <map>

#define DEBUG 1

#include "jsxmlpp.h"
#include "sendanor/logger.h"            // for SENDANOR_LOGGER_DEBUG

/* Our callback */
std::string fetch_data(const std::string& key) {
	SENDANOR_LOGGER_FUNCTION("fetch_data", "key='" << key << "'");
	static std::map<std::string, std::string> data;
	if(!data.empty()) return data[key];
	data["title"] = "Hello World";
	data["content"] = "This is a test of the real thing.\n\nDoes it work?";
	return data[key];
}
	
/* */
int main (int argc, char **argv) {
  SENDANOR_LOGGER_FUNCTION("main", "argc=" << argc << ", argv=...");
	
  try {
	
	sendanor::Logger::log().level_limit( 100000 );
	
	if(2>=argc) {
		std::cerr << "test-1: no arguments." << std::endl;
		std::cerr << "USAGE: " << argv[0] << " <COMMAND> <FILE>" << std::endl;
		return 1;
	}
	
	jsxmlpp::process xml(argv[1]);
	xml.start();
	xml.run(std::cout, argv[2], fetch_data);
	xml.write_errors(std::cerr);
	return xml.stop();
	
  } catch(std::exception& e) {
	std::cerr << "test-1: exception: " << e.what() << std::endl;
	return 1;
  } catch(...) {
	std::cerr << "test-1: exception: unknown exception" << std::endl;
	return 1;
  }
}

/* EOF */
