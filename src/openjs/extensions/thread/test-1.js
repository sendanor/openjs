/* SSL server example */

Extension.load("system");
Extension.load("./thread.js");

function a() {
	for(var i = 0; i<10; i++) {
		system.stdout.writeln("a = " + i );
		this.sleep(1000);
	}
}

function b() {
	var x = 0;
	for(var i = 0; i<10; i++) {
		x += i;
		system.stdout.writeln("x = " + x );
		this.sleep(500);
	}
}

var t1, t2;
try {
	Thread.startPreemption(100);
	
	t1 = new Thread(a);
	t2 = new Thread(b);
	
	t1.join();
	t2.join();
} catch (e) {
	system.stderr.writeln("Error: " + e);
} finally {
	if(t1) t1.close();
	if(t2) t2.close();
}

/* EOF */
