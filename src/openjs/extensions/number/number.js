/* Extended JavaScript Number library
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/* Format number */
Number.prototype.formatString = function(num, comma) {
	return this.toFixed(num).toString().replace(/\.([0-9]*)$/, comma+"$1");
}

/** Returns true if the number is odd */
Number.prototype.isOdd = function () {
	return new Boolean(this.valueOf()&1);
}

/** Returns true if the number is even */
Number.prototype.isEven = function (){
	return this.isOdd() == false;
}

/* EOF */

