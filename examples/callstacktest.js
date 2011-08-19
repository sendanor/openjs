#!/usr/bin/js
/* This is based on a test from <http://novemberborn.net/javascript/callstack-size> */

function Foo() {
	Foo.count++;
}

Foo.count = 0;
Foo.prototype.invoke = function() {
	system.stdout.write("Maximum call stack size: " + Foo.count + "\n");
	new Foo().invoke();
};

/*
setTimeout(function() {
	system.stdout.write("Maximum call stack size: " + Foo.count + "\n");
}, 1000);
*/

new Foo().invoke();
