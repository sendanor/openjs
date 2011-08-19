#!/usr/bin/js
system.stdout.writeln("Filesystem test");

// Read from file
var file = Filesystem.open("test.txt");
var str = file.read(100);
file.close();
system.stdout.writeln("readed: '" + str + "'");

// EOF
