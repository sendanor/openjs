#!/usr/bin/js
system.stdout.writeln("Filesystem write test");

// Write to file
var out = Filesystem.open("test-output.txt", "w");
out.writeln("Hello World");
out.close();

system.stdout.writeln("test-output.txt has been wrote.");

// EOF
