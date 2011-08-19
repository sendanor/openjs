/* JavaScript Thread Library
 * Copyright 2010 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/*
 * PLEASE NOTE! THIS LIBRARY IS IN A VERY EXPERIMENTAL STATE.
 * 
 * Please note that Google V8 does not actually support more than one thread to 
 * run JS code per process.
 * 
 * So, at the moment threads will only be run in paraller. OpenJS
 * extensions should release the locking mechanisms for every call that would 
 * block the engine (reads, writes etc).
 * 
 */

/* Thread constructor */
function Thread(fun) {
	if(this instanceof arguments.callee) {
		Extension.load("basicthread");
		if(typeof(fun) !== "function") throw Error("argument not function");
		this.pointer = basicthread.constructor(this, fun);
		if(!this.pointer) throw Error("!this.pointer");
	} else {
		return new Thread(fun);
	}
}

/* Destroy the thread object */
Thread.prototype.close = function() {
	if(this.pointer) basicthread.destructor(this.pointer);
}

/* Join thread */
Thread.prototype.join = function() {
	if(!this.pointer) throw Error("!this.pointer");
	basicthread.join(this.pointer);
}

/*  */
Thread.prototype.joinable = function() {
	if(!this.pointer) throw Error("!this.pointer");
	return basicthread.joinable(this.pointer);
}

/* Tries to join thread until wait_until amount of ms is spent and returns true if successful. */
Thread.prototype.timedJoin = function(wait_until) {
	if(!this.pointer) throw Error("!this.pointer");
	return basicthread.timedJoin(this.pointer, wait_until);
}

/*  */
Thread.prototype.detach = function() {
	if(!this.pointer) throw Error("!this.pointer");
	basicthread.detach(this.pointer);
}

/*  */
Thread.prototype.interrupt = function() {
	if(!this.pointer) throw Error("!this.pointer");
	basicthread.interrupt(this.pointer);
}

/* */
Thread.prototype.hardwareConcurrency = function() {
	if(!this.pointer) throw Error("!this.pointer");
	return basicthread.hardwareConcurrency(this.pointer);
}

/* */
Thread.prototype.sleep = function(until_ms) {
	if(!this.pointer) throw Error("!this.pointer");
	basicthread.sleep(this.pointer, until_ms);
}

/* */
Thread.prototype.yield = function() {
	if(!this.pointer) throw Error("!this.pointer");
	basicthread.yield(this.pointer);
}

/* Start preemption */
Thread.startPreemption = function(every_n_ms) {
	basicthread.startPreemption(every_n_ms);
}

/* Stop preemption */
Thread.stopPreemption = function() {
	basicthread.stopPreemption();
}

/* EOF */
