/**
 * Dynamic Library API
 */

/** */
function DynamicLibrary(file) {
	if(this instanceof arguments.callee) {
		this.file = file;
		this.dl = Loader.dlopen(file, Loader.RTLD_LAZY | Loader.RTLD_GLOBAL);
	} else {
		return new DynamicLibrary(file);
	}
}

DynamicLibrary.prototype.close = function() {
	Loader.dlclose(this.dl);
}

/* EOF */
