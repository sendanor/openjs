#!/usr/bin/js
var a = 'moh';
for (i = 0; i <= 3000; i++) {
	a = a + i;
	BasicSys.exec("echo", a);
}
