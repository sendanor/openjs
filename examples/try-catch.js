/* trim -- Trim functions for JavaScript
 * $Id: trim.js 8588 2009-08-02 15:15:50Z jheusala $
 */

Extension.load('system');

/* Test function */
function test(call) {
	system.stderr.writeln('test(' + call + ')');
	try {
		call();
	} catch(e) {
		system.stderr.writeln('+ catch(' + e + ')');
	} finally {
		system.stderr.writeln('+ finally');
	}
}

/* Tests */
test(function() { throw Error("Test Error"); });
test(function() { system.stderr.writeln('No errors.'); });

/* EOF */
