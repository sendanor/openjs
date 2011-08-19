#!/usr/bin/js

Extension.load("system");
Extension.load("stream");

system.stdout.writeln("stream reading test for files");

/* Actual test */
var s = new Stream("stdin");
var buf = s.readUntilEOF();
system.stdout.writeln("readed: '" + buf + "'");
