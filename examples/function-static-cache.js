/* Builder function tests */
Extension.load("system");
Extension.load("array");
Extension.load("object");

/* dump */
function dump(item, name) {
	if(typeof item === 'array') {
		var buf = name + " of type array:\n";
		for(k in item) buf += dump(item[k], name + "." + k);
		return buf;
	}
	
	if(typeof item === 'object') {
		var buf = name + " of type object:\n";
		for(k in item) buf += dump(item[k], name + "." + k);
		return buf;
	}
	
	if(typeof item === 'function') {
		var buf = name + " of type function with:\n";
		for(k in item) {
			if(typeof item[k] === 'function') {
				buf += name+"."+k+" of type " + (typeof item[k]) + "\n";
			} else {
				buf += dump(item[k], name+"."+k) + "\n";
			}
		}
		return buf;
	}
	
	return name + " of type " + (typeof item) + " = " + item + "\n";
}

/* Get cache object from function and initialize it if missing */
Function.cache = function(f) {
	if(!f.cache) f.cache = {};
	return f.cache;
}

/* */
function f(arg) {
	//system.stdout.writeln( dump(arguments.callee, "arguments.callee") );
	var cache = Function.cache(arguments.callee);
	if(!cache.counter) cache.counter = 0;
	cache.counter++;
	system.stdout.writeln( "f.cache.counter = " + cache.counter);
}

/* */
function g(arg) {
	//system.stdout.writeln( dump(arguments.callee, "arguments.callee") );
	//system.stdout.writeln( dump(arguments.length, "arguments.length") );
	var cache = Function.cache(arguments.callee);
	system.stdout.writeln( "g.cache.counter = " + cache.counter);
}

/* Output results */
f();
f();
f();

g();
g();
g();

/* EOF */
