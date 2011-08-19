#!/usr/bin/js

function object(o) {
	function F() { }
	F.prototype = o;
	return new F();
}

var a = {a:"A",f:function() { return "F"; }};
var b = object(a);
b.b = "B";
var c = object(b);
c.c = "C";

system.stdout.writeln("c.a == " + c.a );
system.stdout.writeln("c.b == " + c.b );
system.stdout.writeln("c.c == " + c.c );
system.stdout.writeln("c.f == " + c.f() );

/* EOF */
