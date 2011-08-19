#!/usr/bin/js

function f(x) {
	system.stdout.writeln("f(" + x + ")");
	return x;
}

var x = f(true) || f(false);
system.stdout.writeln( "x was " + x );

var x = f(false) || f(true);
system.stdout.writeln( "x was " + x );
