/**
 * JavaScript part of the Loader extension
 */

/** */
function BinaryExtension(file) {
	if(this instanceof arguments.callee) {
		this.file = file;
		this.ptr = Loader.extension_load_dl(Loader.extension_context, file);
		if(!this.ptr) throw Error("Failed to load: " + file);
	} else {
		return new BinaryExtension(file);
	}
}

/** Get extension ID */
BinaryExtension.prototype.id = function() {
	return Loader.extension_id(this.ptr);
}

/** Get extension name */
BinaryExtension.prototype.name = function() {
	return Loader.extension_name(this.ptr);
}

/** Get extension version */
BinaryExtension.prototype.version = function() {
	return Loader.extension_version(this.ptr);
}


/** */
function SourceExtension(file) {
	if(this instanceof arguments.callee) {
		this.file = file;
		if(!Loader.load_js(file)) throw Error("Failed to load: "+file);
	} else {
		return new SourceExtension(file);
	}
}

/** Get extension ID */
SourceExtension.prototype.id = function() {
}

/** Get extension name */
SourceExtension.prototype.name = function() {
}

/** Get extension version */
SourceExtension.prototype.version = function() {
}


/** */
function Extension(raw) {
	if(this instanceof arguments.callee) {
		this.raw = raw;
	} else {
		return new Extension(raw);
	}
}

/** Get extension name */
Extension.prototype.file = function() {
	return this.raw.file;
}

/** Get extension name */
Extension.prototype.id = function() {
	return this.raw.id();
}

/** Get extension name */
Extension.prototype.name = function() {
	return this.raw.name();
}

/** Get extension version */
Extension.prototype.version = function() {
	return this.raw.version();
}

/** Load extension from file */
Extension.load = function(name) {
	
	var name = String(name).replace(/\.(js|dep|so)$/, "");
	
	if(!Extension.cache) Extension.cache = {};
	
	if(Extension.cache[name]) return Extension.cache[name];
	
	// Helper functions
	function ifexists(f) { return Loader.file_exists(f) ? f : undefined; }
	
	// Check files
	
	var file;
	if(name.match(/^\.?\//)) {
		file = name;
	} else {
		file = Loader.EXTENSION_PATH + "/" + name;
	}
	
	var dep_file = ifexists(file + ".dep");
	var dl_file = ifexists(file + Loader.EXTENSION_SUFFIX);
	var js_file = ifexists(file + ".js");
	if(! (dl_file || js_file )) throw Error("No extension found: " + name);
	
	// Load all dependencies
	var deps = dep_file ? Loader.read_dep_file(dep_file) : [];
	for(i in deps) if(deps.hasOwnProperty(i)) {
		var dep_name = deps[i];
		Extension.load(dep_name);
	}
	
	// Load the extension itself
	var failed = [];
	var dl_ext, js_ext;
	if(dl_file) {
		dl_ext = new Extension( new BinaryExtension(dl_file) );
		if(!dl_ext) failed.push(dl_file);
	}
	
	if(js_file) {
		js_ext = new Extension( new SourceExtension(js_file) );
		if(!js_ext) failed.push(js_file);
	}
	
	if(failed.length != 0) throw Error("Failed to load: " + failed.join(", "));
	if(js_ext && dl_ext) {
		Extension.cache[name] = [js_ext, dl_ext];
	} else {
		Extension.cache[name] = js_ext || dl_ext;
	}
	return Extension.cache[name];
}

/* Load configured extensions */
Extension.start = function() {
	for(i in Loader.config.libraries) if(Loader.config.libraries.hasOwnProperty(i)) {
		Extension.load(Loader.config.libraries[i]);
	}
}

Extension.start();

/* EOF */
