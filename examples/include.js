#!/usr/bin/js
/** XSP's include extension test */

include("trim.js");

var tmp = "   this is a test    ";
system.stdout.writeln("tmp = '" + tmp + "'");
system.stdout.writeln("trim(tmp) = '" + trim(tmp) + "'");
