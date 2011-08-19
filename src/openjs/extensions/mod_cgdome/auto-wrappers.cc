/** Wrapper for 'GdomeDOMString*' 'gdome_str_mkref_dup' (const gchar*).
 * Configuration line: 'GdomeDOMString*,gdome_str_mkref_dup,const gchar*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_str_mkref_dup(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_str_mkref_dup", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	std::string mytmp0 = openjs::convert<std::string>(args[0]);
	const char* myarg0 = mytmp0.c_str();
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_str_mkref_dup(" << myarg0 << ")");
	unsigned int ret = cgate_gdome_str_mkref_dup(myarg0);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_str_ref' (GdomeDOMString*).
 * Configuration line: 'void,gdome_str_ref,GdomeDOMString*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_str_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_str_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDOMString*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_str_ref(" << myarg0 << ")");
	cgate_gdome_str_ref(myarg0);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_str_unref' (GdomeDOMString*).
 * Configuration line: 'void,gdome_str_unref,GdomeDOMString*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_str_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_str_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDOMString*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_str_unref(" << myarg0 << ")");
	cgate_gdome_str_unref(myarg0);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'int' 'gdome_str_length' (GdomeDOMString*).
 * Configuration line: 'int,gdome_str_length,GdomeDOMString*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_str_length(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_str_length", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDOMString*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_str_length(" << myarg0 << ")");
	int ret = cgate_gdome_str_length(myarg0);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_str_isEmpty' (GdomeDOMString*).
 * Configuration line: 'GdomeBoolean,gdome_str_isEmpty,GdomeDOMString*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_str_isEmpty(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_str_isEmpty", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDOMString*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_str_isEmpty(" << myarg0 << ")");
	int ret = cgate_gdome_str_isEmpty(myarg0);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gchar' 'gdome_str_charAt' (GdomeDOMString* int).
 * Configuration line: 'gchar,gdome_str_charAt,GdomeDOMString*,int,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_str_charAt(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_str_charAt", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDOMString*");
	int myarg1 = args[1]->Int32Value();
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_str_charAt(" << myarg0 << ", " << myarg1 << ")");
	char ret = cgate_gdome_str_charAt(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	std::string retstr(1, ret);
	v8::Handle<v8::Value> v_ret = openjs::convert<v8::Handle<v8::Value> >(retstr);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMImplementation*' 'gdome_di_mkref' ().
 * Configuration line: 'GdomeDOMImplementation*,gdome_di_mkref,,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_di_mkref(const v8::Arguments&
#ifndef DEBUG
/* args*/
#else
 args
#endif
) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_di_mkref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_di_mkref()");
	unsigned int ret = cgate_gdome_di_mkref();
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMImplementation*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_di_ref' (GdomeDOMImplementation* GdomeException*).
 * Configuration line: 'void,gdome_di_ref,GdomeDOMImplementation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_di_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_di_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDOMImplementation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_di_ref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_di_ref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_di_unref' (GdomeDOMImplementation* GdomeException*).
 * Configuration line: 'void,gdome_di_unref,GdomeDOMImplementation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_di_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_di_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDOMImplementation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_di_unref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_di_unref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocumentType*' 'gdome_di_createDocumentType' (GdomeDOMImplementation* GdomeDOMString* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeDocumentType*,gdome_di_createDocumentType,GdomeDOMImplementation*,GdomeDOMString*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_di_createDocumentType(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_di_createDocumentType", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDOMImplementation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeDOMString*");
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_di_createDocumentType(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	unsigned int ret = cgate_gdome_di_createDocumentType(myarg0, myarg1, myarg2, myarg3, myarg4);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocumentType*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocument*' 'gdome_di_createDocument' (GdomeDOMImplementation* GdomeDOMString* GdomeDOMString* GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_di_createDocument,GdomeDOMImplementation*,GdomeDOMString*,GdomeDOMString*,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_di_createDocument(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_di_createDocument", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDOMImplementation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeDocumentType*");
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_di_createDocument(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	unsigned int ret = cgate_gdome_di_createDocument(myarg0, myarg1, myarg2, myarg3, myarg4);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocument*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_di_freeDoc' (GdomeDOMImplementation* GdomeDocument* GdomeException*).
 * Configuration line: 'void,gdome_di_freeDoc,GdomeDOMImplementation*,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_di_freeDoc(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_di_freeDoc", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDOMImplementation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDocument*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_di_freeDoc(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_di_freeDoc(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocument*' 'gdome_di_createDocFromURI' (GdomeDOMImplementation* const char* unsigned int GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_di_createDocFromURI,GdomeDOMImplementation*,const char*,unsigned int,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_di_createDocFromURI(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_di_createDocFromURI", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDOMImplementation*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	const char* myarg1 = mytmp1.c_str();
	unsigned int myarg2 = (unsigned int)args[2]->Uint32Value();
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_di_createDocFromURI(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_di_createDocFromURI(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocument*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocument*' 'gdome_di_createDocFromMemory' (GdomeDOMImplementation* char* unsigned int GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_di_createDocFromMemory,GdomeDOMImplementation*,char*,unsigned int,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_di_createDocFromMemory(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_di_createDocFromMemory", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDOMImplementation*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	std::vector<char> myvec1(mytmp1.begin(), mytmp1.end());
	myvec1.push_back(0);
	char* myarg1 = &myvec1[0];
	unsigned int myarg2 = (unsigned int)args[2]->Uint32Value();
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_di_createDocFromMemory(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_di_createDocFromMemory(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocument*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_di_saveDocToFile' (GdomeDOMImplementation* GdomeDocument* const char* GdomeSavingCode GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_di_saveDocToFile,GdomeDOMImplementation*,GdomeDocument*,const char*,GdomeSavingCode,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_di_saveDocToFile(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_di_saveDocToFile", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDOMImplementation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDocument*");
	const std::string mytmp2 = openjs::convert<std::string>(args[2]);
	const char* myarg2 = mytmp2.c_str();
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_di_saveDocToFile(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	int ret = cgate_gdome_di_saveDocToFile(myarg0, myarg1, myarg2, myarg3, myarg4);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_di_saveDocToFileEnc' (GdomeDOMImplementation* GdomeDocument* const char* const char* GdomeSavingCode GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_di_saveDocToFileEnc,GdomeDOMImplementation*,GdomeDocument*,const char*,const char*,GdomeSavingCode,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_di_saveDocToFileEnc(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_di_saveDocToFileEnc", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDOMImplementation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDocument*");
	const std::string mytmp2 = openjs::convert<std::string>(args[2]);
	const char* myarg2 = mytmp2.c_str();
	const std::string mytmp3 = openjs::convert<std::string>(args[3]);
	const char* myarg3 = mytmp3.c_str();
	int myarg4 = args[4]->Int32Value();
	int_pointer_type myarg5 = ptr_from_v8(args[5], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_di_saveDocToFileEnc(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ", " << myarg5 << ")");
	int ret = cgate_gdome_di_saveDocToFileEnc(myarg0, myarg1, myarg2, myarg3, myarg4, myarg5);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_di_saveDocToMemory' (GdomeDOMImplementation* GdomeDocument* char** GdomeSavingCode GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_di_saveDocToMemory,GdomeDOMImplementation*,GdomeDocument*,char**,GdomeSavingCode,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_di_saveDocToMemory(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_di_saveDocToMemory", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDOMImplementation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDocument*");
	v8::Handle<v8::Object> myobj2 = args[2]->ToObject();
	char* mybuf2 = 0;
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_di_saveDocToMemory(" << myarg0 << ", " << myarg1 << ", " << &mybuf2 << ", " << myarg3 << ", " << myarg4 << ")");
	int ret = cgate_gdome_di_saveDocToMemory(myarg0, myarg1, &mybuf2, myarg3, myarg4);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	std::string mystr2(mybuf2, std::strlen(mybuf2));
	myobj2->Set(v8::String::New("value"), openjs::convert<v8::Handle<v8::Value> >(mystr2)->ToString());
	free(mybuf2);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_di_saveDocToMemoryEnc' (GdomeDOMImplementation* GdomeDocument* char** const char* GdomeSavingCode GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_di_saveDocToMemoryEnc,GdomeDOMImplementation*,GdomeDocument*,char**,const char*,GdomeSavingCode,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_di_saveDocToMemoryEnc(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_di_saveDocToMemoryEnc", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDOMImplementation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDocument*");
	v8::Handle<v8::Object> myobj2 = args[2]->ToObject();
	char* mybuf2 = 0;
	const std::string mytmp3 = openjs::convert<std::string>(args[3]);
	const char* myarg3 = mytmp3.c_str();
	int myarg4 = args[4]->Int32Value();
	int_pointer_type myarg5 = ptr_from_v8(args[5], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_di_saveDocToMemoryEnc(" << myarg0 << ", " << myarg1 << ", " << &mybuf2 << ", " << myarg3 << ", " << myarg4 << ", " << myarg5 << ")");
	int ret = cgate_gdome_di_saveDocToMemoryEnc(myarg0, myarg1, &mybuf2, myarg3, myarg4, myarg5);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	std::string mystr2(mybuf2, std::strlen(mybuf2));
	myobj2->Set(v8::String::New("value"), openjs::convert<v8::Handle<v8::Value> >(mystr2)->ToString());
	free(mybuf2);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_df_ref' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'void,gdome_df_ref,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_ref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_df_ref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_df_unref' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'void,gdome_df_unref,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_unref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_df_unref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gpointer' 'gdome_df_query_interface' (GdomeDocumentFragment* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_df_query_interface,GdomeDocumentFragment*,const char*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_query_interface(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_query_interface", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	const char* myarg1 = mytmp1.c_str();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_query_interface(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_df_query_interface(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_df_nodeName' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_df_nodeName,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_nodeName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_nodeName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_nodeName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_df_nodeName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_df_nodeValue' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_df_nodeValue,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_nodeValue(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_df_nodeValue(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_df_set_nodeValue' (GdomeDocumentFragment* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_df_set_nodeValue,GdomeDocumentFragment*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_set_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_set_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_set_nodeValue(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_df_set_nodeValue(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'unsigned short' 'gdome_df_nodeType' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'unsigned short,gdome_df_nodeType,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_nodeType(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_nodeType", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_nodeType(" << myarg0 << ", " << myarg1 << ")");
	unsigned short int ret = cgate_gdome_df_nodeType(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_df_parentNode' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_parentNode,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_parentNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_parentNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_parentNode(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_df_parentNode(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_df_childNodes' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_df_childNodes,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_childNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_childNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_childNodes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_df_childNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_df_firstChild' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_firstChild,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_firstChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_firstChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_firstChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_df_firstChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_df_lastChild' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_lastChild,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_lastChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_lastChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_lastChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_df_lastChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_df_previousSibling' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_previousSibling,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_previousSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_previousSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_previousSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_df_previousSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_df_nextSibling' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_nextSibling,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_nextSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_nextSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_nextSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_df_nextSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_df_attributes' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_df_attributes,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_attributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_attributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_attributes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_df_attributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNamedNodeMap*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocument*' 'gdome_df_ownerDocument' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_df_ownerDocument,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_ownerDocument(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_ownerDocument", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_ownerDocument(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_df_ownerDocument(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocument*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_df_insertBefore' (GdomeDocumentFragment* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_insertBefore,GdomeDocumentFragment*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_insertBefore(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_insertBefore", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_insertBefore(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_df_insertBefore(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_df_replaceChild' (GdomeDocumentFragment* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_replaceChild,GdomeDocumentFragment*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_replaceChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_replaceChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_replaceChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_df_replaceChild(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_df_removeChild' (GdomeDocumentFragment* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_removeChild,GdomeDocumentFragment*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_removeChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_removeChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_removeChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_df_removeChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_df_appendChild' (GdomeDocumentFragment* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_appendChild,GdomeDocumentFragment*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_appendChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_appendChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_appendChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_df_appendChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_df_hasChildNodes' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_df_hasChildNodes,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_hasChildNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_hasChildNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_hasChildNodes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_df_hasChildNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_df_cloneNode' (GdomeDocumentFragment* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_cloneNode,GdomeDocumentFragment*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_cloneNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_cloneNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int myarg1 = args[1]->Int32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_cloneNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_df_cloneNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_df_normalize' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'void,gdome_df_normalize,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_normalize(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_normalize", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_normalize(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_df_normalize(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_df_isSupported' (GdomeDocumentFragment* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_df_isSupported,GdomeDocumentFragment*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_isSupported(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_isSupported", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_isSupported(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	int ret = cgate_gdome_df_isSupported(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_df_namespaceURI' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_df_namespaceURI,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_namespaceURI(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_namespaceURI", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_namespaceURI(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_df_namespaceURI(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_df_prefix' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_df_prefix,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_prefix(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_df_prefix(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_df_set_prefix' (GdomeDocumentFragment* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_df_set_prefix,GdomeDocumentFragment*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_set_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_set_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_set_prefix(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_df_set_prefix(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_df_localName' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_df_localName,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_localName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_localName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_localName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_df_localName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_df_hasAttributes' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_df_hasAttributes,GdomeDocumentFragment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_hasAttributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_hasAttributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_hasAttributes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_df_hasAttributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_df_addEventListener' (GdomeDocumentFragment* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_df_addEventListener,GdomeDocumentFragment*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_addEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_addEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_addEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_df_addEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_df_removeEventListener' (GdomeDocumentFragment* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_df_removeEventListener,GdomeDocumentFragment*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_removeEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_removeEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_removeEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_df_removeEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_df_dispatchEvent' (GdomeDocumentFragment* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_df_dispatchEvent,GdomeDocumentFragment*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_dispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_dispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_dispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_df_dispatchEvent(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_df_subTreeDispatchEvent' (GdomeDocumentFragment* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_df_subTreeDispatchEvent,GdomeDocumentFragment*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_subTreeDispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_subTreeDispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_subTreeDispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_df_subTreeDispatchEvent(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_df_canAppend' (GdomeDocumentFragment* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_df_canAppend,GdomeDocumentFragment*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_df_canAppend(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_df_canAppend", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentFragment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_df_canAppend(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_df_canAppend(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocumentType*' 'gdome_doc_doctype' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDocumentType*,gdome_doc_doctype,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_doctype(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_doctype", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_doctype(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_doc_doctype(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocumentType*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMImplementation*' 'gdome_doc_implementation' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDOMImplementation*,gdome_doc_implementation,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_implementation(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_implementation", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_implementation(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_doc_implementation(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMImplementation*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeElement*' 'gdome_doc_documentElement' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeElement*,gdome_doc_documentElement,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_documentElement(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_documentElement", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_documentElement(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_doc_documentElement(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeElement*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeElement*' 'gdome_doc_createElement' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeElement*,gdome_doc_createElement,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_createElement(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_createElement", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_createElement(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_doc_createElement(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeElement*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocumentFragment*' 'gdome_doc_createDocumentFragment' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDocumentFragment*,gdome_doc_createDocumentFragment,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_createDocumentFragment(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_createDocumentFragment", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_createDocumentFragment(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_doc_createDocumentFragment(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocumentFragment*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeText*' 'gdome_doc_createTextNode' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeText*,gdome_doc_createTextNode,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_createTextNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_createTextNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_createTextNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_doc_createTextNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeText*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeComment*' 'gdome_doc_createComment' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeComment*,gdome_doc_createComment,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_createComment(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_createComment", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_createComment(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_doc_createComment(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeComment*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeCDATASection*' 'gdome_doc_createCDATASection' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeCDATASection*,gdome_doc_createCDATASection,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_createCDATASection(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_createCDATASection", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_createCDATASection(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_doc_createCDATASection(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeCDATASection*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeProcessingInstruction*' 'gdome_doc_createProcessingInstruction' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeProcessingInstruction*,gdome_doc_createProcessingInstruction,GdomeDocument*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_createProcessingInstruction(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_createProcessingInstruction", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_createProcessingInstruction(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_doc_createProcessingInstruction(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeProcessingInstruction*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeAttr*' 'gdome_doc_createAttribute' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeAttr*,gdome_doc_createAttribute,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_createAttribute(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_createAttribute", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_createAttribute(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_doc_createAttribute(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeAttr*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeEntityReference*' 'gdome_doc_createEntityReference' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeEntityReference*,gdome_doc_createEntityReference,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_createEntityReference(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_createEntityReference", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_createEntityReference(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_doc_createEntityReference(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeEntityReference*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_doc_getElementsByTagName' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_doc_getElementsByTagName,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_getElementsByTagName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_getElementsByTagName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_getElementsByTagName(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_doc_getElementsByTagName(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_importNode' (GdomeDocument* GdomeNode* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_importNode,GdomeDocument*,GdomeNode*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_importNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_importNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int myarg2 = args[2]->Int32Value();
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_importNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_doc_importNode(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeElement*' 'gdome_doc_createElementNS' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeElement*,gdome_doc_createElementNS,GdomeDocument*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_createElementNS(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_createElementNS", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_createElementNS(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_doc_createElementNS(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeElement*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeAttr*' 'gdome_doc_createAttributeNS' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeAttr*,gdome_doc_createAttributeNS,GdomeDocument*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_createAttributeNS(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_createAttributeNS", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_createAttributeNS(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_doc_createAttributeNS(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeAttr*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_doc_getElementsByTagNameNS' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_doc_getElementsByTagNameNS,GdomeDocument*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_getElementsByTagNameNS(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_getElementsByTagNameNS", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_getElementsByTagNameNS(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_doc_getElementsByTagNameNS(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeElement*' 'gdome_doc_getElementById' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeElement*,gdome_doc_getElementById,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_getElementById(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_getElementById", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_getElementById(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_doc_getElementById(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeElement*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeEvent*' 'gdome_doc_createEvent' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeEvent*,gdome_doc_createEvent,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_createEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_createEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_createEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_doc_createEvent(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeEvent*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_doc_ref' (GdomeDocument* GdomeException*).
 * Configuration line: 'void,gdome_doc_ref,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_ref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_doc_ref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_doc_unref' (GdomeDocument* GdomeException*).
 * Configuration line: 'void,gdome_doc_unref,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_unref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_doc_unref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gpointer' 'gdome_doc_query_interface' (GdomeDocument* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_doc_query_interface,GdomeDocument*,const char*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_query_interface(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_query_interface", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	const char* myarg1 = mytmp1.c_str();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_query_interface(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_doc_query_interface(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_doc_nodeName' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_doc_nodeName,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_nodeName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_nodeName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_nodeName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_doc_nodeName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_doc_nodeValue' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_doc_nodeValue,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_nodeValue(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_doc_nodeValue(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_doc_set_nodeValue' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_doc_set_nodeValue,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_set_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_set_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_set_nodeValue(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_doc_set_nodeValue(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'unsigned short' 'gdome_doc_nodeType' (GdomeDocument* GdomeException*).
 * Configuration line: 'unsigned short,gdome_doc_nodeType,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_nodeType(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_nodeType", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_nodeType(" << myarg0 << ", " << myarg1 << ")");
	unsigned short int ret = cgate_gdome_doc_nodeType(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_parentNode' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_parentNode,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_parentNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_parentNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_parentNode(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_doc_parentNode(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_doc_childNodes' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_doc_childNodes,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_childNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_childNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_childNodes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_doc_childNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_firstChild' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_firstChild,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_firstChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_firstChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_firstChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_doc_firstChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_lastChild' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_lastChild,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_lastChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_lastChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_lastChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_doc_lastChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_previousSibling' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_previousSibling,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_previousSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_previousSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_previousSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_doc_previousSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_nextSibling' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_nextSibling,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_nextSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_nextSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_nextSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_doc_nextSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_doc_attributes' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_doc_attributes,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_attributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_attributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_attributes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_doc_attributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNamedNodeMap*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocument*' 'gdome_doc_ownerDocument' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_doc_ownerDocument,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_ownerDocument(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_ownerDocument", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_ownerDocument(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_doc_ownerDocument(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocument*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_insertBefore' (GdomeDocument* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_insertBefore,GdomeDocument*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_insertBefore(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_insertBefore", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_insertBefore(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_doc_insertBefore(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_replaceChild' (GdomeDocument* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_replaceChild,GdomeDocument*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_replaceChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_replaceChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_replaceChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_doc_replaceChild(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_removeChild' (GdomeDocument* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_removeChild,GdomeDocument*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_removeChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_removeChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_removeChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_doc_removeChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_appendChild' (GdomeDocument* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_appendChild,GdomeDocument*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_appendChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_appendChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_appendChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_doc_appendChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_doc_hasChildNodes' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_doc_hasChildNodes,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_hasChildNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_hasChildNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_hasChildNodes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_doc_hasChildNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_cloneNode' (GdomeDocument* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_cloneNode,GdomeDocument*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_cloneNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_cloneNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int myarg1 = args[1]->Int32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_cloneNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_doc_cloneNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_doc_normalize' (GdomeDocument* GdomeException*).
 * Configuration line: 'void,gdome_doc_normalize,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_normalize(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_normalize", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_normalize(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_doc_normalize(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_doc_isSupported' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_doc_isSupported,GdomeDocument*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_isSupported(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_isSupported", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_isSupported(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	int ret = cgate_gdome_doc_isSupported(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_doc_namespaceURI' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_doc_namespaceURI,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_namespaceURI(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_namespaceURI", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_namespaceURI(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_doc_namespaceURI(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_doc_prefix' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_doc_prefix,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_prefix(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_doc_prefix(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_doc_set_prefix' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_doc_set_prefix,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_set_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_set_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_set_prefix(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_doc_set_prefix(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_doc_localName' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_doc_localName,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_localName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_localName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_localName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_doc_localName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_doc_hasAttributes' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_doc_hasAttributes,GdomeDocument*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_hasAttributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_hasAttributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_hasAttributes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_doc_hasAttributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_doc_addEventListener' (GdomeDocument* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_doc_addEventListener,GdomeDocument*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_addEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_addEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_addEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_doc_addEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_doc_removeEventListener' (GdomeDocument* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_doc_removeEventListener,GdomeDocument*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_removeEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_removeEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_removeEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_doc_removeEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_doc_dispatchEvent' (GdomeDocument* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_doc_dispatchEvent,GdomeDocument*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_dispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_dispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_dispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_doc_dispatchEvent(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_doc_subTreeDispatchEvent' (GdomeDocument* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_doc_subTreeDispatchEvent,GdomeDocument*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_subTreeDispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_subTreeDispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_subTreeDispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_doc_subTreeDispatchEvent(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_doc_canAppend' (GdomeDocument* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_doc_canAppend,GdomeDocument*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_doc_canAppend(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_doc_canAppend", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocument*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_doc_canAppend(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_doc_canAppend(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_n_ref' (GdomeNode* GdomeException*).
 * Configuration line: 'void,gdome_n_ref,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_ref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_n_ref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_n_unref' (GdomeNode* GdomeException*).
 * Configuration line: 'void,gdome_n_unref,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_unref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_n_unref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gpointer' 'gdome_n_query_interface' (GdomeNode* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_n_query_interface,GdomeNode*,const char*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_query_interface(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_query_interface", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	const char* myarg1 = mytmp1.c_str();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_query_interface(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_n_query_interface(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_n_nodeName' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_n_nodeName,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_nodeName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_nodeName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_nodeName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_n_nodeName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_n_nodeValue' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_n_nodeValue,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_nodeValue(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_n_nodeValue(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_n_set_nodeValue' (GdomeNode* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_n_set_nodeValue,GdomeNode*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_set_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_set_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_set_nodeValue(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_n_set_nodeValue(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'unsigned short' 'gdome_n_nodeType' (GdomeNode* GdomeException*).
 * Configuration line: 'unsigned short,gdome_n_nodeType,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_nodeType(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_nodeType", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_nodeType(" << myarg0 << ", " << myarg1 << ")");
	unsigned short int ret = cgate_gdome_n_nodeType(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_n_parentNode' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_parentNode,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_parentNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_parentNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_parentNode(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_n_parentNode(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_n_childNodes' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_n_childNodes,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_childNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_childNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_childNodes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_n_childNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_n_firstChild' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_firstChild,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_firstChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_firstChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_firstChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_n_firstChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_n_lastChild' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_lastChild,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_lastChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_lastChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_lastChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_n_lastChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_n_previousSibling' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_previousSibling,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_previousSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_previousSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_previousSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_n_previousSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_n_nextSibling' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_nextSibling,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_nextSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_nextSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_nextSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_n_nextSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_n_attributes' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_n_attributes,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_attributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_attributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_attributes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_n_attributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNamedNodeMap*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocument*' 'gdome_n_ownerDocument' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_n_ownerDocument,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_ownerDocument(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_ownerDocument", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_ownerDocument(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_n_ownerDocument(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocument*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_n_insertBefore' (GdomeNode* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_insertBefore,GdomeNode*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_insertBefore(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_insertBefore", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_insertBefore(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_n_insertBefore(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_n_replaceChild' (GdomeNode* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_replaceChild,GdomeNode*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_replaceChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_replaceChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_replaceChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_n_replaceChild(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_n_removeChild' (GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_removeChild,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_removeChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_removeChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_removeChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_n_removeChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_n_appendChild' (GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_appendChild,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_appendChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_appendChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_appendChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_n_appendChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_n_hasChildNodes' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_n_hasChildNodes,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_hasChildNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_hasChildNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_hasChildNodes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_n_hasChildNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_n_cloneNode' (GdomeNode* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_cloneNode,GdomeNode*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_cloneNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_cloneNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int myarg1 = args[1]->Int32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_cloneNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_n_cloneNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_n_normalize' (GdomeNode* GdomeException*).
 * Configuration line: 'void,gdome_n_normalize,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_normalize(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_normalize", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_normalize(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_n_normalize(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_n_isSupported' (GdomeNode* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_n_isSupported,GdomeNode*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_isSupported(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_isSupported", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_isSupported(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	int ret = cgate_gdome_n_isSupported(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_n_namespaceURI' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_n_namespaceURI,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_namespaceURI(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_namespaceURI", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_namespaceURI(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_n_namespaceURI(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_n_prefix' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_n_prefix,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_prefix(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_n_prefix(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_n_set_prefix' (GdomeNode* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_n_set_prefix,GdomeNode*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_set_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_set_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_set_prefix(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_n_set_prefix(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_n_localName' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_n_localName,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_localName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_localName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_localName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_n_localName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_n_hasAttributes' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_n_hasAttributes,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_hasAttributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_hasAttributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_hasAttributes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_n_hasAttributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_n_addEventListener' (GdomeNode* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_n_addEventListener,GdomeNode*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_addEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_addEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_addEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_n_addEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_n_removeEventListener' (GdomeNode* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_n_removeEventListener,GdomeNode*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_removeEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_removeEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_removeEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_n_removeEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_n_dispatchEvent' (GdomeNode* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_n_dispatchEvent,GdomeNode*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_dispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_dispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_dispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_n_dispatchEvent(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_n_subTreeDispatchEvent' (GdomeNode* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_n_subTreeDispatchEvent,GdomeNode*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_subTreeDispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_subTreeDispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_subTreeDispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_n_subTreeDispatchEvent(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_n_canAppend' (GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_n_canAppend,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_n_canAppend(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_n_canAppend", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_n_canAppend(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_n_canAppend(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_nl_ref' (GdomeNodeList* GdomeException*).
 * Configuration line: 'void,gdome_nl_ref,GdomeNodeList*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_nl_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_nl_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNodeList*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_nl_ref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_nl_ref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_nl_unref' (GdomeNodeList* GdomeException*).
 * Configuration line: 'void,gdome_nl_unref,GdomeNodeList*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_nl_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_nl_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNodeList*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_nl_unref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_nl_unref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gpointer' 'gdome_nl_query_interface' (GdomeNodeList* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_nl_query_interface,GdomeNodeList*,const char*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_nl_query_interface(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_nl_query_interface", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNodeList*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	const char* myarg1 = mytmp1.c_str();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_nl_query_interface(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_nl_query_interface(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_nl_item' (GdomeNodeList* gulong GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_nl_item,GdomeNodeList*,gulong,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_nl_item(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_nl_item", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNodeList*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_nl_item(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_nl_item(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gulong' 'gdome_nl_length' (GdomeNodeList* GdomeException*).
 * Configuration line: 'gulong,gdome_nl_length,GdomeNodeList*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_nl_length(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_nl_length", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNodeList*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_nl_length(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_nl_length(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_nnm_ref' (GdomeNamedNodeMap* GdomeException*).
 * Configuration line: 'void,gdome_nnm_ref,GdomeNamedNodeMap*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_nnm_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_nnm_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNamedNodeMap*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_nnm_ref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_nnm_ref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_nnm_unref' (GdomeNamedNodeMap* GdomeException*).
 * Configuration line: 'void,gdome_nnm_unref,GdomeNamedNodeMap*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_nnm_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_nnm_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNamedNodeMap*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_nnm_unref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_nnm_unref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gpointer' 'gdome_nnm_query_interface' (GdomeNamedNodeMap* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_nnm_query_interface,GdomeNamedNodeMap*,const char*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_nnm_query_interface(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_nnm_query_interface", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNamedNodeMap*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	const char* myarg1 = mytmp1.c_str();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_nnm_query_interface(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_nnm_query_interface(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_nnm_getNamedItem' (GdomeNamedNodeMap* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_nnm_getNamedItem,GdomeNamedNodeMap*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_nnm_getNamedItem(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_nnm_getNamedItem", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNamedNodeMap*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_nnm_getNamedItem(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_nnm_getNamedItem(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_nnm_setNamedItem' (GdomeNamedNodeMap* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_nnm_setNamedItem,GdomeNamedNodeMap*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_nnm_setNamedItem(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_nnm_setNamedItem", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNamedNodeMap*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_nnm_setNamedItem(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_nnm_setNamedItem(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_nnm_removeNamedItem' (GdomeNamedNodeMap* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_nnm_removeNamedItem,GdomeNamedNodeMap*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_nnm_removeNamedItem(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_nnm_removeNamedItem", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNamedNodeMap*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_nnm_removeNamedItem(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_nnm_removeNamedItem(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_nnm_item' (GdomeNamedNodeMap* gulong GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_nnm_item,GdomeNamedNodeMap*,gulong,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_nnm_item(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_nnm_item", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNamedNodeMap*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_nnm_item(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_nnm_item(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gulong' 'gdome_nnm_length' (GdomeNamedNodeMap* GdomeException*).
 * Configuration line: 'gulong,gdome_nnm_length,GdomeNamedNodeMap*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_nnm_length(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_nnm_length", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNamedNodeMap*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_nnm_length(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_nnm_length(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_nnm_getNamedItemNS' (GdomeNamedNodeMap* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_nnm_getNamedItemNS,GdomeNamedNodeMap*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_nnm_getNamedItemNS(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_nnm_getNamedItemNS", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNamedNodeMap*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_nnm_getNamedItemNS(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_nnm_getNamedItemNS(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_nnm_setNamedItemNS' (GdomeNamedNodeMap* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_nnm_setNamedItemNS,GdomeNamedNodeMap*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_nnm_setNamedItemNS(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_nnm_setNamedItemNS", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNamedNodeMap*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_nnm_setNamedItemNS(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_nnm_setNamedItemNS(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_nnm_removeNamedItemNS' (GdomeNamedNodeMap* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_nnm_removeNamedItemNS,GdomeNamedNodeMap*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_nnm_removeNamedItemNS(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_nnm_removeNamedItemNS", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNamedNodeMap*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_nnm_removeNamedItemNS(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_nnm_removeNamedItemNS(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cd_data' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cd_data,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_data(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_data", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_data(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cd_data(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cd_set_data' (GdomeCharacterData* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cd_set_data,GdomeCharacterData*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_set_data(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_set_data", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_set_data(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_cd_set_data(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gulong' 'gdome_cd_length' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'gulong,gdome_cd_length,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_length(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_length", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_length(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cd_length(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cd_substringData' (GdomeCharacterData* gulong gulong GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cd_substringData,GdomeCharacterData*,gulong,gulong,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_substringData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_substringData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	unsigned int myarg2 = (unsigned int)args[2]->Uint32Value();
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_substringData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_cd_substringData(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cd_appendData' (GdomeCharacterData* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cd_appendData,GdomeCharacterData*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_appendData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_appendData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_appendData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_cd_appendData(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cd_insertData' (GdomeCharacterData* gulong GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cd_insertData,GdomeCharacterData*,gulong,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_insertData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_insertData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_insertData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	cgate_gdome_cd_insertData(myarg0, myarg1, myarg2, myarg3);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cd_deleteData' (GdomeCharacterData* gulong gulong GdomeException*).
 * Configuration line: 'void,gdome_cd_deleteData,GdomeCharacterData*,gulong,gulong,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_deleteData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_deleteData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	unsigned int myarg2 = (unsigned int)args[2]->Uint32Value();
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_deleteData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	cgate_gdome_cd_deleteData(myarg0, myarg1, myarg2, myarg3);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cd_replaceData' (GdomeCharacterData* gulong gulong GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cd_replaceData,GdomeCharacterData*,gulong,gulong,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_replaceData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_replaceData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	unsigned int myarg2 = (unsigned int)args[2]->Uint32Value();
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeDOMString*");
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_replaceData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_cd_replaceData(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cd_ref' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'void,gdome_cd_ref,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_ref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_cd_ref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cd_unref' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'void,gdome_cd_unref,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_unref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_cd_unref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gpointer' 'gdome_cd_query_interface' (GdomeCharacterData* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_cd_query_interface,GdomeCharacterData*,const char*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_query_interface(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_query_interface", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	const char* myarg1 = mytmp1.c_str();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_query_interface(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_cd_query_interface(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cd_nodeName' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cd_nodeName,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_nodeName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_nodeName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_nodeName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cd_nodeName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cd_nodeValue' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cd_nodeValue,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_nodeValue(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cd_nodeValue(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cd_set_nodeValue' (GdomeCharacterData* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cd_set_nodeValue,GdomeCharacterData*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_set_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_set_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_set_nodeValue(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_cd_set_nodeValue(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'unsigned short' 'gdome_cd_nodeType' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'unsigned short,gdome_cd_nodeType,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_nodeType(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_nodeType", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_nodeType(" << myarg0 << ", " << myarg1 << ")");
	unsigned short int ret = cgate_gdome_cd_nodeType(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_parentNode' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_parentNode,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_parentNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_parentNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_parentNode(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cd_parentNode(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_cd_childNodes' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_cd_childNodes,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_childNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_childNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_childNodes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cd_childNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_firstChild' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_firstChild,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_firstChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_firstChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_firstChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cd_firstChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_lastChild' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_lastChild,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_lastChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_lastChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_lastChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cd_lastChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_previousSibling' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_previousSibling,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_previousSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_previousSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_previousSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cd_previousSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_nextSibling' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_nextSibling,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_nextSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_nextSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_nextSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cd_nextSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_cd_attributes' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_cd_attributes,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_attributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_attributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_attributes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cd_attributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNamedNodeMap*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocument*' 'gdome_cd_ownerDocument' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_cd_ownerDocument,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_ownerDocument(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_ownerDocument", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_ownerDocument(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cd_ownerDocument(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocument*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_insertBefore' (GdomeCharacterData* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_insertBefore,GdomeCharacterData*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_insertBefore(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_insertBefore", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_insertBefore(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_cd_insertBefore(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_replaceChild' (GdomeCharacterData* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_replaceChild,GdomeCharacterData*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_replaceChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_replaceChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_replaceChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_cd_replaceChild(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_removeChild' (GdomeCharacterData* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_removeChild,GdomeCharacterData*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_removeChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_removeChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_removeChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_cd_removeChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_appendChild' (GdomeCharacterData* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_appendChild,GdomeCharacterData*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_appendChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_appendChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_appendChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_cd_appendChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_cd_hasChildNodes' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cd_hasChildNodes,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_hasChildNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_hasChildNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_hasChildNodes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_cd_hasChildNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_cloneNode' (GdomeCharacterData* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_cloneNode,GdomeCharacterData*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_cloneNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_cloneNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int myarg1 = args[1]->Int32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_cloneNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_cd_cloneNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cd_normalize' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'void,gdome_cd_normalize,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_normalize(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_normalize", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_normalize(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_cd_normalize(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_cd_isSupported' (GdomeCharacterData* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cd_isSupported,GdomeCharacterData*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_isSupported(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_isSupported", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_isSupported(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	int ret = cgate_gdome_cd_isSupported(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cd_namespaceURI' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cd_namespaceURI,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_namespaceURI(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_namespaceURI", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_namespaceURI(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cd_namespaceURI(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cd_prefix' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cd_prefix,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_prefix(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cd_prefix(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cd_set_prefix' (GdomeCharacterData* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cd_set_prefix,GdomeCharacterData*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_set_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_set_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_set_prefix(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_cd_set_prefix(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cd_localName' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cd_localName,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_localName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_localName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_localName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cd_localName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_cd_hasAttributes' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cd_hasAttributes,GdomeCharacterData*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_hasAttributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_hasAttributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_hasAttributes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_cd_hasAttributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cd_addEventListener' (GdomeCharacterData* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_cd_addEventListener,GdomeCharacterData*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_addEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_addEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_addEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_cd_addEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cd_removeEventListener' (GdomeCharacterData* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_cd_removeEventListener,GdomeCharacterData*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_removeEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_removeEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_removeEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_cd_removeEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_cd_dispatchEvent' (GdomeCharacterData* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cd_dispatchEvent,GdomeCharacterData*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_dispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_dispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_dispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_cd_dispatchEvent(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cd_subTreeDispatchEvent' (GdomeCharacterData* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_cd_subTreeDispatchEvent,GdomeCharacterData*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_subTreeDispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_subTreeDispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_subTreeDispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_cd_subTreeDispatchEvent(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_cd_canAppend' (GdomeCharacterData* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cd_canAppend,GdomeCharacterData*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cd_canAppend(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cd_canAppend", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCharacterData*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cd_canAppend(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_cd_canAppend(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_a_ref' (GdomeAttr* GdomeException*).
 * Configuration line: 'void,gdome_a_ref,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_ref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_a_ref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_a_unref' (GdomeAttr* GdomeException*).
 * Configuration line: 'void,gdome_a_unref,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_unref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_a_unref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gpointer' 'gdome_a_query_interface' (GdomeAttr* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_a_query_interface,GdomeAttr*,const char*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_query_interface(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_query_interface", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	const char* myarg1 = mytmp1.c_str();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_query_interface(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_a_query_interface(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_a_name' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_a_name,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_name(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_name", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_name(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_a_name(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeElement*' 'gdome_a_ownerElement' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeElement*,gdome_a_ownerElement,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_ownerElement(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_ownerElement", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_ownerElement(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_a_ownerElement(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeElement*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_a_specified' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_a_specified,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_specified(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_specified", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_specified(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_a_specified(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_a_value' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_a_value,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_value(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_value", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_value(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_a_value(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_a_set_value' (GdomeAttr* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_a_set_value,GdomeAttr*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_set_value(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_set_value", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_set_value(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_a_set_value(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_a_nodeName' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_a_nodeName,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_nodeName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_nodeName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_nodeName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_a_nodeName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_a_nodeValue' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_a_nodeValue,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_nodeValue(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_a_nodeValue(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_a_set_nodeValue' (GdomeAttr* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_a_set_nodeValue,GdomeAttr*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_set_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_set_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_set_nodeValue(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_a_set_nodeValue(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'unsigned short' 'gdome_a_nodeType' (GdomeAttr* GdomeException*).
 * Configuration line: 'unsigned short,gdome_a_nodeType,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_nodeType(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_nodeType", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_nodeType(" << myarg0 << ", " << myarg1 << ")");
	unsigned short int ret = cgate_gdome_a_nodeType(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_a_parentNode' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_parentNode,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_parentNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_parentNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_parentNode(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_a_parentNode(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_a_childNodes' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_a_childNodes,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_childNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_childNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_childNodes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_a_childNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_a_firstChild' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_firstChild,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_firstChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_firstChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_firstChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_a_firstChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_a_lastChild' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_lastChild,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_lastChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_lastChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_lastChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_a_lastChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_a_previousSibling' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_previousSibling,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_previousSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_previousSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_previousSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_a_previousSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_a_nextSibling' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_nextSibling,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_nextSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_nextSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_nextSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_a_nextSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_a_attributes' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_a_attributes,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_attributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_attributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_attributes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_a_attributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNamedNodeMap*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocument*' 'gdome_a_ownerDocument' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_a_ownerDocument,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_ownerDocument(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_ownerDocument", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_ownerDocument(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_a_ownerDocument(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocument*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_a_insertBefore' (GdomeAttr* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_insertBefore,GdomeAttr*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_insertBefore(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_insertBefore", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_insertBefore(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_a_insertBefore(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_a_replaceChild' (GdomeAttr* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_replaceChild,GdomeAttr*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_replaceChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_replaceChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_replaceChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_a_replaceChild(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_a_removeChild' (GdomeAttr* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_removeChild,GdomeAttr*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_removeChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_removeChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_removeChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_a_removeChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_a_appendChild' (GdomeAttr* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_appendChild,GdomeAttr*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_appendChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_appendChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_appendChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_a_appendChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_a_hasChildNodes' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_a_hasChildNodes,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_hasChildNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_hasChildNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_hasChildNodes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_a_hasChildNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_a_cloneNode' (GdomeAttr* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_cloneNode,GdomeAttr*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_cloneNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_cloneNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int myarg1 = args[1]->Int32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_cloneNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_a_cloneNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_a_normalize' (GdomeAttr* GdomeException*).
 * Configuration line: 'void,gdome_a_normalize,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_normalize(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_normalize", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_normalize(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_a_normalize(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_a_isSupported' (GdomeAttr* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_a_isSupported,GdomeAttr*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_isSupported(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_isSupported", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_isSupported(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	int ret = cgate_gdome_a_isSupported(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_a_namespaceURI' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_a_namespaceURI,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_namespaceURI(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_namespaceURI", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_namespaceURI(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_a_namespaceURI(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_a_prefix' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_a_prefix,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_prefix(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_a_prefix(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_a_set_prefix' (GdomeAttr* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_a_set_prefix,GdomeAttr*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_set_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_set_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_set_prefix(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_a_set_prefix(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_a_localName' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_a_localName,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_localName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_localName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_localName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_a_localName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_a_hasAttributes' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_a_hasAttributes,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_hasAttributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_hasAttributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_hasAttributes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_a_hasAttributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_a_addEventListener' (GdomeAttr* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_a_addEventListener,GdomeAttr*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_addEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_addEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_addEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_a_addEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_a_removeEventListener' (GdomeAttr* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_a_removeEventListener,GdomeAttr*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_removeEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_removeEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_removeEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_a_removeEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_a_dispatchEvent' (GdomeAttr* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_a_dispatchEvent,GdomeAttr*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_dispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_dispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_dispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_a_dispatchEvent(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_a_subTreeDispatchEvent' (GdomeAttr* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_a_subTreeDispatchEvent,GdomeAttr*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_subTreeDispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_subTreeDispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_subTreeDispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_a_subTreeDispatchEvent(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_a_canAppend' (GdomeAttr* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_a_canAppend,GdomeAttr*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_a_canAppend(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_a_canAppend", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeAttr*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_a_canAppend(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_a_canAppend(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_el_tagName' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_el_tagName,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_tagName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_tagName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_tagName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_el_tagName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_el_getAttribute' (GdomeElement* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_el_getAttribute,GdomeElement*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_getAttribute(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_getAttribute", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_getAttribute(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_el_getAttribute(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_el_setAttribute' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_el_setAttribute,GdomeElement*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_setAttribute(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_setAttribute", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_setAttribute(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	cgate_gdome_el_setAttribute(myarg0, myarg1, myarg2, myarg3);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_el_removeAttribute' (GdomeElement* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_el_removeAttribute,GdomeElement*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_removeAttribute(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_removeAttribute", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_removeAttribute(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_el_removeAttribute(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeAttr*' 'gdome_el_getAttributeNode' (GdomeElement* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeAttr*,gdome_el_getAttributeNode,GdomeElement*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_getAttributeNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_getAttributeNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_getAttributeNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_el_getAttributeNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeAttr*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeAttr*' 'gdome_el_setAttributeNode' (GdomeElement* GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeAttr*,gdome_el_setAttributeNode,GdomeElement*,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_setAttributeNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_setAttributeNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeAttr*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_setAttributeNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_el_setAttributeNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeAttr*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeAttr*' 'gdome_el_removeAttributeNode' (GdomeElement* GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeAttr*,gdome_el_removeAttributeNode,GdomeElement*,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_removeAttributeNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_removeAttributeNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeAttr*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_removeAttributeNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_el_removeAttributeNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeAttr*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_el_getElementsByTagName' (GdomeElement* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_el_getElementsByTagName,GdomeElement*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_getElementsByTagName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_getElementsByTagName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_getElementsByTagName(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_el_getElementsByTagName(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_el_getAttributeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_el_getAttributeNS,GdomeElement*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_getAttributeNS(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_getAttributeNS", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_getAttributeNS(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_el_getAttributeNS(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_el_setAttributeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_el_setAttributeNS,GdomeElement*,GdomeDOMString*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_setAttributeNS(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_setAttributeNS", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeDOMString*");
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_setAttributeNS(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_el_setAttributeNS(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_el_removeAttributeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_el_removeAttributeNS,GdomeElement*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_removeAttributeNS(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_removeAttributeNS", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_removeAttributeNS(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	cgate_gdome_el_removeAttributeNS(myarg0, myarg1, myarg2, myarg3);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeAttr*' 'gdome_el_getAttributeNodeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeAttr*,gdome_el_getAttributeNodeNS,GdomeElement*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_getAttributeNodeNS(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_getAttributeNodeNS", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_getAttributeNodeNS(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_el_getAttributeNodeNS(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeAttr*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeAttr*' 'gdome_el_setAttributeNodeNS' (GdomeElement* GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeAttr*,gdome_el_setAttributeNodeNS,GdomeElement*,GdomeAttr*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_setAttributeNodeNS(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_setAttributeNodeNS", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeAttr*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_setAttributeNodeNS(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_el_setAttributeNodeNS(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeAttr*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_el_getElementsByTagNameNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_el_getElementsByTagNameNS,GdomeElement*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_getElementsByTagNameNS(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_getElementsByTagNameNS", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_getElementsByTagNameNS(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_el_getElementsByTagNameNS(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_el_hasAttribute' (GdomeElement* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_el_hasAttribute,GdomeElement*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_hasAttribute(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_hasAttribute", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_hasAttribute(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_el_hasAttribute(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_el_hasAttributeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_el_hasAttributeNS,GdomeElement*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_hasAttributeNS(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_hasAttributeNS", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_hasAttributeNS(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	int ret = cgate_gdome_el_hasAttributeNS(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_el_ref' (GdomeElement* GdomeException*).
 * Configuration line: 'void,gdome_el_ref,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_ref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_el_ref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_el_unref' (GdomeElement* GdomeException*).
 * Configuration line: 'void,gdome_el_unref,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_unref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_el_unref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gpointer' 'gdome_el_query_interface' (GdomeElement* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_el_query_interface,GdomeElement*,const char*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_query_interface(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_query_interface", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	const char* myarg1 = mytmp1.c_str();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_query_interface(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_el_query_interface(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_el_nodeName' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_el_nodeName,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_nodeName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_nodeName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_nodeName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_el_nodeName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_el_nodeValue' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_el_nodeValue,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_nodeValue(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_el_nodeValue(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_el_set_nodeValue' (GdomeElement* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_el_set_nodeValue,GdomeElement*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_set_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_set_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_set_nodeValue(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_el_set_nodeValue(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'unsigned short' 'gdome_el_nodeType' (GdomeElement* GdomeException*).
 * Configuration line: 'unsigned short,gdome_el_nodeType,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_nodeType(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_nodeType", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_nodeType(" << myarg0 << ", " << myarg1 << ")");
	unsigned short int ret = cgate_gdome_el_nodeType(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_el_parentNode' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_parentNode,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_parentNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_parentNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_parentNode(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_el_parentNode(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_el_childNodes' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_el_childNodes,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_childNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_childNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_childNodes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_el_childNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_el_firstChild' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_firstChild,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_firstChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_firstChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_firstChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_el_firstChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_el_lastChild' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_lastChild,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_lastChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_lastChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_lastChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_el_lastChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_el_previousSibling' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_previousSibling,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_previousSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_previousSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_previousSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_el_previousSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_el_nextSibling' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_nextSibling,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_nextSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_nextSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_nextSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_el_nextSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_el_attributes' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_el_attributes,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_attributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_attributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_attributes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_el_attributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNamedNodeMap*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocument*' 'gdome_el_ownerDocument' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_el_ownerDocument,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_ownerDocument(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_ownerDocument", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_ownerDocument(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_el_ownerDocument(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocument*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_el_insertBefore' (GdomeElement* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_insertBefore,GdomeElement*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_insertBefore(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_insertBefore", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_insertBefore(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_el_insertBefore(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_el_replaceChild' (GdomeElement* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_replaceChild,GdomeElement*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_replaceChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_replaceChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_replaceChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_el_replaceChild(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_el_removeChild' (GdomeElement* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_removeChild,GdomeElement*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_removeChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_removeChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_removeChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_el_removeChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_el_appendChild' (GdomeElement* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_appendChild,GdomeElement*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_appendChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_appendChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_appendChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_el_appendChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_el_hasChildNodes' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_el_hasChildNodes,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_hasChildNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_hasChildNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_hasChildNodes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_el_hasChildNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_el_cloneNode' (GdomeElement* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_cloneNode,GdomeElement*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_cloneNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_cloneNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int myarg1 = args[1]->Int32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_cloneNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_el_cloneNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_el_normalize' (GdomeElement* GdomeException*).
 * Configuration line: 'void,gdome_el_normalize,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_normalize(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_normalize", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_normalize(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_el_normalize(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_el_isSupported' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_el_isSupported,GdomeElement*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_isSupported(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_isSupported", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_isSupported(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	int ret = cgate_gdome_el_isSupported(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_el_namespaceURI' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_el_namespaceURI,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_namespaceURI(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_namespaceURI", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_namespaceURI(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_el_namespaceURI(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_el_prefix' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_el_prefix,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_prefix(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_el_prefix(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_el_set_prefix' (GdomeElement* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_el_set_prefix,GdomeElement*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_set_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_set_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_set_prefix(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_el_set_prefix(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_el_localName' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_el_localName,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_localName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_localName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_localName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_el_localName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_el_hasAttributes' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_el_hasAttributes,GdomeElement*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_hasAttributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_hasAttributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_hasAttributes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_el_hasAttributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_el_addEventListener' (GdomeElement* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_el_addEventListener,GdomeElement*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_addEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_addEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_addEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_el_addEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_el_removeEventListener' (GdomeElement* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_el_removeEventListener,GdomeElement*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_removeEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_removeEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_removeEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_el_removeEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_el_dispatchEvent' (GdomeElement* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_el_dispatchEvent,GdomeElement*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_dispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_dispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_dispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_el_dispatchEvent(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_el_subTreeDispatchEvent' (GdomeElement* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_el_subTreeDispatchEvent,GdomeElement*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_subTreeDispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_subTreeDispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_subTreeDispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_el_subTreeDispatchEvent(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_el_canAppend' (GdomeElement* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_el_canAppend,GdomeElement*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_el_canAppend(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_el_canAppend", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_el_canAppend(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_el_canAppend(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeText*' 'gdome_t_splitText' (GdomeText* gulong GdomeException*).
 * Configuration line: 'GdomeText*,gdome_t_splitText,GdomeText*,gulong,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_splitText(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_splitText", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_splitText(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_t_splitText(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeText*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_t_data' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_t_data,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_data(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_data", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_data(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_t_data(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_t_set_data' (GdomeText* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_t_set_data,GdomeText*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_set_data(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_set_data", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_set_data(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_t_set_data(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gulong' 'gdome_t_length' (GdomeText* GdomeException*).
 * Configuration line: 'gulong,gdome_t_length,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_length(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_length", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_length(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_t_length(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_t_substringData' (GdomeText* gulong gulong GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_t_substringData,GdomeText*,gulong,gulong,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_substringData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_substringData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	unsigned int myarg2 = (unsigned int)args[2]->Uint32Value();
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_substringData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_t_substringData(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_t_appendData' (GdomeText* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_t_appendData,GdomeText*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_appendData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_appendData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_appendData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_t_appendData(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_t_insertData' (GdomeText* gulong GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_t_insertData,GdomeText*,gulong,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_insertData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_insertData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_insertData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	cgate_gdome_t_insertData(myarg0, myarg1, myarg2, myarg3);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_t_deleteData' (GdomeText* gulong gulong GdomeException*).
 * Configuration line: 'void,gdome_t_deleteData,GdomeText*,gulong,gulong,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_deleteData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_deleteData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	unsigned int myarg2 = (unsigned int)args[2]->Uint32Value();
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_deleteData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	cgate_gdome_t_deleteData(myarg0, myarg1, myarg2, myarg3);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_t_replaceData' (GdomeText* gulong gulong GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_t_replaceData,GdomeText*,gulong,gulong,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_replaceData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_replaceData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	unsigned int myarg2 = (unsigned int)args[2]->Uint32Value();
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeDOMString*");
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_replaceData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_t_replaceData(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_t_ref' (GdomeText* GdomeException*).
 * Configuration line: 'void,gdome_t_ref,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_ref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_t_ref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_t_unref' (GdomeText* GdomeException*).
 * Configuration line: 'void,gdome_t_unref,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_unref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_t_unref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gpointer' 'gdome_t_query_interface' (GdomeText* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_t_query_interface,GdomeText*,const char*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_query_interface(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_query_interface", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	const char* myarg1 = mytmp1.c_str();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_query_interface(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_t_query_interface(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_t_nodeName' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_t_nodeName,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_nodeName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_nodeName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_nodeName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_t_nodeName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_t_nodeValue' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_t_nodeValue,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_nodeValue(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_t_nodeValue(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_t_set_nodeValue' (GdomeText* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_t_set_nodeValue,GdomeText*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_set_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_set_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_set_nodeValue(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_t_set_nodeValue(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'unsigned short' 'gdome_t_nodeType' (GdomeText* GdomeException*).
 * Configuration line: 'unsigned short,gdome_t_nodeType,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_nodeType(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_nodeType", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_nodeType(" << myarg0 << ", " << myarg1 << ")");
	unsigned short int ret = cgate_gdome_t_nodeType(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_t_parentNode' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_parentNode,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_parentNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_parentNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_parentNode(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_t_parentNode(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_t_childNodes' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_t_childNodes,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_childNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_childNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_childNodes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_t_childNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_t_firstChild' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_firstChild,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_firstChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_firstChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_firstChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_t_firstChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_t_lastChild' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_lastChild,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_lastChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_lastChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_lastChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_t_lastChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_t_previousSibling' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_previousSibling,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_previousSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_previousSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_previousSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_t_previousSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_t_nextSibling' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_nextSibling,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_nextSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_nextSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_nextSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_t_nextSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_t_attributes' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_t_attributes,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_attributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_attributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_attributes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_t_attributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNamedNodeMap*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocument*' 'gdome_t_ownerDocument' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_t_ownerDocument,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_ownerDocument(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_ownerDocument", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_ownerDocument(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_t_ownerDocument(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocument*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_t_insertBefore' (GdomeText* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_insertBefore,GdomeText*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_insertBefore(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_insertBefore", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_insertBefore(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_t_insertBefore(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_t_replaceChild' (GdomeText* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_replaceChild,GdomeText*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_replaceChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_replaceChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_replaceChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_t_replaceChild(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_t_removeChild' (GdomeText* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_removeChild,GdomeText*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_removeChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_removeChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_removeChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_t_removeChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_t_appendChild' (GdomeText* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_appendChild,GdomeText*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_appendChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_appendChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_appendChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_t_appendChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_t_hasChildNodes' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_t_hasChildNodes,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_hasChildNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_hasChildNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_hasChildNodes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_t_hasChildNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_t_cloneNode' (GdomeText* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_cloneNode,GdomeText*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_cloneNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_cloneNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int myarg1 = args[1]->Int32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_cloneNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_t_cloneNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_t_normalize' (GdomeText* GdomeException*).
 * Configuration line: 'void,gdome_t_normalize,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_normalize(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_normalize", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_normalize(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_t_normalize(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_t_isSupported' (GdomeText* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_t_isSupported,GdomeText*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_isSupported(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_isSupported", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_isSupported(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	int ret = cgate_gdome_t_isSupported(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_t_namespaceURI' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_t_namespaceURI,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_namespaceURI(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_namespaceURI", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_namespaceURI(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_t_namespaceURI(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_t_prefix' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_t_prefix,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_prefix(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_t_prefix(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_t_set_prefix' (GdomeText* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_t_set_prefix,GdomeText*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_set_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_set_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_set_prefix(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_t_set_prefix(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_t_localName' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_t_localName,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_localName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_localName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_localName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_t_localName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_t_hasAttributes' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_t_hasAttributes,GdomeText*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_hasAttributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_hasAttributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_hasAttributes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_t_hasAttributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_t_addEventListener' (GdomeText* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_t_addEventListener,GdomeText*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_addEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_addEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_addEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_t_addEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_t_removeEventListener' (GdomeText* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_t_removeEventListener,GdomeText*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_removeEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_removeEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_removeEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_t_removeEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_t_dispatchEvent' (GdomeText* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_t_dispatchEvent,GdomeText*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_dispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_dispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_dispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_t_dispatchEvent(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_t_subTreeDispatchEvent' (GdomeText* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_t_subTreeDispatchEvent,GdomeText*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_subTreeDispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_subTreeDispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_subTreeDispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_t_subTreeDispatchEvent(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_t_canAppend' (GdomeText* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_t_canAppend,GdomeText*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_t_canAppend(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_t_canAppend", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_t_canAppend(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_t_canAppend(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_c_data' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_c_data,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_data(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_data", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_data(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_c_data(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_c_set_data' (GdomeComment* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_c_set_data,GdomeComment*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_set_data(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_set_data", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_set_data(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_c_set_data(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gulong' 'gdome_c_length' (GdomeComment* GdomeException*).
 * Configuration line: 'gulong,gdome_c_length,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_length(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_length", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_length(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_c_length(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_c_substringData' (GdomeComment* gulong gulong GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_c_substringData,GdomeComment*,gulong,gulong,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_substringData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_substringData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	unsigned int myarg2 = (unsigned int)args[2]->Uint32Value();
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_substringData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_c_substringData(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_c_appendData' (GdomeComment* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_c_appendData,GdomeComment*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_appendData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_appendData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_appendData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_c_appendData(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_c_insertData' (GdomeComment* gulong GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_c_insertData,GdomeComment*,gulong,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_insertData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_insertData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_insertData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	cgate_gdome_c_insertData(myarg0, myarg1, myarg2, myarg3);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_c_deleteData' (GdomeComment* gulong gulong GdomeException*).
 * Configuration line: 'void,gdome_c_deleteData,GdomeComment*,gulong,gulong,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_deleteData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_deleteData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	unsigned int myarg2 = (unsigned int)args[2]->Uint32Value();
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_deleteData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	cgate_gdome_c_deleteData(myarg0, myarg1, myarg2, myarg3);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_c_replaceData' (GdomeComment* gulong gulong GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_c_replaceData,GdomeComment*,gulong,gulong,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_replaceData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_replaceData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	unsigned int myarg2 = (unsigned int)args[2]->Uint32Value();
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeDOMString*");
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_replaceData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_c_replaceData(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_c_ref' (GdomeComment* GdomeException*).
 * Configuration line: 'void,gdome_c_ref,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_ref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_c_ref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_c_unref' (GdomeComment* GdomeException*).
 * Configuration line: 'void,gdome_c_unref,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_unref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_c_unref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gpointer' 'gdome_c_query_interface' (GdomeComment* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_c_query_interface,GdomeComment*,const char*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_query_interface(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_query_interface", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	const char* myarg1 = mytmp1.c_str();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_query_interface(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_c_query_interface(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_c_nodeName' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_c_nodeName,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_nodeName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_nodeName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_nodeName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_c_nodeName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_c_nodeValue' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_c_nodeValue,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_nodeValue(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_c_nodeValue(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_c_set_nodeValue' (GdomeComment* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_c_set_nodeValue,GdomeComment*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_set_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_set_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_set_nodeValue(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_c_set_nodeValue(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'unsigned short' 'gdome_c_nodeType' (GdomeComment* GdomeException*).
 * Configuration line: 'unsigned short,gdome_c_nodeType,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_nodeType(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_nodeType", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_nodeType(" << myarg0 << ", " << myarg1 << ")");
	unsigned short int ret = cgate_gdome_c_nodeType(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_c_parentNode' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_parentNode,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_parentNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_parentNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_parentNode(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_c_parentNode(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_c_childNodes' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_c_childNodes,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_childNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_childNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_childNodes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_c_childNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_c_firstChild' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_firstChild,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_firstChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_firstChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_firstChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_c_firstChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_c_lastChild' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_lastChild,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_lastChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_lastChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_lastChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_c_lastChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_c_previousSibling' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_previousSibling,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_previousSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_previousSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_previousSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_c_previousSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_c_nextSibling' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_nextSibling,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_nextSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_nextSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_nextSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_c_nextSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_c_attributes' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_c_attributes,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_attributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_attributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_attributes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_c_attributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNamedNodeMap*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocument*' 'gdome_c_ownerDocument' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_c_ownerDocument,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_ownerDocument(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_ownerDocument", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_ownerDocument(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_c_ownerDocument(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocument*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_c_insertBefore' (GdomeComment* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_insertBefore,GdomeComment*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_insertBefore(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_insertBefore", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_insertBefore(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_c_insertBefore(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_c_replaceChild' (GdomeComment* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_replaceChild,GdomeComment*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_replaceChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_replaceChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_replaceChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_c_replaceChild(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_c_removeChild' (GdomeComment* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_removeChild,GdomeComment*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_removeChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_removeChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_removeChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_c_removeChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_c_appendChild' (GdomeComment* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_appendChild,GdomeComment*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_appendChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_appendChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_appendChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_c_appendChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_c_hasChildNodes' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_c_hasChildNodes,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_hasChildNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_hasChildNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_hasChildNodes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_c_hasChildNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_c_cloneNode' (GdomeComment* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_cloneNode,GdomeComment*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_cloneNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_cloneNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int myarg1 = args[1]->Int32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_cloneNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_c_cloneNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_c_normalize' (GdomeComment* GdomeException*).
 * Configuration line: 'void,gdome_c_normalize,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_normalize(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_normalize", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_normalize(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_c_normalize(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_c_isSupported' (GdomeComment* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_c_isSupported,GdomeComment*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_isSupported(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_isSupported", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_isSupported(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	int ret = cgate_gdome_c_isSupported(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_c_namespaceURI' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_c_namespaceURI,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_namespaceURI(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_namespaceURI", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_namespaceURI(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_c_namespaceURI(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_c_prefix' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_c_prefix,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_prefix(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_c_prefix(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_c_set_prefix' (GdomeComment* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_c_set_prefix,GdomeComment*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_set_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_set_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_set_prefix(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_c_set_prefix(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_c_localName' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_c_localName,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_localName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_localName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_localName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_c_localName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_c_hasAttributes' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_c_hasAttributes,GdomeComment*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_hasAttributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_hasAttributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_hasAttributes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_c_hasAttributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_c_addEventListener' (GdomeComment* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_c_addEventListener,GdomeComment*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_addEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_addEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_addEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_c_addEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_c_removeEventListener' (GdomeComment* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_c_removeEventListener,GdomeComment*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_removeEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_removeEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_removeEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_c_removeEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_c_dispatchEvent' (GdomeComment* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_c_dispatchEvent,GdomeComment*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_dispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_dispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_dispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_c_dispatchEvent(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_c_subTreeDispatchEvent' (GdomeComment* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_c_subTreeDispatchEvent,GdomeComment*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_subTreeDispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_subTreeDispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_subTreeDispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_c_subTreeDispatchEvent(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_c_canAppend' (GdomeComment* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_c_canAppend,GdomeComment*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_c_canAppend(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_c_canAppend", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeComment*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_c_canAppend(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_c_canAppend(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeText*' 'gdome_cds_splitText' (GdomeCDATASection* gulong GdomeException*).
 * Configuration line: 'GdomeText*,gdome_cds_splitText,GdomeCDATASection*,gulong,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_splitText(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_splitText", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_splitText(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_cds_splitText(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeText*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cds_data' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cds_data,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_data(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_data", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_data(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cds_data(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cds_set_data' (GdomeCDATASection* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cds_set_data,GdomeCDATASection*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_set_data(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_set_data", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_set_data(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_cds_set_data(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gulong' 'gdome_cds_length' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'gulong,gdome_cds_length,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_length(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_length", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_length(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cds_length(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cds_substringData' (GdomeCDATASection* gulong gulong GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cds_substringData,GdomeCDATASection*,gulong,gulong,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_substringData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_substringData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	unsigned int myarg2 = (unsigned int)args[2]->Uint32Value();
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_substringData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_cds_substringData(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cds_appendData' (GdomeCDATASection* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cds_appendData,GdomeCDATASection*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_appendData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_appendData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_appendData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_cds_appendData(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cds_insertData' (GdomeCDATASection* gulong GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cds_insertData,GdomeCDATASection*,gulong,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_insertData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_insertData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_insertData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	cgate_gdome_cds_insertData(myarg0, myarg1, myarg2, myarg3);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cds_deleteData' (GdomeCDATASection* gulong gulong GdomeException*).
 * Configuration line: 'void,gdome_cds_deleteData,GdomeCDATASection*,gulong,gulong,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_deleteData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_deleteData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	unsigned int myarg2 = (unsigned int)args[2]->Uint32Value();
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_deleteData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	cgate_gdome_cds_deleteData(myarg0, myarg1, myarg2, myarg3);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cds_replaceData' (GdomeCDATASection* gulong gulong GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cds_replaceData,GdomeCDATASection*,gulong,gulong,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_replaceData(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_replaceData", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	unsigned int myarg1 = (unsigned int)args[1]->Uint32Value();
	unsigned int myarg2 = (unsigned int)args[2]->Uint32Value();
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeDOMString*");
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_replaceData(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_cds_replaceData(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cds_ref' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'void,gdome_cds_ref,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_ref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_cds_ref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cds_unref' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'void,gdome_cds_unref,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_unref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_cds_unref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gpointer' 'gdome_cds_query_interface' (GdomeCDATASection* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_cds_query_interface,GdomeCDATASection*,const char*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_query_interface(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_query_interface", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	const char* myarg1 = mytmp1.c_str();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_query_interface(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_cds_query_interface(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cds_nodeName' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cds_nodeName,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_nodeName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_nodeName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_nodeName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cds_nodeName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cds_nodeValue' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cds_nodeValue,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_nodeValue(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cds_nodeValue(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cds_set_nodeValue' (GdomeCDATASection* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cds_set_nodeValue,GdomeCDATASection*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_set_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_set_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_set_nodeValue(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_cds_set_nodeValue(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'unsigned short' 'gdome_cds_nodeType' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'unsigned short,gdome_cds_nodeType,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_nodeType(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_nodeType", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_nodeType(" << myarg0 << ", " << myarg1 << ")");
	unsigned short int ret = cgate_gdome_cds_nodeType(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_parentNode' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_parentNode,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_parentNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_parentNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_parentNode(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cds_parentNode(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_cds_childNodes' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_cds_childNodes,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_childNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_childNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_childNodes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cds_childNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_firstChild' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_firstChild,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_firstChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_firstChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_firstChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cds_firstChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_lastChild' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_lastChild,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_lastChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_lastChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_lastChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cds_lastChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_previousSibling' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_previousSibling,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_previousSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_previousSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_previousSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cds_previousSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_nextSibling' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_nextSibling,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_nextSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_nextSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_nextSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cds_nextSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_cds_attributes' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_cds_attributes,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_attributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_attributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_attributes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cds_attributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNamedNodeMap*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocument*' 'gdome_cds_ownerDocument' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_cds_ownerDocument,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_ownerDocument(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_ownerDocument", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_ownerDocument(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cds_ownerDocument(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocument*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_insertBefore' (GdomeCDATASection* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_insertBefore,GdomeCDATASection*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_insertBefore(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_insertBefore", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_insertBefore(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_cds_insertBefore(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_replaceChild' (GdomeCDATASection* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_replaceChild,GdomeCDATASection*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_replaceChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_replaceChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_replaceChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_cds_replaceChild(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_removeChild' (GdomeCDATASection* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_removeChild,GdomeCDATASection*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_removeChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_removeChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_removeChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_cds_removeChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_appendChild' (GdomeCDATASection* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_appendChild,GdomeCDATASection*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_appendChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_appendChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_appendChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_cds_appendChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_cds_hasChildNodes' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cds_hasChildNodes,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_hasChildNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_hasChildNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_hasChildNodes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_cds_hasChildNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_cloneNode' (GdomeCDATASection* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_cloneNode,GdomeCDATASection*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_cloneNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_cloneNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int myarg1 = args[1]->Int32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_cloneNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_cds_cloneNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cds_normalize' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'void,gdome_cds_normalize,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_normalize(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_normalize", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_normalize(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_cds_normalize(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_cds_isSupported' (GdomeCDATASection* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cds_isSupported,GdomeCDATASection*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_isSupported(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_isSupported", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_isSupported(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	int ret = cgate_gdome_cds_isSupported(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cds_namespaceURI' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cds_namespaceURI,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_namespaceURI(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_namespaceURI", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_namespaceURI(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cds_namespaceURI(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cds_prefix' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cds_prefix,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_prefix(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cds_prefix(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cds_set_prefix' (GdomeCDATASection* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cds_set_prefix,GdomeCDATASection*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_set_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_set_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_set_prefix(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_cds_set_prefix(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cds_localName' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cds_localName,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_localName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_localName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_localName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_cds_localName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_cds_hasAttributes' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cds_hasAttributes,GdomeCDATASection*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_hasAttributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_hasAttributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_hasAttributes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_cds_hasAttributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cds_addEventListener' (GdomeCDATASection* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_cds_addEventListener,GdomeCDATASection*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_addEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_addEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_addEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_cds_addEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cds_removeEventListener' (GdomeCDATASection* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_cds_removeEventListener,GdomeCDATASection*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_removeEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_removeEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_removeEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_cds_removeEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_cds_dispatchEvent' (GdomeCDATASection* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cds_dispatchEvent,GdomeCDATASection*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_dispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_dispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_dispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_cds_dispatchEvent(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_cds_subTreeDispatchEvent' (GdomeCDATASection* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_cds_subTreeDispatchEvent,GdomeCDATASection*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_subTreeDispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_subTreeDispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_subTreeDispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_cds_subTreeDispatchEvent(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_cds_canAppend' (GdomeCDATASection* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cds_canAppend,GdomeCDATASection*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_cds_canAppend(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_cds_canAppend", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeCDATASection*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_cds_canAppend(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_cds_canAppend(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_not_publicId' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_not_publicId,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_publicId(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_publicId", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_publicId(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_not_publicId(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_not_systemId' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_not_systemId,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_systemId(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_systemId", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_systemId(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_not_systemId(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_not_ref' (GdomeNotation* GdomeException*).
 * Configuration line: 'void,gdome_not_ref,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_ref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_not_ref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_not_unref' (GdomeNotation* GdomeException*).
 * Configuration line: 'void,gdome_not_unref,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_unref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_not_unref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gpointer' 'gdome_not_query_interface' (GdomeNotation* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_not_query_interface,GdomeNotation*,const char*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_query_interface(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_query_interface", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	const char* myarg1 = mytmp1.c_str();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_query_interface(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_not_query_interface(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_not_nodeName' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_not_nodeName,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_nodeName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_nodeName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_nodeName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_not_nodeName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_not_nodeValue' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_not_nodeValue,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_nodeValue(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_not_nodeValue(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_not_set_nodeValue' (GdomeNotation* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_not_set_nodeValue,GdomeNotation*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_set_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_set_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_set_nodeValue(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_not_set_nodeValue(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'unsigned short' 'gdome_not_nodeType' (GdomeNotation* GdomeException*).
 * Configuration line: 'unsigned short,gdome_not_nodeType,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_nodeType(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_nodeType", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_nodeType(" << myarg0 << ", " << myarg1 << ")");
	unsigned short int ret = cgate_gdome_not_nodeType(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_not_parentNode' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_parentNode,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_parentNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_parentNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_parentNode(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_not_parentNode(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_not_childNodes' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_not_childNodes,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_childNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_childNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_childNodes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_not_childNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_not_firstChild' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_firstChild,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_firstChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_firstChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_firstChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_not_firstChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_not_lastChild' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_lastChild,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_lastChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_lastChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_lastChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_not_lastChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_not_previousSibling' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_previousSibling,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_previousSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_previousSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_previousSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_not_previousSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_not_nextSibling' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_nextSibling,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_nextSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_nextSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_nextSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_not_nextSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_not_attributes' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_not_attributes,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_attributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_attributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_attributes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_not_attributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNamedNodeMap*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocument*' 'gdome_not_ownerDocument' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_not_ownerDocument,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_ownerDocument(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_ownerDocument", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_ownerDocument(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_not_ownerDocument(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocument*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_not_insertBefore' (GdomeNotation* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_insertBefore,GdomeNotation*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_insertBefore(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_insertBefore", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_insertBefore(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_not_insertBefore(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_not_replaceChild' (GdomeNotation* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_replaceChild,GdomeNotation*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_replaceChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_replaceChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_replaceChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_not_replaceChild(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_not_removeChild' (GdomeNotation* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_removeChild,GdomeNotation*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_removeChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_removeChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_removeChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_not_removeChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_not_appendChild' (GdomeNotation* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_appendChild,GdomeNotation*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_appendChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_appendChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_appendChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_not_appendChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_not_hasChildNodes' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_not_hasChildNodes,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_hasChildNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_hasChildNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_hasChildNodes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_not_hasChildNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_not_cloneNode' (GdomeNotation* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_cloneNode,GdomeNotation*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_cloneNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_cloneNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int myarg1 = args[1]->Int32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_cloneNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_not_cloneNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_not_normalize' (GdomeNotation* GdomeException*).
 * Configuration line: 'void,gdome_not_normalize,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_normalize(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_normalize", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_normalize(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_not_normalize(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_not_isSupported' (GdomeNotation* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_not_isSupported,GdomeNotation*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_isSupported(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_isSupported", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_isSupported(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	int ret = cgate_gdome_not_isSupported(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_not_namespaceURI' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_not_namespaceURI,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_namespaceURI(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_namespaceURI", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_namespaceURI(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_not_namespaceURI(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_not_prefix' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_not_prefix,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_prefix(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_not_prefix(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_not_set_prefix' (GdomeNotation* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_not_set_prefix,GdomeNotation*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_set_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_set_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_set_prefix(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_not_set_prefix(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_not_localName' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_not_localName,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_localName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_localName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_localName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_not_localName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_not_hasAttributes' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_not_hasAttributes,GdomeNotation*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_hasAttributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_hasAttributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_hasAttributes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_not_hasAttributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_not_addEventListener' (GdomeNotation* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_not_addEventListener,GdomeNotation*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_addEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_addEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_addEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_not_addEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_not_removeEventListener' (GdomeNotation* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_not_removeEventListener,GdomeNotation*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_removeEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_removeEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_removeEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_not_removeEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_not_dispatchEvent' (GdomeNotation* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_not_dispatchEvent,GdomeNotation*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_dispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_dispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_dispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_not_dispatchEvent(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_not_subTreeDispatchEvent' (GdomeNotation* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_not_subTreeDispatchEvent,GdomeNotation*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_subTreeDispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_subTreeDispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_subTreeDispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_not_subTreeDispatchEvent(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_not_canAppend' (GdomeNotation* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_not_canAppend,GdomeNotation*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_not_canAppend(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_not_canAppend", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNotation*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_not_canAppend(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_not_canAppend(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_ent_publicId' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_ent_publicId,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_publicId(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_publicId", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_publicId(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_ent_publicId(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_ent_systemId' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_ent_systemId,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_systemId(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_systemId", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_systemId(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_ent_systemId(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_ent_notationName' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_ent_notationName,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_notationName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_notationName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_notationName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_ent_notationName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_ent_ref' (GdomeEntity* GdomeException*).
 * Configuration line: 'void,gdome_ent_ref,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_ref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_ent_ref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_ent_unref' (GdomeEntity* GdomeException*).
 * Configuration line: 'void,gdome_ent_unref,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_unref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_ent_unref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gpointer' 'gdome_ent_query_interface' (GdomeEntity* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_ent_query_interface,GdomeEntity*,const char*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_query_interface(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_query_interface", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	const char* myarg1 = mytmp1.c_str();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_query_interface(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_ent_query_interface(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_ent_nodeName' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_ent_nodeName,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_nodeName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_nodeName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_nodeName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_ent_nodeName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_ent_nodeValue' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_ent_nodeValue,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_nodeValue(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_ent_nodeValue(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_ent_set_nodeValue' (GdomeEntity* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_ent_set_nodeValue,GdomeEntity*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_set_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_set_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_set_nodeValue(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_ent_set_nodeValue(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'unsigned short' 'gdome_ent_nodeType' (GdomeEntity* GdomeException*).
 * Configuration line: 'unsigned short,gdome_ent_nodeType,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_nodeType(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_nodeType", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_nodeType(" << myarg0 << ", " << myarg1 << ")");
	unsigned short int ret = cgate_gdome_ent_nodeType(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_parentNode' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_parentNode,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_parentNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_parentNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_parentNode(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_ent_parentNode(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_ent_childNodes' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_ent_childNodes,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_childNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_childNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_childNodes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_ent_childNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_firstChild' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_firstChild,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_firstChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_firstChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_firstChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_ent_firstChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_lastChild' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_lastChild,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_lastChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_lastChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_lastChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_ent_lastChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_previousSibling' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_previousSibling,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_previousSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_previousSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_previousSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_ent_previousSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_nextSibling' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_nextSibling,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_nextSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_nextSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_nextSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_ent_nextSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_ent_attributes' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_ent_attributes,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_attributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_attributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_attributes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_ent_attributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNamedNodeMap*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocument*' 'gdome_ent_ownerDocument' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_ent_ownerDocument,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_ownerDocument(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_ownerDocument", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_ownerDocument(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_ent_ownerDocument(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocument*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_insertBefore' (GdomeEntity* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_insertBefore,GdomeEntity*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_insertBefore(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_insertBefore", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_insertBefore(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_ent_insertBefore(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_replaceChild' (GdomeEntity* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_replaceChild,GdomeEntity*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_replaceChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_replaceChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_replaceChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_ent_replaceChild(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_removeChild' (GdomeEntity* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_removeChild,GdomeEntity*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_removeChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_removeChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_removeChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_ent_removeChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_appendChild' (GdomeEntity* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_appendChild,GdomeEntity*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_appendChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_appendChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_appendChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_ent_appendChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_ent_hasChildNodes' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_ent_hasChildNodes,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_hasChildNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_hasChildNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_hasChildNodes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_ent_hasChildNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_cloneNode' (GdomeEntity* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_cloneNode,GdomeEntity*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_cloneNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_cloneNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int myarg1 = args[1]->Int32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_cloneNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_ent_cloneNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_ent_normalize' (GdomeEntity* GdomeException*).
 * Configuration line: 'void,gdome_ent_normalize,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_normalize(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_normalize", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_normalize(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_ent_normalize(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_ent_isSupported' (GdomeEntity* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_ent_isSupported,GdomeEntity*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_isSupported(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_isSupported", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_isSupported(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	int ret = cgate_gdome_ent_isSupported(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_ent_namespaceURI' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_ent_namespaceURI,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_namespaceURI(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_namespaceURI", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_namespaceURI(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_ent_namespaceURI(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_ent_prefix' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_ent_prefix,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_prefix(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_ent_prefix(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_ent_set_prefix' (GdomeEntity* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_ent_set_prefix,GdomeEntity*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_set_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_set_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_set_prefix(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_ent_set_prefix(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_ent_localName' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_ent_localName,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_localName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_localName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_localName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_ent_localName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_ent_hasAttributes' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_ent_hasAttributes,GdomeEntity*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_hasAttributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_hasAttributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_hasAttributes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_ent_hasAttributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_ent_addEventListener' (GdomeEntity* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_ent_addEventListener,GdomeEntity*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_addEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_addEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_addEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_ent_addEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_ent_removeEventListener' (GdomeEntity* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_ent_removeEventListener,GdomeEntity*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_removeEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_removeEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_removeEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_ent_removeEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_ent_dispatchEvent' (GdomeEntity* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_ent_dispatchEvent,GdomeEntity*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_dispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_dispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_dispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_ent_dispatchEvent(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_ent_subTreeDispatchEvent' (GdomeEntity* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_ent_subTreeDispatchEvent,GdomeEntity*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_subTreeDispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_subTreeDispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_subTreeDispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_ent_subTreeDispatchEvent(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_ent_canAppend' (GdomeEntity* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_ent_canAppend,GdomeEntity*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_ent_canAppend(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_ent_canAppend", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntity*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_ent_canAppend(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_ent_canAppend(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_er_ref' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'void,gdome_er_ref,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_ref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_er_ref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_er_unref' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'void,gdome_er_unref,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_unref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_er_unref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gpointer' 'gdome_er_query_interface' (GdomeEntityReference* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_er_query_interface,GdomeEntityReference*,const char*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_query_interface(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_query_interface", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	const char* myarg1 = mytmp1.c_str();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_query_interface(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_er_query_interface(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_er_nodeName' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_er_nodeName,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_nodeName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_nodeName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_nodeName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_er_nodeName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_er_nodeValue' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_er_nodeValue,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_nodeValue(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_er_nodeValue(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_er_set_nodeValue' (GdomeEntityReference* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_er_set_nodeValue,GdomeEntityReference*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_set_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_set_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_set_nodeValue(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_er_set_nodeValue(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'unsigned short' 'gdome_er_nodeType' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'unsigned short,gdome_er_nodeType,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_nodeType(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_nodeType", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_nodeType(" << myarg0 << ", " << myarg1 << ")");
	unsigned short int ret = cgate_gdome_er_nodeType(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_er_parentNode' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_parentNode,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_parentNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_parentNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_parentNode(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_er_parentNode(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_er_childNodes' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_er_childNodes,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_childNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_childNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_childNodes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_er_childNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_er_firstChild' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_firstChild,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_firstChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_firstChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_firstChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_er_firstChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_er_lastChild' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_lastChild,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_lastChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_lastChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_lastChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_er_lastChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_er_previousSibling' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_previousSibling,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_previousSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_previousSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_previousSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_er_previousSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_er_nextSibling' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_nextSibling,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_nextSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_nextSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_nextSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_er_nextSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_er_attributes' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_er_attributes,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_attributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_attributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_attributes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_er_attributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNamedNodeMap*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocument*' 'gdome_er_ownerDocument' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_er_ownerDocument,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_ownerDocument(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_ownerDocument", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_ownerDocument(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_er_ownerDocument(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocument*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_er_insertBefore' (GdomeEntityReference* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_insertBefore,GdomeEntityReference*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_insertBefore(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_insertBefore", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_insertBefore(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_er_insertBefore(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_er_replaceChild' (GdomeEntityReference* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_replaceChild,GdomeEntityReference*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_replaceChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_replaceChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_replaceChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_er_replaceChild(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_er_removeChild' (GdomeEntityReference* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_removeChild,GdomeEntityReference*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_removeChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_removeChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_removeChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_er_removeChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_er_appendChild' (GdomeEntityReference* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_appendChild,GdomeEntityReference*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_appendChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_appendChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_appendChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_er_appendChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_er_hasChildNodes' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_er_hasChildNodes,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_hasChildNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_hasChildNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_hasChildNodes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_er_hasChildNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_er_cloneNode' (GdomeEntityReference* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_cloneNode,GdomeEntityReference*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_cloneNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_cloneNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int myarg1 = args[1]->Int32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_cloneNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_er_cloneNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_er_normalize' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'void,gdome_er_normalize,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_normalize(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_normalize", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_normalize(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_er_normalize(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_er_isSupported' (GdomeEntityReference* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_er_isSupported,GdomeEntityReference*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_isSupported(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_isSupported", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_isSupported(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	int ret = cgate_gdome_er_isSupported(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_er_namespaceURI' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_er_namespaceURI,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_namespaceURI(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_namespaceURI", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_namespaceURI(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_er_namespaceURI(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_er_prefix' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_er_prefix,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_prefix(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_er_prefix(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_er_set_prefix' (GdomeEntityReference* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_er_set_prefix,GdomeEntityReference*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_set_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_set_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_set_prefix(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_er_set_prefix(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_er_localName' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_er_localName,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_localName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_localName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_localName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_er_localName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_er_hasAttributes' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_er_hasAttributes,GdomeEntityReference*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_hasAttributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_hasAttributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_hasAttributes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_er_hasAttributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_er_addEventListener' (GdomeEntityReference* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_er_addEventListener,GdomeEntityReference*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_addEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_addEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_addEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_er_addEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_er_removeEventListener' (GdomeEntityReference* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_er_removeEventListener,GdomeEntityReference*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_removeEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_removeEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_removeEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_er_removeEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_er_dispatchEvent' (GdomeEntityReference* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_er_dispatchEvent,GdomeEntityReference*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_dispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_dispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_dispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_er_dispatchEvent(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_er_subTreeDispatchEvent' (GdomeEntityReference* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_er_subTreeDispatchEvent,GdomeEntityReference*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_subTreeDispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_subTreeDispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_subTreeDispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_er_subTreeDispatchEvent(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_er_canAppend' (GdomeEntityReference* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_er_canAppend,GdomeEntityReference*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_er_canAppend(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_er_canAppend", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeEntityReference*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_er_canAppend(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_er_canAppend(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_pi_target' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_pi_target,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_target(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_target", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_target(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_pi_target(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_pi_data' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_pi_data,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_data(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_data", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_data(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_pi_data(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_pi_set_data' (GdomeProcessingInstruction* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_pi_set_data,GdomeProcessingInstruction*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_set_data(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_set_data", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_set_data(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_pi_set_data(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_pi_ref' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'void,gdome_pi_ref,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_ref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_pi_ref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_pi_unref' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'void,gdome_pi_unref,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_unref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_pi_unref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gpointer' 'gdome_pi_query_interface' (GdomeProcessingInstruction* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_pi_query_interface,GdomeProcessingInstruction*,const char*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_query_interface(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_query_interface", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	const char* myarg1 = mytmp1.c_str();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_query_interface(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_pi_query_interface(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_pi_nodeName' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_pi_nodeName,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_nodeName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_nodeName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_nodeName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_pi_nodeName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_pi_nodeValue' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_pi_nodeValue,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_nodeValue(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_pi_nodeValue(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_pi_set_nodeValue' (GdomeProcessingInstruction* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_pi_set_nodeValue,GdomeProcessingInstruction*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_set_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_set_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_set_nodeValue(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_pi_set_nodeValue(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'unsigned short' 'gdome_pi_nodeType' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'unsigned short,gdome_pi_nodeType,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_nodeType(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_nodeType", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_nodeType(" << myarg0 << ", " << myarg1 << ")");
	unsigned short int ret = cgate_gdome_pi_nodeType(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_parentNode' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_parentNode,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_parentNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_parentNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_parentNode(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_pi_parentNode(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_pi_childNodes' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_pi_childNodes,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_childNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_childNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_childNodes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_pi_childNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_firstChild' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_firstChild,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_firstChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_firstChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_firstChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_pi_firstChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_lastChild' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_lastChild,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_lastChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_lastChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_lastChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_pi_lastChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_previousSibling' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_previousSibling,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_previousSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_previousSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_previousSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_pi_previousSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_nextSibling' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_nextSibling,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_nextSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_nextSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_nextSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_pi_nextSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_pi_attributes' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_pi_attributes,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_attributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_attributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_attributes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_pi_attributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNamedNodeMap*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocument*' 'gdome_pi_ownerDocument' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_pi_ownerDocument,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_ownerDocument(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_ownerDocument", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_ownerDocument(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_pi_ownerDocument(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocument*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_insertBefore' (GdomeProcessingInstruction* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_insertBefore,GdomeProcessingInstruction*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_insertBefore(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_insertBefore", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_insertBefore(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_pi_insertBefore(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_replaceChild' (GdomeProcessingInstruction* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_replaceChild,GdomeProcessingInstruction*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_replaceChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_replaceChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_replaceChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_pi_replaceChild(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_removeChild' (GdomeProcessingInstruction* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_removeChild,GdomeProcessingInstruction*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_removeChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_removeChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_removeChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_pi_removeChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_appendChild' (GdomeProcessingInstruction* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_appendChild,GdomeProcessingInstruction*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_appendChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_appendChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_appendChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_pi_appendChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_pi_hasChildNodes' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_pi_hasChildNodes,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_hasChildNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_hasChildNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_hasChildNodes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_pi_hasChildNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_cloneNode' (GdomeProcessingInstruction* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_cloneNode,GdomeProcessingInstruction*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_cloneNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_cloneNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int myarg1 = args[1]->Int32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_cloneNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_pi_cloneNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_pi_normalize' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'void,gdome_pi_normalize,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_normalize(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_normalize", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_normalize(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_pi_normalize(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_pi_isSupported' (GdomeProcessingInstruction* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_pi_isSupported,GdomeProcessingInstruction*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_isSupported(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_isSupported", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_isSupported(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	int ret = cgate_gdome_pi_isSupported(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_pi_namespaceURI' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_pi_namespaceURI,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_namespaceURI(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_namespaceURI", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_namespaceURI(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_pi_namespaceURI(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_pi_prefix' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_pi_prefix,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_prefix(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_pi_prefix(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_pi_set_prefix' (GdomeProcessingInstruction* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_pi_set_prefix,GdomeProcessingInstruction*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_set_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_set_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_set_prefix(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_pi_set_prefix(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_pi_localName' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_pi_localName,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_localName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_localName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_localName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_pi_localName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_pi_hasAttributes' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_pi_hasAttributes,GdomeProcessingInstruction*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_hasAttributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_hasAttributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_hasAttributes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_pi_hasAttributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_pi_addEventListener' (GdomeProcessingInstruction* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_pi_addEventListener,GdomeProcessingInstruction*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_addEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_addEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_addEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_pi_addEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_pi_removeEventListener' (GdomeProcessingInstruction* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_pi_removeEventListener,GdomeProcessingInstruction*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_removeEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_removeEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_removeEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_pi_removeEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_pi_dispatchEvent' (GdomeProcessingInstruction* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_pi_dispatchEvent,GdomeProcessingInstruction*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_dispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_dispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_dispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_pi_dispatchEvent(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_pi_subTreeDispatchEvent' (GdomeProcessingInstruction* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_pi_subTreeDispatchEvent,GdomeProcessingInstruction*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_subTreeDispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_subTreeDispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_subTreeDispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_pi_subTreeDispatchEvent(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_pi_canAppend' (GdomeProcessingInstruction* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_pi_canAppend,GdomeProcessingInstruction*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_pi_canAppend(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_pi_canAppend", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeProcessingInstruction*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_pi_canAppend(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_pi_canAppend(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_name' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_name,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_name(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_name", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_name(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_name(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_dt_entities' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_dt_entities,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_entities(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_entities", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_entities(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_entities(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNamedNodeMap*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_dt_notations' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_dt_notations,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_notations(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_notations", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_notations(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_notations(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNamedNodeMap*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_publicId' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_publicId,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_publicId(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_publicId", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_publicId(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_publicId(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_systemId' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_systemId,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_systemId(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_systemId", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_systemId(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_systemId(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_internalSubset' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_internalSubset,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_internalSubset(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_internalSubset", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_internalSubset(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_internalSubset(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_dt_ref' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'void,gdome_dt_ref,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_ref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_ref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_ref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_dt_ref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_dt_unref' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'void,gdome_dt_unref,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_unref(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_unref", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_unref(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_dt_unref(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'gpointer' 'gdome_dt_query_interface' (GdomeDocumentType* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_dt_query_interface,GdomeDocumentType*,const char*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_query_interface(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_query_interface", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	const std::string mytmp1 = openjs::convert<std::string>(args[1]);
	const char* myarg1 = mytmp1.c_str();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_query_interface(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_dt_query_interface(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_nodeName' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_nodeName,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_nodeName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_nodeName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_nodeName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_nodeName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_nodeValue' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_nodeValue,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_nodeValue(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_nodeValue(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_dt_set_nodeValue' (GdomeDocumentType* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_dt_set_nodeValue,GdomeDocumentType*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_set_nodeValue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_set_nodeValue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_set_nodeValue(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_dt_set_nodeValue(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'unsigned short' 'gdome_dt_nodeType' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'unsigned short,gdome_dt_nodeType,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_nodeType(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_nodeType", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_nodeType(" << myarg0 << ", " << myarg1 << ")");
	unsigned short int ret = cgate_gdome_dt_nodeType(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::NewFromUnsigned(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_parentNode' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_parentNode,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_parentNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_parentNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_parentNode(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_parentNode(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNodeList*' 'gdome_dt_childNodes' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_dt_childNodes,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_childNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_childNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_childNodes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_childNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNodeList*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_firstChild' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_firstChild,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_firstChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_firstChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_firstChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_firstChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_lastChild' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_lastChild,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_lastChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_lastChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_lastChild(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_lastChild(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_previousSibling' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_previousSibling,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_previousSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_previousSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_previousSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_previousSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_nextSibling' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_nextSibling,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_nextSibling(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_nextSibling", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_nextSibling(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_nextSibling(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_dt_attributes' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_dt_attributes,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_attributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_attributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_attributes(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_attributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNamedNodeMap*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDocument*' 'gdome_dt_ownerDocument' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_dt_ownerDocument,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_ownerDocument(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_ownerDocument", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_ownerDocument(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_ownerDocument(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDocument*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_insertBefore' (GdomeDocumentType* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_insertBefore,GdomeDocumentType*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_insertBefore(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_insertBefore", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_insertBefore(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_dt_insertBefore(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_replaceChild' (GdomeDocumentType* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_replaceChild,GdomeDocumentType*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_replaceChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_replaceChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeNode*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_replaceChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	unsigned int ret = cgate_gdome_dt_replaceChild(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_removeChild' (GdomeDocumentType* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_removeChild,GdomeDocumentType*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_removeChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_removeChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_removeChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_dt_removeChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_appendChild' (GdomeDocumentType* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_appendChild,GdomeDocumentType*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_appendChild(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_appendChild", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_appendChild(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_dt_appendChild(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_dt_hasChildNodes' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_dt_hasChildNodes,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_hasChildNodes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_hasChildNodes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_hasChildNodes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_dt_hasChildNodes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_cloneNode' (GdomeDocumentType* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_cloneNode,GdomeDocumentType*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_cloneNode(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_cloneNode", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int myarg1 = args[1]->Int32Value();
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_cloneNode(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	unsigned int ret = cgate_gdome_dt_cloneNode(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_dt_normalize' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'void,gdome_dt_normalize,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_normalize(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_normalize", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_normalize(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_dt_normalize(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_dt_isSupported' (GdomeDocumentType* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_dt_isSupported,GdomeDocumentType*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_isSupported(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_isSupported", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeDOMString*");
	int_pointer_type myarg3 = ptr_from_v8(args[3], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_isSupported(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ")");
	int ret = cgate_gdome_dt_isSupported(myarg0, myarg1, myarg2, myarg3);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_namespaceURI' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_namespaceURI,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_namespaceURI(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_namespaceURI", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_namespaceURI(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_namespaceURI(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_prefix' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_prefix,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_prefix(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_prefix(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_dt_set_prefix' (GdomeDocumentType* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_dt_set_prefix,GdomeDocumentType*,GdomeDOMString*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_set_prefix(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_set_prefix", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_set_prefix(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_dt_set_prefix(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_localName' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_localName,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_localName(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_localName", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_localName(" << myarg0 << ", " << myarg1 << ")");
	unsigned int ret = cgate_gdome_dt_localName(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeDOMString*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_dt_hasAttributes' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_dt_hasAttributes,GdomeDocumentType*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_hasAttributes(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_hasAttributes", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_hasAttributes(" << myarg0 << ", " << myarg1 << ")");
	int ret = cgate_gdome_dt_hasAttributes(myarg0, myarg1);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_dt_addEventListener' (GdomeDocumentType* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_dt_addEventListener,GdomeDocumentType*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_addEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_addEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_addEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_dt_addEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_dt_removeEventListener' (GdomeDocumentType* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_dt_removeEventListener,GdomeDocumentType*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_removeEventListener(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_removeEventListener", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeDOMString*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeEventListener*");
	int myarg3 = args[3]->Int32Value();
	int_pointer_type myarg4 = ptr_from_v8(args[4], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_removeEventListener(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ", " << myarg3 << ", " << myarg4 << ")");
	cgate_gdome_dt_removeEventListener(myarg0, myarg1, myarg2, myarg3, myarg4);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_dt_dispatchEvent' (GdomeDocumentType* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_dt_dispatchEvent,GdomeDocumentType*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_dispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_dispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_dispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_dt_dispatchEvent(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_dt_subTreeDispatchEvent' (GdomeDocumentType* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_dt_subTreeDispatchEvent,GdomeDocumentType*,GdomeEvent*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_subTreeDispatchEvent(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_subTreeDispatchEvent", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeEvent*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_subTreeDispatchEvent(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	cgate_gdome_dt_subTreeDispatchEvent(myarg0, myarg1, myarg2);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeBoolean' 'gdome_dt_canAppend' (GdomeDocumentType* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_dt_canAppend,GdomeDocumentType*,GdomeNode*,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_dt_canAppend(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_dt_canAppend", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeDocumentType*");
	int_pointer_type myarg1 = ptr_from_v8(args[1], "GdomeNode*");
	int_pointer_type myarg2 = ptr_from_v8(args[2], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_dt_canAppend(" << myarg0 << ", " << myarg1 << ", " << myarg2 << ")");
	int ret = cgate_gdome_dt_canAppend(myarg0, myarg1, myarg2);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeException*' 'gdome_extra_exc_new' ().
 * Configuration line: 'GdomeException*,gdome_extra_exc_new,,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_extra_exc_new(const v8::Arguments&
#ifndef DEBUG
/* args*/
#else
 args
#endif
) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_extra_exc_new", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_extra_exc_new()");
	unsigned int ret = cgate_gdome_extra_exc_new();
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeException*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_extra_exc_del' (GdomeException*).
 * Configuration line: 'void,gdome_extra_exc_del,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_extra_exc_del(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_extra_exc_del", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_extra_exc_del(" << myarg0 << ")");
	cgate_gdome_extra_exc_del(myarg0);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeException' 'gdome_extra_exc_getvalue' (GdomeException*).
 * Configuration line: 'GdomeException,gdome_extra_exc_getvalue,GdomeException*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_extra_exc_getvalue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_extra_exc_getvalue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeException*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_extra_exc_getvalue(" << myarg0 << ")");
	int ret = cgate_gdome_extra_exc_getvalue(myarg0);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = v8::Integer::New(ret);
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'void' 'gdome_extra_exc_setvalue' (GdomeException* GdomeException).
 * Configuration line: 'void,gdome_extra_exc_setvalue,GdomeException*,GdomeException,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_extra_exc_setvalue(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_extra_exc_setvalue", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeException*");
	int myarg1 = args[1]->Int32Value();
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_extra_exc_setvalue(" << myarg0 << ", " << myarg1 << ")");
	cgate_gdome_extra_exc_setvalue(myarg0, myarg1);
	v8::Handle<v8::Value> v_ret = v8::Undefined();
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeText*' 'gdome_extra_cast_node_to_text' (GdomeNode*).
 * Configuration line: 'GdomeText*,gdome_extra_cast_node_to_text,GdomeNode*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_extra_cast_node_to_text(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_extra_cast_node_to_text", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeNode*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_extra_cast_node_to_text(" << myarg0 << ")");
	unsigned int ret = cgate_gdome_extra_cast_node_to_text(myarg0);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeText*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_extra_cast_text_to_node' (GdomeText*).
 * Configuration line: 'GdomeNode*,gdome_extra_cast_text_to_node,GdomeText*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_extra_cast_text_to_node(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_extra_cast_text_to_node", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeText*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_extra_cast_text_to_node(" << myarg0 << ")");
	unsigned int ret = cgate_gdome_extra_cast_text_to_node(myarg0);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}

/** Wrapper for 'GdomeNode*' 'gdome_extra_cast_element_to_node' (GdomeElement*).
 * Configuration line: 'GdomeNode*,gdome_extra_cast_element_to_node,GdomeElement*,'
 */
v8::Handle<v8::Value> openjs::extensions::do_gdome_extra_cast_element_to_node(const v8::Arguments& args) {
  SENDANOR_LOGGER_FUNCTION("do_gdome_extra_cast_element_to_node", "args[" << args.Length() << "]" );
  v8::HandleScope handle_scope;
  try {
	int_pointer_type myarg0 = ptr_from_v8(args[0], "GdomeElement*");
	SENDANOR_LOGGER_DEBUG("Calling cgate_gdome_extra_cast_element_to_node(" << myarg0 << ")");
	unsigned int ret = cgate_gdome_extra_cast_element_to_node(myarg0);
	SENDANOR_LOGGER_DEBUG("ret = " << ret);
	v8::Handle<v8::Value> v_ret = ptr_to_v8(ret, "GdomeNode*");
	return handle_scope.Close(v_ret);
  } catch(...) { return handle_scope.Close(openjs::cxx_to_v8_exception_handler()); }
}


