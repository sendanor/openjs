/*
 * Sendanor XSP -- Unit Tests -- generic v8
 * Copyright 2007 Sendanor <info@sendanor.fi>
 * $Id: util-test.cc 755 2007-11-28 23:15:00Z jheusala $
 */

#include <boost/test/unit_test.hpp>  // for Boost's UTF
//#include <sendanor/test.h>           // for BOOST_CHECK_EQUAL_DIFF
#include <v8/v8.h>

BOOST_AUTO_TEST_CASE( v8_test_1 ) {
	
	// Create a stack-allocated handle scope.
	v8::HandleScope handle_scope;
	
	// Create a new context.
	v8::Handle<v8::Context> context = v8::Context::New();
	
	// Enter the created context for compiling and
	// running the hello world script. 
	v8::Context::Scope context_scope(context);
	
	// Create a string containing the JavaScript source code.
	v8::Handle<v8::String> source = v8::String::New("'Hello' + ', World!'");
	
	// Compile the source code.
	v8::Handle<v8::Script> script = v8::Script::Compile(source);
	
	// Run the script to get the result.
	v8::Handle<v8::Value> result = script->Run();
	
	// Convert the result to an ASCII string and print it.
	v8::String::AsciiValue ascii(result);
	std::string strbuf(*ascii);
	
	BOOST_CHECK_EQUAL( strbuf, "Hello, World!" );
	
}

/* EOF */
