/* openjs::basicstream
 * $Id: basicstream.h 10034 2009-11-12 00:24:46Z jheusala $
 */

#ifndef OPENJS_EXTENSIONS_BASICSTREAM_V8_H
#define OPENJS_EXTENSIONS_BASICSTREAM_V8_H 1

namespace openjs {
  namespace extensions {
	/** Get stream internal object */
	v8::Handle<v8::Value> do_v8_iostream_internal(std::iostream*);
	
	/** Get stream internal object */
	v8::Handle<v8::Value> do_v8_ostream_internal(std::ostream*);
	
	/** Get stream internal object */
	v8::Handle<v8::Value> do_v8_istream_internal(std::istream*);
  }
}

#endif
