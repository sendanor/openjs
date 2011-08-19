#!/usr/bin/js
Extension.load("system");
Extension.load("math");
Extension.load("timer");

system.stdout.writeln("Timer test");

/* Test timer */
var t = new Timer();
var x = 2;
for(i=0; i<106033; i++) {
	
	if(Math.rand(2) == 0) x *= 2;
	else if(Math.rand(2) == 0) x *= 3;
	else if(Math.rand(2) == 0) x *= 5;
	else if(Math.rand(2) == 0) x *= 7;
	
	if(Math.rand(2) == 0) x /= 2;
	else if(Math.rand(2) == 0) x /= 3;
	else if(Math.rand(2) == 0) x /= 5;
	else if(Math.rand(2) == 0) x /= 7;
	
}
t.stop();

system.stdout.writeln("x = " + x);

system.stdout.writeln( "time spend: " + t.elapsed() + " ms");

/* EOF */
