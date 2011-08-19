#!/usr/bin/js
/* This is the original standalone include function test */

/* Read file contents */
this.Filesystem.readfile = function readfile (filename) {
    var file = Filesystem.open(filename);
    var data = "";
    var buf = "";
    do {
        buf = file.read(64);
        data += buf;
    } while(buf.length != 0);
    return data;
}

/** Include */
this.include = function include (filename) {
	var data = Filesystem.readfile(filename);
	eval(data);
}

/* Include trim and use it */
include("trim.js");

var tmp = "   this is a test    ";
system.stdout.writeln("tmp = '" + tmp + "'");
system.stdout.writeln("trim(tmp) = '" + trim(tmp) + "'");
