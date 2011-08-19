/* Filesystem library
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 */

/* open file streams */
function do_open (filename, mode) {
	if(mode==undefined) mode = "r";
	return new Stream("file", {mode:mode, filename:filename});
}

/* Read file contents */
function do_readfile (filename) {
	var file = this.open(filename);
	var data = "";
	var buf = "";
	do {
		buf = file.read(64);
		data += buf;
	} while(buf.length != 0);
	file.close();
	return data;
}

/* Write contents to file */
function do_writefile (filename, data) {
	var file = this.open(filename, "w");
	file.write(data);
	file.close();
}

/* Create filesystem object */
Filesystem = BasicFilesystem;
Filesystem.open = do_open;
Filesystem.readfile = do_readfile;
Filesystem.writefile = do_writefile;

/** Register stream factory for files */
StreamFactory.add("file", BasicFilesystem.initStream);

/** Return stats for file */
Filesystem.stat = function(file) {
	return {size:Filesystem.size(file), time:Filesystem.lastWriteTime(file)};
}

/** Setup persistant cache for file stats */
Filesystem.setupCache = function (files) {
	var cache;
	if(Filesystem.cache) {
		cache = Filesystem.cache;
	} else {
		cache = {stat:{}};
		Filesystem.cache = cache;
		for(var i in files) if(files.hasOwnProperty(i)) {
			var file = String(files[i]);
			cache.stat[file] = Filesystem.stat(file);
		}
	}
	return cache;
}

/* Returns true if argument files has been changed since the begin of the program */
Filesystem.hasChangedFiles = function(files) {
	var cache = Filesystem.setupCache(files);
	for(var i in files) if(files.hasOwnProperty(i)) {
		var file = String(files[i]);
		if(!cache.stat[file]) return true;
		if(!cache.stat[file].size) return true;
		if(!cache.stat[file].time) return true;
		var current = Filesystem.stat(file);
		if(current.size != cache.stat[file].size) return true;
		if(current.time != cache.stat[file].time) return true;
	}
	return false;
}

/* EOF */
