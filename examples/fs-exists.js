#!/usr/bin/js
system.stdout.writeln("Filesystem test");

// Read from file
var filename = system.args[1];
system.stdout.writeln("filename='" + filename + "'");
if(Filesystem.exists(filename)) {
	system.stdout.writeln("file exists");
} else {
	system.stdout.writeln("file does not exist");
}

// EOF
