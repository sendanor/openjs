/* Extended JavaScript Object library
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/** Create a clone from object */
Object.prototype.clone = function() {
	var newObj = (this instanceof Array) ? [] : {};
	for (i in this) if(this.hasOwnProperty(i)) {
		if (i === 'clone') continue;
		if (this[i] && typeof this[i] === "object") {
			newObj[i] = this[i].clone();
		} else {
			newObj[i] = this[i];
		}
	}
	return newObj;
};

/** Get available non-numeric keys from data record */
Object.keys = function(obj) {
	var keys = [];
	for(c in obj) if (obj.hasOwnProperty(c)) {
		//system.stderr.writeln( "<!-- Object.prototype.keys: typeof(c)='" + typeof(c) + "', c='"+ c +"' -->" );
		if( c.match(/^(0|[1-9][0-9]*)$/) === null ) {
			//system.stderr.writeln( "<!-- Object.prototype.keys: ..is match -->" );
			keys.push( c );
		}
	}
	return keys;
}

/** For each item in the object */
Object.prototype.foreach = function(callback) {
    for(var i in this) if(this.hasOwnProperty(i)) callback(i, this[i]);
    return this;
}

/** Blend object properties to another */
Object.blend = function(obj, arg) {
	var new_obj = obj.clone();
	
	for(var k in arg) if(arg.hasOwnProperty(k)) {
		//system.stderr.writeln("k = " + k);
		//system.stderr.writeln("arg[k] = " + arg[k]);
		//system.stderr.writeln("- new_obj[k] = " + new_obj[k]);
		new_obj[k] = arg[k];
		//system.stderr.writeln("+ new_obj[k] = " + new_obj[k]);
	}
	return new_obj;
}

/* EOF */

