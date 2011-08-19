#!/usr/bin/js

var i = 10;
i.foo = 123;
sys.stdout.writeln(typeof(i.toString()));
sys.stdout.writeln(typeof(i.valueOf()));
sys.stdout.writeln(i.foo);

/* EOF */
