#!/usr/bin/js

function A() {
	this.a = "A";
	this.f = function() { return "F"; }
}

function B() {
	this.b = "B";
}
B.prototype = new A();

function C() {
	this.c = "C";
}
C.prototype = new B();

var c = new C();

system.stdout.writeln("c.a == " + c.a );
system.stdout.writeln("c.b == " + c.b );
system.stdout.writeln("c.c == " + c.c );
system.stdout.writeln("c.f == " + c.f() );

/* EOF */
