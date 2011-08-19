#!/usr/bin/js
/* See also private_object_cxx.cc */

/* Counter object builder */
function buildMyCounter() {
	// Private member variable
	var m_count = 0;
	
	// Return our new object
	return { value: function() { return m_count; }
	       , next: function() { m_count += 1; }
	       };
}

/* Negative counter object builder */
function buildNegativeCounter() {
	// Private member variable
	var m_count = 1000;
	
	// Return our new object
	return { value: function() { return m_count; }
	       , next: function() { m_count -= 1; }
	       };
}

/* Print current and 10 next counter values */
function testCounter(counter) {
	for(var i=0; i<=10; i=i+1) {
		system.stdout.writeln("counter = " + counter.value() );
		counter.next();
	}
}

// Test the counter
var counter = buildMyCounter();
testCounter(counter);

var n_counter = buildNegativeCounter();
testCounter(n_counter);

/* EOF */
