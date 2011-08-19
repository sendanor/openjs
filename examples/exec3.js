#!/usr/bin/js
Extension.load("system");
Extension.load("stream");
Extension.load("string");
system.stdout.writeln("string stream tests");

// Execute grep
new function() {
	system.stdout.writeln("\nReading test");
	var input = new Stream("stringstream", {mode:"r",str:"Hello World\n"} );
	input.sync();
	var output = new Stream("stringstream", {mode:"w"} );
	system.exec3(input, output, system.stderr, "grep", "--line-buffered", "-Eo", "Hello");
	system.stdout.writeln("\nResults:\n" + output );
	input.close();
	output.close();
}();

system.stdout.writeln("\nend of tests");
