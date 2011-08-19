/*
	Referer number functions
	(for Javascript)
	by: eXtranium 2009 http://extranium.net/


	(c) Sendanor 2009 http://www.sendanor.fi/


	created: Mo 2009-01-05
	updated: We 2009-01-07
	-----


	Note: Functions doesn't check is parameter string-type!


	Functions:

		LeaveOnlyDigits		remove non-digits from string
		RefNumCalculateDigit	calculate check-digit needed in referer number
		RefNumCreate		generate referer number
		RefNumCheck		check referer number
*/

this.LeaveOnlyDigits = function(s) {
	// remove any non-digit (0..9) chars from string s

	var t = '';		// new string
	var l = s.length;	// length of old string
	for (var i=0; i<l; i++)
		if ((s[i]>='0') && (s[i]<='9')) t += s[i];	// get only the digits
	return (t);
} // fun



this.RefNumCalculateDigit = function(num) {
	// function calculates check-digit for complete referer number
	// num = string of digits ('0'..'9')

	num = this.LeaveOnlyDigits(num);	// we need only digits 0..9

	var index = num.length;			// set char pointer to end-of-string
	if (!index || (index>19)) return false;	// real referer number is 1..19 + 1 chars long

	var calc = 9;	// sum calculator
	var mult = 0;	// multiplier aka weight (7, 3, 1, 7, 3, 1,...)

	// loop with all digits in num backwards
	while (index--) {
		if (!(mult>>=1)) mult = 7;	// update weight (7, 3, 1, 7, 3, 1,...)
		calc += mult * (num[index].charCodeAt(0)-48);	// add weight*digit to sum
	} // while

	return String.fromCharCode(57-(calc%10));
} // fun



this.RefNumCreate = function (num) {
	// create referer number by adding check-digit to num
	// num = string of digits ('0'..'9')

	num = this.LeaveOnlyDigits(num);	// remove non-digits
	return num+this.RefNumCalculateDigit(num);
} // fun



this.RefNumCheck = function (refnum) {
	// check is referer number legal
	// refnum = referer number, string of digits '0'..'9'

	var t = '';	// this becomes to fixed string
	var l = refnum.length;

	for (var i=0; i<l; i++) {
		var c = refnum[i];
		if (c==' ') continue;	// space-bar allowed (but not used in calculations)
		if ((c<'0') || (c>'9')) return false;	// non-digits not allowed
		t += c;
	} // for

	return this.RefNumCreate(t.substr(0,t.length-1))==t;
} // fun


// -=EOF=-
