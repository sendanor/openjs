/* Extended JavaScript Library
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/* Timer */
function Timer(args) {
	if(this instanceof arguments.callee) {
		this.s = new Date();
	} else {
		return new Timer(args);
	}
}

/* Start timer */
Timer.prototype.start = function() { this.s = new Date(); }

/* Stop timer */
Timer.prototype.stop = function() { this.e = new Date(); }

/* Get start time */
Timer.prototype.getStartTime = function() { return this.s; }

/* Get end time */
Timer.prototype.getEndTime = function() { return this.e; }

/* Current elapsed time in milliseconds */
Timer.prototype.elapsed = function() {
	return this.e.getTime() - this.s.getTime();
}

/* String presentation */
Timer.prototype.toString = function() {
	return ""+this.elapsed();
}

/* EOF */
