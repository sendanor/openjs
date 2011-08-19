#!/usr/bin/js
Extension.load("system");
Extension.load("stream");
Extension.load("string");
system.stdout.writeln("string stream tests");

// Reading test
new function() {
	system.stdout.writeln("\nReading test");
	var str = "Hello World";
	var s = new Stream("stringstream", {mode:"r",str:str} );
	var buf = s.read(5);
	system.stdout.writeln("> buf = '" + buf + "'");
}();

// Writing test
new function() {
	system.stdout.writeln("\nWriting test");
	var s = new Stream("stringstream", {mode:"w"} );
	s.write("Hello World");
	system.stdout.writeln("> s = '" + s + "'");
}();

system.stdout.writeln("\nend of tests");
