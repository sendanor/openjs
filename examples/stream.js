#!/usr/bin/js
system.stdout.writeln("stream reading test for files");

var s = new Stream("stdin");
var buf = s.read(100);
system.stdout.writeln("readed: '" + buf + "'");

//var s = new Stream("file", "r", "test.txt");
//var buf = s.read(100);
//system.stdout.writeln("readed: '" + buf + "'");

//var s = new Stream("file", "w", "test-output.txt");
//s.write("Hello World");
//system.stdout.writeln("wrote: '" + buf + "'");
