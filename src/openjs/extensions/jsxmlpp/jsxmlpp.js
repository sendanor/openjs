/* JavaScript XML Pipe Preprosessor bindings */

/* Constructor */
function jsxmlpp(program) {
	if(this instanceof arguments.callee) {
		Extension.load("basicjsxmlpp");
		this.pointer = basicjsxmlpp.constructor(program);
	} else {
		return new jsxmlpp(program);
	}
}

/* Start external preprosessor */
jsxmlpp.prototype.start = function() {
	basicjsxmlpp.start(this.pointer);
}

/* Run template file at the processor. Writes output to out stream. */
jsxmlpp.prototype.run = function(out, file) {
	basicjsxmlpp.run(this.pointer, out, file);
}

/* Write errors to output stream */
jsxmlpp.prototype.writeErrors = function(out) {
	basicjsxmlpp.writeErrors(this.pointer, out);
}

/* Stop external preprosessor */
jsxmlpp.prototype.stop = function() {
	basicjsxmlpp.stop(this.pointer);
}

/* Check if the preprosessor is running */
jsxmlpp.prototype.isRunning = function() {
	return basicjsxmlpp.isRunning(this.pointer);
}

/* EOF */
