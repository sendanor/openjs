/* Extended JavaScript Array library
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/** Search array for a value
 * \return Array index or undefined
 */
Array.prototype.search = function(v){
	for (i=0;i<this.length;i++) {
		if (this[i]===v) return i;
	}
}

/* Run callback for each array item */
Array.prototype.foreach = function(callback) {
	for(var i in this) if(this.hasOwnProperty(i)) callback(this[i]);
	return this;
}

/* Remove adjacent unique elements from array */
Array.prototype.adjacentUnique = function() {
	var last;
	var tmp = [];
	this.foreach(function(record) {
		if(record === last) return;
		tmp.push(record);
		last = record;
	});
	return tmp;
}

/* EOF */

