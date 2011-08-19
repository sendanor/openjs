/** Wrapper for 'GdomeDOMString*' 'gdome_str_mkref_dup' (const gchar*).
 * Configuration line: 'GdomeDOMString*,gdome_str_mkref_dup,const gchar*,'
 */
inline unsigned int cgate_gdome_str_mkref_dup(const char * arg0) {
	return (unsigned int) gdome_str_mkref_dup((const gchar*)arg0);
}

/** Wrapper for 'void' 'gdome_str_ref' (GdomeDOMString*).
 * Configuration line: 'void,gdome_str_ref,GdomeDOMString*,'
 */
inline void cgate_gdome_str_ref(unsigned int arg0) {
	gdome_str_ref((GdomeDOMString*)arg0);
}

/** Wrapper for 'void' 'gdome_str_unref' (GdomeDOMString*).
 * Configuration line: 'void,gdome_str_unref,GdomeDOMString*,'
 */
inline void cgate_gdome_str_unref(unsigned int arg0) {
	gdome_str_unref((GdomeDOMString*)arg0);
}

/** Wrapper for 'int' 'gdome_str_length' (GdomeDOMString*).
 * Configuration line: 'int,gdome_str_length,GdomeDOMString*,'
 */
inline int cgate_gdome_str_length(unsigned int arg0) {
	return (int) gdome_str_length((GdomeDOMString*)arg0);
}

/** Wrapper for 'GdomeBoolean' 'gdome_str_isEmpty' (GdomeDOMString*).
 * Configuration line: 'GdomeBoolean,gdome_str_isEmpty,GdomeDOMString*,'
 */
inline int cgate_gdome_str_isEmpty(unsigned int arg0) {
	return (int) gdome_str_isEmpty((GdomeDOMString*)arg0);
}

/** Wrapper for 'gchar' 'gdome_str_charAt' (GdomeDOMString* int).
 * Configuration line: 'gchar,gdome_str_charAt,GdomeDOMString*,int,'
 */
inline char cgate_gdome_str_charAt(unsigned int arg0, int arg1) {
	return (char) gdome_str_charAt((GdomeDOMString*)arg0, (int)arg1);
}

/** Wrapper for 'GdomeDOMImplementation*' 'gdome_di_mkref' ().
 * Configuration line: 'GdomeDOMImplementation*,gdome_di_mkref,,'
 */
inline unsigned int cgate_gdome_di_mkref() {
	return (unsigned int) gdome_di_mkref();
}

/** Wrapper for 'void' 'gdome_di_ref' (GdomeDOMImplementation* GdomeException*).
 * Configuration line: 'void,gdome_di_ref,GdomeDOMImplementation*,GdomeException*,'
 */
inline void cgate_gdome_di_ref(unsigned int arg0, unsigned int arg1) {
	gdome_di_ref((GdomeDOMImplementation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_di_unref' (GdomeDOMImplementation* GdomeException*).
 * Configuration line: 'void,gdome_di_unref,GdomeDOMImplementation*,GdomeException*,'
 */
inline void cgate_gdome_di_unref(unsigned int arg0, unsigned int arg1) {
	gdome_di_unref((GdomeDOMImplementation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDocumentType*' 'gdome_di_createDocumentType' (GdomeDOMImplementation* GdomeDOMString* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeDocumentType*,gdome_di_createDocumentType,GdomeDOMImplementation*,GdomeDOMString*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_di_createDocumentType(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
	return (unsigned int) gdome_di_createDocumentType((GdomeDOMImplementation*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeDOMString*)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'GdomeDocument*' 'gdome_di_createDocument' (GdomeDOMImplementation* GdomeDOMString* GdomeDOMString* GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_di_createDocument,GdomeDOMImplementation*,GdomeDOMString*,GdomeDOMString*,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_di_createDocument(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
	return (unsigned int) gdome_di_createDocument((GdomeDOMImplementation*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeDocumentType*)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_di_freeDoc' (GdomeDOMImplementation* GdomeDocument* GdomeException*).
 * Configuration line: 'void,gdome_di_freeDoc,GdomeDOMImplementation*,GdomeDocument*,GdomeException*,'
 */
inline void cgate_gdome_di_freeDoc(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_di_freeDoc((GdomeDOMImplementation*)arg0, (GdomeDocument*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDocument*' 'gdome_di_createDocFromURI' (GdomeDOMImplementation* const char* unsigned int GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_di_createDocFromURI,GdomeDOMImplementation*,const char*,unsigned int,GdomeException*,'
 */
inline unsigned int cgate_gdome_di_createDocFromURI(unsigned int arg0, const char * arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_di_createDocFromURI((GdomeDOMImplementation*)arg0, (const char*)arg1, (unsigned int)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeDocument*' 'gdome_di_createDocFromMemory' (GdomeDOMImplementation* char* unsigned int GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_di_createDocFromMemory,GdomeDOMImplementation*,char*,unsigned int,GdomeException*,'
 */
inline unsigned int cgate_gdome_di_createDocFromMemory(unsigned int arg0, char * arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_di_createDocFromMemory((GdomeDOMImplementation*)arg0, (char*)arg1, (unsigned int)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeBoolean' 'gdome_di_saveDocToFile' (GdomeDOMImplementation* GdomeDocument* const char* GdomeSavingCode GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_di_saveDocToFile,GdomeDOMImplementation*,GdomeDocument*,const char*,GdomeSavingCode,GdomeException*,'
 */
inline int cgate_gdome_di_saveDocToFile(unsigned int arg0, unsigned int arg1, const char * arg2, int arg3, unsigned int arg4) {
	return (int) gdome_di_saveDocToFile((GdomeDOMImplementation*)arg0, (GdomeDocument*)arg1, (const char*)arg2, (GdomeSavingCode)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'GdomeBoolean' 'gdome_di_saveDocToFileEnc' (GdomeDOMImplementation* GdomeDocument* const char* const char* GdomeSavingCode GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_di_saveDocToFileEnc,GdomeDOMImplementation*,GdomeDocument*,const char*,const char*,GdomeSavingCode,GdomeException*,'
 */
inline int cgate_gdome_di_saveDocToFileEnc(unsigned int arg0, unsigned int arg1, const char * arg2, const char * arg3, int arg4, unsigned int arg5) {
	return (int) gdome_di_saveDocToFileEnc((GdomeDOMImplementation*)arg0, (GdomeDocument*)arg1, (const char*)arg2, (const char*)arg3, (GdomeSavingCode)arg4, (GdomeException*)arg5);
}

/** Wrapper for 'GdomeBoolean' 'gdome_di_saveDocToMemory' (GdomeDOMImplementation* GdomeDocument* char** GdomeSavingCode GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_di_saveDocToMemory,GdomeDOMImplementation*,GdomeDocument*,char**,GdomeSavingCode,GdomeException*,'
 */
inline int cgate_gdome_di_saveDocToMemory(unsigned int arg0, unsigned int arg1, char ** arg2, int arg3, unsigned int arg4) {
	return (int) gdome_di_saveDocToMemory((GdomeDOMImplementation*)arg0, (GdomeDocument*)arg1, (char**)arg2, (GdomeSavingCode)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'GdomeBoolean' 'gdome_di_saveDocToMemoryEnc' (GdomeDOMImplementation* GdomeDocument* char** const char* GdomeSavingCode GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_di_saveDocToMemoryEnc,GdomeDOMImplementation*,GdomeDocument*,char**,const char*,GdomeSavingCode,GdomeException*,'
 */
inline int cgate_gdome_di_saveDocToMemoryEnc(unsigned int arg0, unsigned int arg1, char ** arg2, const char * arg3, int arg4, unsigned int arg5) {
	return (int) gdome_di_saveDocToMemoryEnc((GdomeDOMImplementation*)arg0, (GdomeDocument*)arg1, (char**)arg2, (const char*)arg3, (GdomeSavingCode)arg4, (GdomeException*)arg5);
}

/** Wrapper for 'void' 'gdome_df_ref' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'void,gdome_df_ref,GdomeDocumentFragment*,GdomeException*,'
 */
inline void cgate_gdome_df_ref(unsigned int arg0, unsigned int arg1) {
	gdome_df_ref((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_df_unref' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'void,gdome_df_unref,GdomeDocumentFragment*,GdomeException*,'
 */
inline void cgate_gdome_df_unref(unsigned int arg0, unsigned int arg1) {
	gdome_df_unref((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'gpointer' 'gdome_df_query_interface' (GdomeDocumentFragment* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_df_query_interface,GdomeDocumentFragment*,const char*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_query_interface(unsigned int arg0, const char * arg1, unsigned int arg2) {
	return (unsigned int) gdome_df_query_interface((GdomeDocumentFragment*)arg0, (const char*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_df_nodeName' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_df_nodeName,GdomeDocumentFragment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_nodeName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_df_nodeName((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_df_nodeValue' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_df_nodeValue,GdomeDocumentFragment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_nodeValue(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_df_nodeValue((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_df_set_nodeValue' (GdomeDocumentFragment* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_df_set_nodeValue,GdomeDocumentFragment*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_df_set_nodeValue(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_df_set_nodeValue((GdomeDocumentFragment*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'unsigned short' 'gdome_df_nodeType' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'unsigned short,gdome_df_nodeType,GdomeDocumentFragment*,GdomeException*,'
 */
inline unsigned short int cgate_gdome_df_nodeType(unsigned int arg0, unsigned int arg1) {
	return (unsigned short int) gdome_df_nodeType((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_df_parentNode' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_parentNode,GdomeDocumentFragment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_parentNode(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_df_parentNode((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_df_childNodes' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_df_childNodes,GdomeDocumentFragment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_childNodes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_df_childNodes((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_df_firstChild' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_firstChild,GdomeDocumentFragment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_firstChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_df_firstChild((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_df_lastChild' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_lastChild,GdomeDocumentFragment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_lastChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_df_lastChild((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_df_previousSibling' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_previousSibling,GdomeDocumentFragment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_previousSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_df_previousSibling((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_df_nextSibling' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_nextSibling,GdomeDocumentFragment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_nextSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_df_nextSibling((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_df_attributes' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_df_attributes,GdomeDocumentFragment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_attributes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_df_attributes((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDocument*' 'gdome_df_ownerDocument' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_df_ownerDocument,GdomeDocumentFragment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_ownerDocument(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_df_ownerDocument((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_df_insertBefore' (GdomeDocumentFragment* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_insertBefore,GdomeDocumentFragment*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_insertBefore(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_df_insertBefore((GdomeDocumentFragment*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_df_replaceChild' (GdomeDocumentFragment* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_replaceChild,GdomeDocumentFragment*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_replaceChild(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_df_replaceChild((GdomeDocumentFragment*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_df_removeChild' (GdomeDocumentFragment* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_removeChild,GdomeDocumentFragment*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_removeChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_df_removeChild((GdomeDocumentFragment*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_df_appendChild' (GdomeDocumentFragment* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_appendChild,GdomeDocumentFragment*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_appendChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_df_appendChild((GdomeDocumentFragment*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_df_hasChildNodes' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_df_hasChildNodes,GdomeDocumentFragment*,GdomeException*,'
 */
inline int cgate_gdome_df_hasChildNodes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_df_hasChildNodes((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_df_cloneNode' (GdomeDocumentFragment* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_df_cloneNode,GdomeDocumentFragment*,GdomeBoolean,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_cloneNode(unsigned int arg0, int arg1, unsigned int arg2) {
	return (unsigned int) gdome_df_cloneNode((GdomeDocumentFragment*)arg0, (GdomeBoolean)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_df_normalize' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'void,gdome_df_normalize,GdomeDocumentFragment*,GdomeException*,'
 */
inline void cgate_gdome_df_normalize(unsigned int arg0, unsigned int arg1) {
	gdome_df_normalize((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_df_isSupported' (GdomeDocumentFragment* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_df_isSupported,GdomeDocumentFragment*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline int cgate_gdome_df_isSupported(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (int) gdome_df_isSupported((GdomeDocumentFragment*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_df_namespaceURI' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_df_namespaceURI,GdomeDocumentFragment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_namespaceURI(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_df_namespaceURI((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_df_prefix' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_df_prefix,GdomeDocumentFragment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_prefix(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_df_prefix((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_df_set_prefix' (GdomeDocumentFragment* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_df_set_prefix,GdomeDocumentFragment*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_df_set_prefix(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_df_set_prefix((GdomeDocumentFragment*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_df_localName' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_df_localName,GdomeDocumentFragment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_df_localName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_df_localName((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_df_hasAttributes' (GdomeDocumentFragment* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_df_hasAttributes,GdomeDocumentFragment*,GdomeException*,'
 */
inline int cgate_gdome_df_hasAttributes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_df_hasAttributes((GdomeDocumentFragment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_df_addEventListener' (GdomeDocumentFragment* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_df_addEventListener,GdomeDocumentFragment*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_df_addEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_df_addEventListener((GdomeDocumentFragment*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_df_removeEventListener' (GdomeDocumentFragment* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_df_removeEventListener,GdomeDocumentFragment*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_df_removeEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_df_removeEventListener((GdomeDocumentFragment*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'GdomeBoolean' 'gdome_df_dispatchEvent' (GdomeDocumentFragment* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_df_dispatchEvent,GdomeDocumentFragment*,GdomeEvent*,GdomeException*,'
 */
inline int cgate_gdome_df_dispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_df_dispatchEvent((GdomeDocumentFragment*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_df_subTreeDispatchEvent' (GdomeDocumentFragment* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_df_subTreeDispatchEvent,GdomeDocumentFragment*,GdomeEvent*,GdomeException*,'
 */
inline void cgate_gdome_df_subTreeDispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_df_subTreeDispatchEvent((GdomeDocumentFragment*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_df_canAppend' (GdomeDocumentFragment* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_df_canAppend,GdomeDocumentFragment*,GdomeNode*,GdomeException*,'
 */
inline int cgate_gdome_df_canAppend(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_df_canAppend((GdomeDocumentFragment*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDocumentType*' 'gdome_doc_doctype' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDocumentType*,gdome_doc_doctype,GdomeDocument*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_doctype(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_doc_doctype((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMImplementation*' 'gdome_doc_implementation' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDOMImplementation*,gdome_doc_implementation,GdomeDocument*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_implementation(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_doc_implementation((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeElement*' 'gdome_doc_documentElement' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeElement*,gdome_doc_documentElement,GdomeDocument*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_documentElement(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_doc_documentElement((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeElement*' 'gdome_doc_createElement' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeElement*,gdome_doc_createElement,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_createElement(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_doc_createElement((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDocumentFragment*' 'gdome_doc_createDocumentFragment' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDocumentFragment*,gdome_doc_createDocumentFragment,GdomeDocument*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_createDocumentFragment(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_doc_createDocumentFragment((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeText*' 'gdome_doc_createTextNode' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeText*,gdome_doc_createTextNode,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_createTextNode(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_doc_createTextNode((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeComment*' 'gdome_doc_createComment' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeComment*,gdome_doc_createComment,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_createComment(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_doc_createComment((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeCDATASection*' 'gdome_doc_createCDATASection' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeCDATASection*,gdome_doc_createCDATASection,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_createCDATASection(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_doc_createCDATASection((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeProcessingInstruction*' 'gdome_doc_createProcessingInstruction' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeProcessingInstruction*,gdome_doc_createProcessingInstruction,GdomeDocument*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_createProcessingInstruction(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_doc_createProcessingInstruction((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeAttr*' 'gdome_doc_createAttribute' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeAttr*,gdome_doc_createAttribute,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_createAttribute(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_doc_createAttribute((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeEntityReference*' 'gdome_doc_createEntityReference' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeEntityReference*,gdome_doc_createEntityReference,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_createEntityReference(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_doc_createEntityReference((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_doc_getElementsByTagName' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_doc_getElementsByTagName,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_getElementsByTagName(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_doc_getElementsByTagName((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_importNode' (GdomeDocument* GdomeNode* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_importNode,GdomeDocument*,GdomeNode*,GdomeBoolean,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_importNode(unsigned int arg0, unsigned int arg1, int arg2, unsigned int arg3) {
	return (unsigned int) gdome_doc_importNode((GdomeDocument*)arg0, (GdomeNode*)arg1, (GdomeBoolean)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeElement*' 'gdome_doc_createElementNS' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeElement*,gdome_doc_createElementNS,GdomeDocument*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_createElementNS(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_doc_createElementNS((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeAttr*' 'gdome_doc_createAttributeNS' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeAttr*,gdome_doc_createAttributeNS,GdomeDocument*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_createAttributeNS(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_doc_createAttributeNS((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_doc_getElementsByTagNameNS' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_doc_getElementsByTagNameNS,GdomeDocument*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_getElementsByTagNameNS(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_doc_getElementsByTagNameNS((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeElement*' 'gdome_doc_getElementById' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeElement*,gdome_doc_getElementById,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_getElementById(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_doc_getElementById((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeEvent*' 'gdome_doc_createEvent' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeEvent*,gdome_doc_createEvent,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_createEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_doc_createEvent((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_doc_ref' (GdomeDocument* GdomeException*).
 * Configuration line: 'void,gdome_doc_ref,GdomeDocument*,GdomeException*,'
 */
inline void cgate_gdome_doc_ref(unsigned int arg0, unsigned int arg1) {
	gdome_doc_ref((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_doc_unref' (GdomeDocument* GdomeException*).
 * Configuration line: 'void,gdome_doc_unref,GdomeDocument*,GdomeException*,'
 */
inline void cgate_gdome_doc_unref(unsigned int arg0, unsigned int arg1) {
	gdome_doc_unref((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'gpointer' 'gdome_doc_query_interface' (GdomeDocument* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_doc_query_interface,GdomeDocument*,const char*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_query_interface(unsigned int arg0, const char * arg1, unsigned int arg2) {
	return (unsigned int) gdome_doc_query_interface((GdomeDocument*)arg0, (const char*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_doc_nodeName' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_doc_nodeName,GdomeDocument*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_nodeName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_doc_nodeName((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_doc_nodeValue' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_doc_nodeValue,GdomeDocument*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_nodeValue(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_doc_nodeValue((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_doc_set_nodeValue' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_doc_set_nodeValue,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_doc_set_nodeValue(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_doc_set_nodeValue((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'unsigned short' 'gdome_doc_nodeType' (GdomeDocument* GdomeException*).
 * Configuration line: 'unsigned short,gdome_doc_nodeType,GdomeDocument*,GdomeException*,'
 */
inline unsigned short int cgate_gdome_doc_nodeType(unsigned int arg0, unsigned int arg1) {
	return (unsigned short int) gdome_doc_nodeType((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_parentNode' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_parentNode,GdomeDocument*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_parentNode(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_doc_parentNode((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_doc_childNodes' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_doc_childNodes,GdomeDocument*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_childNodes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_doc_childNodes((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_firstChild' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_firstChild,GdomeDocument*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_firstChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_doc_firstChild((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_lastChild' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_lastChild,GdomeDocument*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_lastChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_doc_lastChild((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_previousSibling' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_previousSibling,GdomeDocument*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_previousSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_doc_previousSibling((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_nextSibling' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_nextSibling,GdomeDocument*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_nextSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_doc_nextSibling((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_doc_attributes' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_doc_attributes,GdomeDocument*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_attributes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_doc_attributes((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDocument*' 'gdome_doc_ownerDocument' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_doc_ownerDocument,GdomeDocument*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_ownerDocument(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_doc_ownerDocument((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_insertBefore' (GdomeDocument* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_insertBefore,GdomeDocument*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_insertBefore(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_doc_insertBefore((GdomeDocument*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_replaceChild' (GdomeDocument* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_replaceChild,GdomeDocument*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_replaceChild(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_doc_replaceChild((GdomeDocument*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_removeChild' (GdomeDocument* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_removeChild,GdomeDocument*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_removeChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_doc_removeChild((GdomeDocument*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_appendChild' (GdomeDocument* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_appendChild,GdomeDocument*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_appendChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_doc_appendChild((GdomeDocument*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_doc_hasChildNodes' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_doc_hasChildNodes,GdomeDocument*,GdomeException*,'
 */
inline int cgate_gdome_doc_hasChildNodes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_doc_hasChildNodes((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_doc_cloneNode' (GdomeDocument* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_doc_cloneNode,GdomeDocument*,GdomeBoolean,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_cloneNode(unsigned int arg0, int arg1, unsigned int arg2) {
	return (unsigned int) gdome_doc_cloneNode((GdomeDocument*)arg0, (GdomeBoolean)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_doc_normalize' (GdomeDocument* GdomeException*).
 * Configuration line: 'void,gdome_doc_normalize,GdomeDocument*,GdomeException*,'
 */
inline void cgate_gdome_doc_normalize(unsigned int arg0, unsigned int arg1) {
	gdome_doc_normalize((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_doc_isSupported' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_doc_isSupported,GdomeDocument*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline int cgate_gdome_doc_isSupported(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (int) gdome_doc_isSupported((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_doc_namespaceURI' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_doc_namespaceURI,GdomeDocument*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_namespaceURI(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_doc_namespaceURI((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_doc_prefix' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_doc_prefix,GdomeDocument*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_prefix(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_doc_prefix((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_doc_set_prefix' (GdomeDocument* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_doc_set_prefix,GdomeDocument*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_doc_set_prefix(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_doc_set_prefix((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_doc_localName' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_doc_localName,GdomeDocument*,GdomeException*,'
 */
inline unsigned int cgate_gdome_doc_localName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_doc_localName((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_doc_hasAttributes' (GdomeDocument* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_doc_hasAttributes,GdomeDocument*,GdomeException*,'
 */
inline int cgate_gdome_doc_hasAttributes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_doc_hasAttributes((GdomeDocument*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_doc_addEventListener' (GdomeDocument* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_doc_addEventListener,GdomeDocument*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_doc_addEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_doc_addEventListener((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_doc_removeEventListener' (GdomeDocument* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_doc_removeEventListener,GdomeDocument*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_doc_removeEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_doc_removeEventListener((GdomeDocument*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'GdomeBoolean' 'gdome_doc_dispatchEvent' (GdomeDocument* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_doc_dispatchEvent,GdomeDocument*,GdomeEvent*,GdomeException*,'
 */
inline int cgate_gdome_doc_dispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_doc_dispatchEvent((GdomeDocument*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_doc_subTreeDispatchEvent' (GdomeDocument* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_doc_subTreeDispatchEvent,GdomeDocument*,GdomeEvent*,GdomeException*,'
 */
inline void cgate_gdome_doc_subTreeDispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_doc_subTreeDispatchEvent((GdomeDocument*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_doc_canAppend' (GdomeDocument* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_doc_canAppend,GdomeDocument*,GdomeNode*,GdomeException*,'
 */
inline int cgate_gdome_doc_canAppend(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_doc_canAppend((GdomeDocument*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_n_ref' (GdomeNode* GdomeException*).
 * Configuration line: 'void,gdome_n_ref,GdomeNode*,GdomeException*,'
 */
inline void cgate_gdome_n_ref(unsigned int arg0, unsigned int arg1) {
	gdome_n_ref((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_n_unref' (GdomeNode* GdomeException*).
 * Configuration line: 'void,gdome_n_unref,GdomeNode*,GdomeException*,'
 */
inline void cgate_gdome_n_unref(unsigned int arg0, unsigned int arg1) {
	gdome_n_unref((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'gpointer' 'gdome_n_query_interface' (GdomeNode* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_n_query_interface,GdomeNode*,const char*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_query_interface(unsigned int arg0, const char * arg1, unsigned int arg2) {
	return (unsigned int) gdome_n_query_interface((GdomeNode*)arg0, (const char*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_n_nodeName' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_n_nodeName,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_nodeName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_n_nodeName((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_n_nodeValue' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_n_nodeValue,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_nodeValue(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_n_nodeValue((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_n_set_nodeValue' (GdomeNode* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_n_set_nodeValue,GdomeNode*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_n_set_nodeValue(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_n_set_nodeValue((GdomeNode*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'unsigned short' 'gdome_n_nodeType' (GdomeNode* GdomeException*).
 * Configuration line: 'unsigned short,gdome_n_nodeType,GdomeNode*,GdomeException*,'
 */
inline unsigned short int cgate_gdome_n_nodeType(unsigned int arg0, unsigned int arg1) {
	return (unsigned short int) gdome_n_nodeType((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_n_parentNode' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_parentNode,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_parentNode(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_n_parentNode((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_n_childNodes' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_n_childNodes,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_childNodes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_n_childNodes((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_n_firstChild' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_firstChild,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_firstChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_n_firstChild((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_n_lastChild' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_lastChild,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_lastChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_n_lastChild((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_n_previousSibling' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_previousSibling,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_previousSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_n_previousSibling((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_n_nextSibling' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_nextSibling,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_nextSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_n_nextSibling((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_n_attributes' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_n_attributes,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_attributes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_n_attributes((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDocument*' 'gdome_n_ownerDocument' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_n_ownerDocument,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_ownerDocument(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_n_ownerDocument((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_n_insertBefore' (GdomeNode* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_insertBefore,GdomeNode*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_insertBefore(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_n_insertBefore((GdomeNode*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_n_replaceChild' (GdomeNode* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_replaceChild,GdomeNode*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_replaceChild(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_n_replaceChild((GdomeNode*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_n_removeChild' (GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_removeChild,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_removeChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_n_removeChild((GdomeNode*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_n_appendChild' (GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_appendChild,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_appendChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_n_appendChild((GdomeNode*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_n_hasChildNodes' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_n_hasChildNodes,GdomeNode*,GdomeException*,'
 */
inline int cgate_gdome_n_hasChildNodes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_n_hasChildNodes((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_n_cloneNode' (GdomeNode* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_n_cloneNode,GdomeNode*,GdomeBoolean,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_cloneNode(unsigned int arg0, int arg1, unsigned int arg2) {
	return (unsigned int) gdome_n_cloneNode((GdomeNode*)arg0, (GdomeBoolean)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_n_normalize' (GdomeNode* GdomeException*).
 * Configuration line: 'void,gdome_n_normalize,GdomeNode*,GdomeException*,'
 */
inline void cgate_gdome_n_normalize(unsigned int arg0, unsigned int arg1) {
	gdome_n_normalize((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_n_isSupported' (GdomeNode* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_n_isSupported,GdomeNode*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline int cgate_gdome_n_isSupported(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (int) gdome_n_isSupported((GdomeNode*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_n_namespaceURI' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_n_namespaceURI,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_namespaceURI(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_n_namespaceURI((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_n_prefix' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_n_prefix,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_prefix(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_n_prefix((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_n_set_prefix' (GdomeNode* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_n_set_prefix,GdomeNode*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_n_set_prefix(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_n_set_prefix((GdomeNode*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_n_localName' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_n_localName,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_n_localName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_n_localName((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_n_hasAttributes' (GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_n_hasAttributes,GdomeNode*,GdomeException*,'
 */
inline int cgate_gdome_n_hasAttributes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_n_hasAttributes((GdomeNode*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_n_addEventListener' (GdomeNode* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_n_addEventListener,GdomeNode*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_n_addEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_n_addEventListener((GdomeNode*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_n_removeEventListener' (GdomeNode* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_n_removeEventListener,GdomeNode*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_n_removeEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_n_removeEventListener((GdomeNode*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'GdomeBoolean' 'gdome_n_dispatchEvent' (GdomeNode* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_n_dispatchEvent,GdomeNode*,GdomeEvent*,GdomeException*,'
 */
inline int cgate_gdome_n_dispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_n_dispatchEvent((GdomeNode*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_n_subTreeDispatchEvent' (GdomeNode* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_n_subTreeDispatchEvent,GdomeNode*,GdomeEvent*,GdomeException*,'
 */
inline void cgate_gdome_n_subTreeDispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_n_subTreeDispatchEvent((GdomeNode*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_n_canAppend' (GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_n_canAppend,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline int cgate_gdome_n_canAppend(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_n_canAppend((GdomeNode*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_nl_ref' (GdomeNodeList* GdomeException*).
 * Configuration line: 'void,gdome_nl_ref,GdomeNodeList*,GdomeException*,'
 */
inline void cgate_gdome_nl_ref(unsigned int arg0, unsigned int arg1) {
	gdome_nl_ref((GdomeNodeList*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_nl_unref' (GdomeNodeList* GdomeException*).
 * Configuration line: 'void,gdome_nl_unref,GdomeNodeList*,GdomeException*,'
 */
inline void cgate_gdome_nl_unref(unsigned int arg0, unsigned int arg1) {
	gdome_nl_unref((GdomeNodeList*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'gpointer' 'gdome_nl_query_interface' (GdomeNodeList* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_nl_query_interface,GdomeNodeList*,const char*,GdomeException*,'
 */
inline unsigned int cgate_gdome_nl_query_interface(unsigned int arg0, const char * arg1, unsigned int arg2) {
	return (unsigned int) gdome_nl_query_interface((GdomeNodeList*)arg0, (const char*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_nl_item' (GdomeNodeList* gulong GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_nl_item,GdomeNodeList*,gulong,GdomeException*,'
 */
inline unsigned int cgate_gdome_nl_item(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_nl_item((GdomeNodeList*)arg0, (gulong)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'gulong' 'gdome_nl_length' (GdomeNodeList* GdomeException*).
 * Configuration line: 'gulong,gdome_nl_length,GdomeNodeList*,GdomeException*,'
 */
inline unsigned int cgate_gdome_nl_length(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_nl_length((GdomeNodeList*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_nnm_ref' (GdomeNamedNodeMap* GdomeException*).
 * Configuration line: 'void,gdome_nnm_ref,GdomeNamedNodeMap*,GdomeException*,'
 */
inline void cgate_gdome_nnm_ref(unsigned int arg0, unsigned int arg1) {
	gdome_nnm_ref((GdomeNamedNodeMap*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_nnm_unref' (GdomeNamedNodeMap* GdomeException*).
 * Configuration line: 'void,gdome_nnm_unref,GdomeNamedNodeMap*,GdomeException*,'
 */
inline void cgate_gdome_nnm_unref(unsigned int arg0, unsigned int arg1) {
	gdome_nnm_unref((GdomeNamedNodeMap*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'gpointer' 'gdome_nnm_query_interface' (GdomeNamedNodeMap* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_nnm_query_interface,GdomeNamedNodeMap*,const char*,GdomeException*,'
 */
inline unsigned int cgate_gdome_nnm_query_interface(unsigned int arg0, const char * arg1, unsigned int arg2) {
	return (unsigned int) gdome_nnm_query_interface((GdomeNamedNodeMap*)arg0, (const char*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_nnm_getNamedItem' (GdomeNamedNodeMap* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_nnm_getNamedItem,GdomeNamedNodeMap*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_nnm_getNamedItem(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_nnm_getNamedItem((GdomeNamedNodeMap*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_nnm_setNamedItem' (GdomeNamedNodeMap* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_nnm_setNamedItem,GdomeNamedNodeMap*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_nnm_setNamedItem(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_nnm_setNamedItem((GdomeNamedNodeMap*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_nnm_removeNamedItem' (GdomeNamedNodeMap* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_nnm_removeNamedItem,GdomeNamedNodeMap*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_nnm_removeNamedItem(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_nnm_removeNamedItem((GdomeNamedNodeMap*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_nnm_item' (GdomeNamedNodeMap* gulong GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_nnm_item,GdomeNamedNodeMap*,gulong,GdomeException*,'
 */
inline unsigned int cgate_gdome_nnm_item(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_nnm_item((GdomeNamedNodeMap*)arg0, (gulong)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'gulong' 'gdome_nnm_length' (GdomeNamedNodeMap* GdomeException*).
 * Configuration line: 'gulong,gdome_nnm_length,GdomeNamedNodeMap*,GdomeException*,'
 */
inline unsigned int cgate_gdome_nnm_length(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_nnm_length((GdomeNamedNodeMap*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_nnm_getNamedItemNS' (GdomeNamedNodeMap* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_nnm_getNamedItemNS,GdomeNamedNodeMap*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_nnm_getNamedItemNS(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_nnm_getNamedItemNS((GdomeNamedNodeMap*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_nnm_setNamedItemNS' (GdomeNamedNodeMap* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_nnm_setNamedItemNS,GdomeNamedNodeMap*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_nnm_setNamedItemNS(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_nnm_setNamedItemNS((GdomeNamedNodeMap*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_nnm_removeNamedItemNS' (GdomeNamedNodeMap* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_nnm_removeNamedItemNS,GdomeNamedNodeMap*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_nnm_removeNamedItemNS(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_nnm_removeNamedItemNS((GdomeNamedNodeMap*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cd_data' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cd_data,GdomeCharacterData*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_data(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cd_data((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_cd_set_data' (GdomeCharacterData* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cd_set_data,GdomeCharacterData*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_cd_set_data(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_cd_set_data((GdomeCharacterData*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'gulong' 'gdome_cd_length' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'gulong,gdome_cd_length,GdomeCharacterData*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_length(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cd_length((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cd_substringData' (GdomeCharacterData* gulong gulong GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cd_substringData,GdomeCharacterData*,gulong,gulong,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_substringData(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_cd_substringData((GdomeCharacterData*)arg0, (gulong)arg1, (gulong)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'void' 'gdome_cd_appendData' (GdomeCharacterData* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cd_appendData,GdomeCharacterData*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_cd_appendData(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_cd_appendData((GdomeCharacterData*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_cd_insertData' (GdomeCharacterData* gulong GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cd_insertData,GdomeCharacterData*,gulong,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_cd_insertData(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	gdome_cd_insertData((GdomeCharacterData*)arg0, (gulong)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'void' 'gdome_cd_deleteData' (GdomeCharacterData* gulong gulong GdomeException*).
 * Configuration line: 'void,gdome_cd_deleteData,GdomeCharacterData*,gulong,gulong,GdomeException*,'
 */
inline void cgate_gdome_cd_deleteData(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	gdome_cd_deleteData((GdomeCharacterData*)arg0, (gulong)arg1, (gulong)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'void' 'gdome_cd_replaceData' (GdomeCharacterData* gulong gulong GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cd_replaceData,GdomeCharacterData*,gulong,gulong,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_cd_replaceData(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
	gdome_cd_replaceData((GdomeCharacterData*)arg0, (gulong)arg1, (gulong)arg2, (GdomeDOMString*)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_cd_ref' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'void,gdome_cd_ref,GdomeCharacterData*,GdomeException*,'
 */
inline void cgate_gdome_cd_ref(unsigned int arg0, unsigned int arg1) {
	gdome_cd_ref((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_cd_unref' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'void,gdome_cd_unref,GdomeCharacterData*,GdomeException*,'
 */
inline void cgate_gdome_cd_unref(unsigned int arg0, unsigned int arg1) {
	gdome_cd_unref((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'gpointer' 'gdome_cd_query_interface' (GdomeCharacterData* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_cd_query_interface,GdomeCharacterData*,const char*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_query_interface(unsigned int arg0, const char * arg1, unsigned int arg2) {
	return (unsigned int) gdome_cd_query_interface((GdomeCharacterData*)arg0, (const char*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cd_nodeName' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cd_nodeName,GdomeCharacterData*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_nodeName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cd_nodeName((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cd_nodeValue' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cd_nodeValue,GdomeCharacterData*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_nodeValue(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cd_nodeValue((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_cd_set_nodeValue' (GdomeCharacterData* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cd_set_nodeValue,GdomeCharacterData*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_cd_set_nodeValue(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_cd_set_nodeValue((GdomeCharacterData*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'unsigned short' 'gdome_cd_nodeType' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'unsigned short,gdome_cd_nodeType,GdomeCharacterData*,GdomeException*,'
 */
inline unsigned short int cgate_gdome_cd_nodeType(unsigned int arg0, unsigned int arg1) {
	return (unsigned short int) gdome_cd_nodeType((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_parentNode' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_parentNode,GdomeCharacterData*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_parentNode(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cd_parentNode((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_cd_childNodes' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_cd_childNodes,GdomeCharacterData*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_childNodes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cd_childNodes((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_firstChild' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_firstChild,GdomeCharacterData*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_firstChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cd_firstChild((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_lastChild' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_lastChild,GdomeCharacterData*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_lastChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cd_lastChild((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_previousSibling' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_previousSibling,GdomeCharacterData*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_previousSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cd_previousSibling((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_nextSibling' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_nextSibling,GdomeCharacterData*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_nextSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cd_nextSibling((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_cd_attributes' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_cd_attributes,GdomeCharacterData*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_attributes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cd_attributes((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDocument*' 'gdome_cd_ownerDocument' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_cd_ownerDocument,GdomeCharacterData*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_ownerDocument(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cd_ownerDocument((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_insertBefore' (GdomeCharacterData* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_insertBefore,GdomeCharacterData*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_insertBefore(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_cd_insertBefore((GdomeCharacterData*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_replaceChild' (GdomeCharacterData* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_replaceChild,GdomeCharacterData*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_replaceChild(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_cd_replaceChild((GdomeCharacterData*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_removeChild' (GdomeCharacterData* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_removeChild,GdomeCharacterData*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_removeChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_cd_removeChild((GdomeCharacterData*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_appendChild' (GdomeCharacterData* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_appendChild,GdomeCharacterData*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_appendChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_cd_appendChild((GdomeCharacterData*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_cd_hasChildNodes' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cd_hasChildNodes,GdomeCharacterData*,GdomeException*,'
 */
inline int cgate_gdome_cd_hasChildNodes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_cd_hasChildNodes((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_cd_cloneNode' (GdomeCharacterData* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cd_cloneNode,GdomeCharacterData*,GdomeBoolean,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_cloneNode(unsigned int arg0, int arg1, unsigned int arg2) {
	return (unsigned int) gdome_cd_cloneNode((GdomeCharacterData*)arg0, (GdomeBoolean)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_cd_normalize' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'void,gdome_cd_normalize,GdomeCharacterData*,GdomeException*,'
 */
inline void cgate_gdome_cd_normalize(unsigned int arg0, unsigned int arg1) {
	gdome_cd_normalize((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_cd_isSupported' (GdomeCharacterData* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cd_isSupported,GdomeCharacterData*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline int cgate_gdome_cd_isSupported(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (int) gdome_cd_isSupported((GdomeCharacterData*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cd_namespaceURI' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cd_namespaceURI,GdomeCharacterData*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_namespaceURI(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cd_namespaceURI((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cd_prefix' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cd_prefix,GdomeCharacterData*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_prefix(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cd_prefix((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_cd_set_prefix' (GdomeCharacterData* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cd_set_prefix,GdomeCharacterData*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_cd_set_prefix(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_cd_set_prefix((GdomeCharacterData*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cd_localName' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cd_localName,GdomeCharacterData*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cd_localName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cd_localName((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_cd_hasAttributes' (GdomeCharacterData* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cd_hasAttributes,GdomeCharacterData*,GdomeException*,'
 */
inline int cgate_gdome_cd_hasAttributes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_cd_hasAttributes((GdomeCharacterData*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_cd_addEventListener' (GdomeCharacterData* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_cd_addEventListener,GdomeCharacterData*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_cd_addEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_cd_addEventListener((GdomeCharacterData*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_cd_removeEventListener' (GdomeCharacterData* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_cd_removeEventListener,GdomeCharacterData*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_cd_removeEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_cd_removeEventListener((GdomeCharacterData*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'GdomeBoolean' 'gdome_cd_dispatchEvent' (GdomeCharacterData* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cd_dispatchEvent,GdomeCharacterData*,GdomeEvent*,GdomeException*,'
 */
inline int cgate_gdome_cd_dispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_cd_dispatchEvent((GdomeCharacterData*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_cd_subTreeDispatchEvent' (GdomeCharacterData* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_cd_subTreeDispatchEvent,GdomeCharacterData*,GdomeEvent*,GdomeException*,'
 */
inline void cgate_gdome_cd_subTreeDispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_cd_subTreeDispatchEvent((GdomeCharacterData*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_cd_canAppend' (GdomeCharacterData* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cd_canAppend,GdomeCharacterData*,GdomeNode*,GdomeException*,'
 */
inline int cgate_gdome_cd_canAppend(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_cd_canAppend((GdomeCharacterData*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_a_ref' (GdomeAttr* GdomeException*).
 * Configuration line: 'void,gdome_a_ref,GdomeAttr*,GdomeException*,'
 */
inline void cgate_gdome_a_ref(unsigned int arg0, unsigned int arg1) {
	gdome_a_ref((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_a_unref' (GdomeAttr* GdomeException*).
 * Configuration line: 'void,gdome_a_unref,GdomeAttr*,GdomeException*,'
 */
inline void cgate_gdome_a_unref(unsigned int arg0, unsigned int arg1) {
	gdome_a_unref((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'gpointer' 'gdome_a_query_interface' (GdomeAttr* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_a_query_interface,GdomeAttr*,const char*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_query_interface(unsigned int arg0, const char * arg1, unsigned int arg2) {
	return (unsigned int) gdome_a_query_interface((GdomeAttr*)arg0, (const char*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_a_name' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_a_name,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_name(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_a_name((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeElement*' 'gdome_a_ownerElement' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeElement*,gdome_a_ownerElement,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_ownerElement(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_a_ownerElement((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_a_specified' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_a_specified,GdomeAttr*,GdomeException*,'
 */
inline int cgate_gdome_a_specified(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_a_specified((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_a_value' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_a_value,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_value(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_a_value((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_a_set_value' (GdomeAttr* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_a_set_value,GdomeAttr*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_a_set_value(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_a_set_value((GdomeAttr*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_a_nodeName' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_a_nodeName,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_nodeName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_a_nodeName((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_a_nodeValue' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_a_nodeValue,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_nodeValue(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_a_nodeValue((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_a_set_nodeValue' (GdomeAttr* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_a_set_nodeValue,GdomeAttr*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_a_set_nodeValue(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_a_set_nodeValue((GdomeAttr*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'unsigned short' 'gdome_a_nodeType' (GdomeAttr* GdomeException*).
 * Configuration line: 'unsigned short,gdome_a_nodeType,GdomeAttr*,GdomeException*,'
 */
inline unsigned short int cgate_gdome_a_nodeType(unsigned int arg0, unsigned int arg1) {
	return (unsigned short int) gdome_a_nodeType((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_a_parentNode' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_parentNode,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_parentNode(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_a_parentNode((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_a_childNodes' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_a_childNodes,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_childNodes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_a_childNodes((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_a_firstChild' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_firstChild,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_firstChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_a_firstChild((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_a_lastChild' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_lastChild,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_lastChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_a_lastChild((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_a_previousSibling' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_previousSibling,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_previousSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_a_previousSibling((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_a_nextSibling' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_nextSibling,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_nextSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_a_nextSibling((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_a_attributes' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_a_attributes,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_attributes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_a_attributes((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDocument*' 'gdome_a_ownerDocument' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_a_ownerDocument,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_ownerDocument(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_a_ownerDocument((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_a_insertBefore' (GdomeAttr* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_insertBefore,GdomeAttr*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_insertBefore(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_a_insertBefore((GdomeAttr*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_a_replaceChild' (GdomeAttr* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_replaceChild,GdomeAttr*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_replaceChild(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_a_replaceChild((GdomeAttr*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_a_removeChild' (GdomeAttr* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_removeChild,GdomeAttr*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_removeChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_a_removeChild((GdomeAttr*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_a_appendChild' (GdomeAttr* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_appendChild,GdomeAttr*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_appendChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_a_appendChild((GdomeAttr*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_a_hasChildNodes' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_a_hasChildNodes,GdomeAttr*,GdomeException*,'
 */
inline int cgate_gdome_a_hasChildNodes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_a_hasChildNodes((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_a_cloneNode' (GdomeAttr* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_a_cloneNode,GdomeAttr*,GdomeBoolean,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_cloneNode(unsigned int arg0, int arg1, unsigned int arg2) {
	return (unsigned int) gdome_a_cloneNode((GdomeAttr*)arg0, (GdomeBoolean)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_a_normalize' (GdomeAttr* GdomeException*).
 * Configuration line: 'void,gdome_a_normalize,GdomeAttr*,GdomeException*,'
 */
inline void cgate_gdome_a_normalize(unsigned int arg0, unsigned int arg1) {
	gdome_a_normalize((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_a_isSupported' (GdomeAttr* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_a_isSupported,GdomeAttr*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline int cgate_gdome_a_isSupported(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (int) gdome_a_isSupported((GdomeAttr*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_a_namespaceURI' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_a_namespaceURI,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_namespaceURI(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_a_namespaceURI((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_a_prefix' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_a_prefix,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_prefix(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_a_prefix((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_a_set_prefix' (GdomeAttr* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_a_set_prefix,GdomeAttr*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_a_set_prefix(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_a_set_prefix((GdomeAttr*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_a_localName' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_a_localName,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_a_localName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_a_localName((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_a_hasAttributes' (GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_a_hasAttributes,GdomeAttr*,GdomeException*,'
 */
inline int cgate_gdome_a_hasAttributes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_a_hasAttributes((GdomeAttr*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_a_addEventListener' (GdomeAttr* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_a_addEventListener,GdomeAttr*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_a_addEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_a_addEventListener((GdomeAttr*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_a_removeEventListener' (GdomeAttr* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_a_removeEventListener,GdomeAttr*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_a_removeEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_a_removeEventListener((GdomeAttr*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'GdomeBoolean' 'gdome_a_dispatchEvent' (GdomeAttr* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_a_dispatchEvent,GdomeAttr*,GdomeEvent*,GdomeException*,'
 */
inline int cgate_gdome_a_dispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_a_dispatchEvent((GdomeAttr*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_a_subTreeDispatchEvent' (GdomeAttr* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_a_subTreeDispatchEvent,GdomeAttr*,GdomeEvent*,GdomeException*,'
 */
inline void cgate_gdome_a_subTreeDispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_a_subTreeDispatchEvent((GdomeAttr*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_a_canAppend' (GdomeAttr* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_a_canAppend,GdomeAttr*,GdomeNode*,GdomeException*,'
 */
inline int cgate_gdome_a_canAppend(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_a_canAppend((GdomeAttr*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_el_tagName' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_el_tagName,GdomeElement*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_tagName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_el_tagName((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_el_getAttribute' (GdomeElement* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_el_getAttribute,GdomeElement*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_getAttribute(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_el_getAttribute((GdomeElement*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_el_setAttribute' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_el_setAttribute,GdomeElement*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_el_setAttribute(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	gdome_el_setAttribute((GdomeElement*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'void' 'gdome_el_removeAttribute' (GdomeElement* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_el_removeAttribute,GdomeElement*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_el_removeAttribute(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_el_removeAttribute((GdomeElement*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeAttr*' 'gdome_el_getAttributeNode' (GdomeElement* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeAttr*,gdome_el_getAttributeNode,GdomeElement*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_getAttributeNode(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_el_getAttributeNode((GdomeElement*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeAttr*' 'gdome_el_setAttributeNode' (GdomeElement* GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeAttr*,gdome_el_setAttributeNode,GdomeElement*,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_setAttributeNode(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_el_setAttributeNode((GdomeElement*)arg0, (GdomeAttr*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeAttr*' 'gdome_el_removeAttributeNode' (GdomeElement* GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeAttr*,gdome_el_removeAttributeNode,GdomeElement*,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_removeAttributeNode(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_el_removeAttributeNode((GdomeElement*)arg0, (GdomeAttr*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_el_getElementsByTagName' (GdomeElement* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_el_getElementsByTagName,GdomeElement*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_getElementsByTagName(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_el_getElementsByTagName((GdomeElement*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_el_getAttributeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_el_getAttributeNS,GdomeElement*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_getAttributeNS(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_el_getAttributeNS((GdomeElement*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'void' 'gdome_el_setAttributeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_el_setAttributeNS,GdomeElement*,GdomeDOMString*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_el_setAttributeNS(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
	gdome_el_setAttributeNS((GdomeElement*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeDOMString*)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_el_removeAttributeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_el_removeAttributeNS,GdomeElement*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_el_removeAttributeNS(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	gdome_el_removeAttributeNS((GdomeElement*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeAttr*' 'gdome_el_getAttributeNodeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeAttr*,gdome_el_getAttributeNodeNS,GdomeElement*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_getAttributeNodeNS(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_el_getAttributeNodeNS((GdomeElement*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeAttr*' 'gdome_el_setAttributeNodeNS' (GdomeElement* GdomeAttr* GdomeException*).
 * Configuration line: 'GdomeAttr*,gdome_el_setAttributeNodeNS,GdomeElement*,GdomeAttr*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_setAttributeNodeNS(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_el_setAttributeNodeNS((GdomeElement*)arg0, (GdomeAttr*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_el_getElementsByTagNameNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_el_getElementsByTagNameNS,GdomeElement*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_getElementsByTagNameNS(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_el_getElementsByTagNameNS((GdomeElement*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeBoolean' 'gdome_el_hasAttribute' (GdomeElement* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_el_hasAttribute,GdomeElement*,GdomeDOMString*,GdomeException*,'
 */
inline int cgate_gdome_el_hasAttribute(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_el_hasAttribute((GdomeElement*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_el_hasAttributeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_el_hasAttributeNS,GdomeElement*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline int cgate_gdome_el_hasAttributeNS(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (int) gdome_el_hasAttributeNS((GdomeElement*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'void' 'gdome_el_ref' (GdomeElement* GdomeException*).
 * Configuration line: 'void,gdome_el_ref,GdomeElement*,GdomeException*,'
 */
inline void cgate_gdome_el_ref(unsigned int arg0, unsigned int arg1) {
	gdome_el_ref((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_el_unref' (GdomeElement* GdomeException*).
 * Configuration line: 'void,gdome_el_unref,GdomeElement*,GdomeException*,'
 */
inline void cgate_gdome_el_unref(unsigned int arg0, unsigned int arg1) {
	gdome_el_unref((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'gpointer' 'gdome_el_query_interface' (GdomeElement* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_el_query_interface,GdomeElement*,const char*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_query_interface(unsigned int arg0, const char * arg1, unsigned int arg2) {
	return (unsigned int) gdome_el_query_interface((GdomeElement*)arg0, (const char*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_el_nodeName' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_el_nodeName,GdomeElement*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_nodeName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_el_nodeName((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_el_nodeValue' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_el_nodeValue,GdomeElement*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_nodeValue(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_el_nodeValue((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_el_set_nodeValue' (GdomeElement* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_el_set_nodeValue,GdomeElement*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_el_set_nodeValue(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_el_set_nodeValue((GdomeElement*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'unsigned short' 'gdome_el_nodeType' (GdomeElement* GdomeException*).
 * Configuration line: 'unsigned short,gdome_el_nodeType,GdomeElement*,GdomeException*,'
 */
inline unsigned short int cgate_gdome_el_nodeType(unsigned int arg0, unsigned int arg1) {
	return (unsigned short int) gdome_el_nodeType((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_el_parentNode' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_parentNode,GdomeElement*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_parentNode(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_el_parentNode((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_el_childNodes' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_el_childNodes,GdomeElement*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_childNodes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_el_childNodes((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_el_firstChild' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_firstChild,GdomeElement*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_firstChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_el_firstChild((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_el_lastChild' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_lastChild,GdomeElement*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_lastChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_el_lastChild((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_el_previousSibling' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_previousSibling,GdomeElement*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_previousSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_el_previousSibling((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_el_nextSibling' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_nextSibling,GdomeElement*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_nextSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_el_nextSibling((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_el_attributes' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_el_attributes,GdomeElement*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_attributes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_el_attributes((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDocument*' 'gdome_el_ownerDocument' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_el_ownerDocument,GdomeElement*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_ownerDocument(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_el_ownerDocument((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_el_insertBefore' (GdomeElement* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_insertBefore,GdomeElement*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_insertBefore(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_el_insertBefore((GdomeElement*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_el_replaceChild' (GdomeElement* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_replaceChild,GdomeElement*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_replaceChild(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_el_replaceChild((GdomeElement*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_el_removeChild' (GdomeElement* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_removeChild,GdomeElement*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_removeChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_el_removeChild((GdomeElement*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_el_appendChild' (GdomeElement* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_appendChild,GdomeElement*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_appendChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_el_appendChild((GdomeElement*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_el_hasChildNodes' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_el_hasChildNodes,GdomeElement*,GdomeException*,'
 */
inline int cgate_gdome_el_hasChildNodes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_el_hasChildNodes((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_el_cloneNode' (GdomeElement* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_el_cloneNode,GdomeElement*,GdomeBoolean,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_cloneNode(unsigned int arg0, int arg1, unsigned int arg2) {
	return (unsigned int) gdome_el_cloneNode((GdomeElement*)arg0, (GdomeBoolean)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_el_normalize' (GdomeElement* GdomeException*).
 * Configuration line: 'void,gdome_el_normalize,GdomeElement*,GdomeException*,'
 */
inline void cgate_gdome_el_normalize(unsigned int arg0, unsigned int arg1) {
	gdome_el_normalize((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_el_isSupported' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_el_isSupported,GdomeElement*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline int cgate_gdome_el_isSupported(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (int) gdome_el_isSupported((GdomeElement*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_el_namespaceURI' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_el_namespaceURI,GdomeElement*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_namespaceURI(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_el_namespaceURI((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_el_prefix' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_el_prefix,GdomeElement*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_prefix(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_el_prefix((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_el_set_prefix' (GdomeElement* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_el_set_prefix,GdomeElement*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_el_set_prefix(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_el_set_prefix((GdomeElement*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_el_localName' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_el_localName,GdomeElement*,GdomeException*,'
 */
inline unsigned int cgate_gdome_el_localName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_el_localName((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_el_hasAttributes' (GdomeElement* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_el_hasAttributes,GdomeElement*,GdomeException*,'
 */
inline int cgate_gdome_el_hasAttributes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_el_hasAttributes((GdomeElement*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_el_addEventListener' (GdomeElement* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_el_addEventListener,GdomeElement*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_el_addEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_el_addEventListener((GdomeElement*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_el_removeEventListener' (GdomeElement* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_el_removeEventListener,GdomeElement*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_el_removeEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_el_removeEventListener((GdomeElement*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'GdomeBoolean' 'gdome_el_dispatchEvent' (GdomeElement* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_el_dispatchEvent,GdomeElement*,GdomeEvent*,GdomeException*,'
 */
inline int cgate_gdome_el_dispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_el_dispatchEvent((GdomeElement*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_el_subTreeDispatchEvent' (GdomeElement* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_el_subTreeDispatchEvent,GdomeElement*,GdomeEvent*,GdomeException*,'
 */
inline void cgate_gdome_el_subTreeDispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_el_subTreeDispatchEvent((GdomeElement*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_el_canAppend' (GdomeElement* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_el_canAppend,GdomeElement*,GdomeNode*,GdomeException*,'
 */
inline int cgate_gdome_el_canAppend(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_el_canAppend((GdomeElement*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeText*' 'gdome_t_splitText' (GdomeText* gulong GdomeException*).
 * Configuration line: 'GdomeText*,gdome_t_splitText,GdomeText*,gulong,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_splitText(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_t_splitText((GdomeText*)arg0, (gulong)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_t_data' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_t_data,GdomeText*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_data(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_t_data((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_t_set_data' (GdomeText* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_t_set_data,GdomeText*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_t_set_data(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_t_set_data((GdomeText*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'gulong' 'gdome_t_length' (GdomeText* GdomeException*).
 * Configuration line: 'gulong,gdome_t_length,GdomeText*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_length(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_t_length((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_t_substringData' (GdomeText* gulong gulong GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_t_substringData,GdomeText*,gulong,gulong,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_substringData(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_t_substringData((GdomeText*)arg0, (gulong)arg1, (gulong)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'void' 'gdome_t_appendData' (GdomeText* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_t_appendData,GdomeText*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_t_appendData(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_t_appendData((GdomeText*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_t_insertData' (GdomeText* gulong GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_t_insertData,GdomeText*,gulong,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_t_insertData(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	gdome_t_insertData((GdomeText*)arg0, (gulong)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'void' 'gdome_t_deleteData' (GdomeText* gulong gulong GdomeException*).
 * Configuration line: 'void,gdome_t_deleteData,GdomeText*,gulong,gulong,GdomeException*,'
 */
inline void cgate_gdome_t_deleteData(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	gdome_t_deleteData((GdomeText*)arg0, (gulong)arg1, (gulong)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'void' 'gdome_t_replaceData' (GdomeText* gulong gulong GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_t_replaceData,GdomeText*,gulong,gulong,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_t_replaceData(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
	gdome_t_replaceData((GdomeText*)arg0, (gulong)arg1, (gulong)arg2, (GdomeDOMString*)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_t_ref' (GdomeText* GdomeException*).
 * Configuration line: 'void,gdome_t_ref,GdomeText*,GdomeException*,'
 */
inline void cgate_gdome_t_ref(unsigned int arg0, unsigned int arg1) {
	gdome_t_ref((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_t_unref' (GdomeText* GdomeException*).
 * Configuration line: 'void,gdome_t_unref,GdomeText*,GdomeException*,'
 */
inline void cgate_gdome_t_unref(unsigned int arg0, unsigned int arg1) {
	gdome_t_unref((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'gpointer' 'gdome_t_query_interface' (GdomeText* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_t_query_interface,GdomeText*,const char*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_query_interface(unsigned int arg0, const char * arg1, unsigned int arg2) {
	return (unsigned int) gdome_t_query_interface((GdomeText*)arg0, (const char*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_t_nodeName' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_t_nodeName,GdomeText*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_nodeName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_t_nodeName((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_t_nodeValue' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_t_nodeValue,GdomeText*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_nodeValue(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_t_nodeValue((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_t_set_nodeValue' (GdomeText* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_t_set_nodeValue,GdomeText*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_t_set_nodeValue(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_t_set_nodeValue((GdomeText*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'unsigned short' 'gdome_t_nodeType' (GdomeText* GdomeException*).
 * Configuration line: 'unsigned short,gdome_t_nodeType,GdomeText*,GdomeException*,'
 */
inline unsigned short int cgate_gdome_t_nodeType(unsigned int arg0, unsigned int arg1) {
	return (unsigned short int) gdome_t_nodeType((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_t_parentNode' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_parentNode,GdomeText*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_parentNode(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_t_parentNode((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_t_childNodes' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_t_childNodes,GdomeText*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_childNodes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_t_childNodes((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_t_firstChild' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_firstChild,GdomeText*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_firstChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_t_firstChild((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_t_lastChild' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_lastChild,GdomeText*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_lastChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_t_lastChild((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_t_previousSibling' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_previousSibling,GdomeText*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_previousSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_t_previousSibling((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_t_nextSibling' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_nextSibling,GdomeText*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_nextSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_t_nextSibling((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_t_attributes' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_t_attributes,GdomeText*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_attributes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_t_attributes((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDocument*' 'gdome_t_ownerDocument' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_t_ownerDocument,GdomeText*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_ownerDocument(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_t_ownerDocument((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_t_insertBefore' (GdomeText* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_insertBefore,GdomeText*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_insertBefore(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_t_insertBefore((GdomeText*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_t_replaceChild' (GdomeText* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_replaceChild,GdomeText*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_replaceChild(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_t_replaceChild((GdomeText*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_t_removeChild' (GdomeText* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_removeChild,GdomeText*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_removeChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_t_removeChild((GdomeText*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_t_appendChild' (GdomeText* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_appendChild,GdomeText*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_appendChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_t_appendChild((GdomeText*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_t_hasChildNodes' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_t_hasChildNodes,GdomeText*,GdomeException*,'
 */
inline int cgate_gdome_t_hasChildNodes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_t_hasChildNodes((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_t_cloneNode' (GdomeText* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_t_cloneNode,GdomeText*,GdomeBoolean,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_cloneNode(unsigned int arg0, int arg1, unsigned int arg2) {
	return (unsigned int) gdome_t_cloneNode((GdomeText*)arg0, (GdomeBoolean)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_t_normalize' (GdomeText* GdomeException*).
 * Configuration line: 'void,gdome_t_normalize,GdomeText*,GdomeException*,'
 */
inline void cgate_gdome_t_normalize(unsigned int arg0, unsigned int arg1) {
	gdome_t_normalize((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_t_isSupported' (GdomeText* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_t_isSupported,GdomeText*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline int cgate_gdome_t_isSupported(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (int) gdome_t_isSupported((GdomeText*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_t_namespaceURI' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_t_namespaceURI,GdomeText*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_namespaceURI(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_t_namespaceURI((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_t_prefix' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_t_prefix,GdomeText*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_prefix(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_t_prefix((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_t_set_prefix' (GdomeText* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_t_set_prefix,GdomeText*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_t_set_prefix(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_t_set_prefix((GdomeText*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_t_localName' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_t_localName,GdomeText*,GdomeException*,'
 */
inline unsigned int cgate_gdome_t_localName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_t_localName((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_t_hasAttributes' (GdomeText* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_t_hasAttributes,GdomeText*,GdomeException*,'
 */
inline int cgate_gdome_t_hasAttributes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_t_hasAttributes((GdomeText*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_t_addEventListener' (GdomeText* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_t_addEventListener,GdomeText*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_t_addEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_t_addEventListener((GdomeText*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_t_removeEventListener' (GdomeText* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_t_removeEventListener,GdomeText*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_t_removeEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_t_removeEventListener((GdomeText*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'GdomeBoolean' 'gdome_t_dispatchEvent' (GdomeText* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_t_dispatchEvent,GdomeText*,GdomeEvent*,GdomeException*,'
 */
inline int cgate_gdome_t_dispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_t_dispatchEvent((GdomeText*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_t_subTreeDispatchEvent' (GdomeText* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_t_subTreeDispatchEvent,GdomeText*,GdomeEvent*,GdomeException*,'
 */
inline void cgate_gdome_t_subTreeDispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_t_subTreeDispatchEvent((GdomeText*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_t_canAppend' (GdomeText* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_t_canAppend,GdomeText*,GdomeNode*,GdomeException*,'
 */
inline int cgate_gdome_t_canAppend(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_t_canAppend((GdomeText*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_c_data' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_c_data,GdomeComment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_data(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_c_data((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_c_set_data' (GdomeComment* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_c_set_data,GdomeComment*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_c_set_data(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_c_set_data((GdomeComment*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'gulong' 'gdome_c_length' (GdomeComment* GdomeException*).
 * Configuration line: 'gulong,gdome_c_length,GdomeComment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_length(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_c_length((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_c_substringData' (GdomeComment* gulong gulong GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_c_substringData,GdomeComment*,gulong,gulong,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_substringData(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_c_substringData((GdomeComment*)arg0, (gulong)arg1, (gulong)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'void' 'gdome_c_appendData' (GdomeComment* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_c_appendData,GdomeComment*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_c_appendData(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_c_appendData((GdomeComment*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_c_insertData' (GdomeComment* gulong GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_c_insertData,GdomeComment*,gulong,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_c_insertData(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	gdome_c_insertData((GdomeComment*)arg0, (gulong)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'void' 'gdome_c_deleteData' (GdomeComment* gulong gulong GdomeException*).
 * Configuration line: 'void,gdome_c_deleteData,GdomeComment*,gulong,gulong,GdomeException*,'
 */
inline void cgate_gdome_c_deleteData(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	gdome_c_deleteData((GdomeComment*)arg0, (gulong)arg1, (gulong)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'void' 'gdome_c_replaceData' (GdomeComment* gulong gulong GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_c_replaceData,GdomeComment*,gulong,gulong,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_c_replaceData(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
	gdome_c_replaceData((GdomeComment*)arg0, (gulong)arg1, (gulong)arg2, (GdomeDOMString*)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_c_ref' (GdomeComment* GdomeException*).
 * Configuration line: 'void,gdome_c_ref,GdomeComment*,GdomeException*,'
 */
inline void cgate_gdome_c_ref(unsigned int arg0, unsigned int arg1) {
	gdome_c_ref((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_c_unref' (GdomeComment* GdomeException*).
 * Configuration line: 'void,gdome_c_unref,GdomeComment*,GdomeException*,'
 */
inline void cgate_gdome_c_unref(unsigned int arg0, unsigned int arg1) {
	gdome_c_unref((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'gpointer' 'gdome_c_query_interface' (GdomeComment* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_c_query_interface,GdomeComment*,const char*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_query_interface(unsigned int arg0, const char * arg1, unsigned int arg2) {
	return (unsigned int) gdome_c_query_interface((GdomeComment*)arg0, (const char*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_c_nodeName' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_c_nodeName,GdomeComment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_nodeName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_c_nodeName((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_c_nodeValue' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_c_nodeValue,GdomeComment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_nodeValue(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_c_nodeValue((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_c_set_nodeValue' (GdomeComment* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_c_set_nodeValue,GdomeComment*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_c_set_nodeValue(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_c_set_nodeValue((GdomeComment*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'unsigned short' 'gdome_c_nodeType' (GdomeComment* GdomeException*).
 * Configuration line: 'unsigned short,gdome_c_nodeType,GdomeComment*,GdomeException*,'
 */
inline unsigned short int cgate_gdome_c_nodeType(unsigned int arg0, unsigned int arg1) {
	return (unsigned short int) gdome_c_nodeType((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_c_parentNode' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_parentNode,GdomeComment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_parentNode(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_c_parentNode((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_c_childNodes' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_c_childNodes,GdomeComment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_childNodes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_c_childNodes((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_c_firstChild' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_firstChild,GdomeComment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_firstChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_c_firstChild((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_c_lastChild' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_lastChild,GdomeComment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_lastChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_c_lastChild((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_c_previousSibling' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_previousSibling,GdomeComment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_previousSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_c_previousSibling((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_c_nextSibling' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_nextSibling,GdomeComment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_nextSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_c_nextSibling((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_c_attributes' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_c_attributes,GdomeComment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_attributes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_c_attributes((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDocument*' 'gdome_c_ownerDocument' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_c_ownerDocument,GdomeComment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_ownerDocument(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_c_ownerDocument((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_c_insertBefore' (GdomeComment* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_insertBefore,GdomeComment*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_insertBefore(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_c_insertBefore((GdomeComment*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_c_replaceChild' (GdomeComment* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_replaceChild,GdomeComment*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_replaceChild(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_c_replaceChild((GdomeComment*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_c_removeChild' (GdomeComment* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_removeChild,GdomeComment*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_removeChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_c_removeChild((GdomeComment*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_c_appendChild' (GdomeComment* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_appendChild,GdomeComment*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_appendChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_c_appendChild((GdomeComment*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_c_hasChildNodes' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_c_hasChildNodes,GdomeComment*,GdomeException*,'
 */
inline int cgate_gdome_c_hasChildNodes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_c_hasChildNodes((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_c_cloneNode' (GdomeComment* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_c_cloneNode,GdomeComment*,GdomeBoolean,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_cloneNode(unsigned int arg0, int arg1, unsigned int arg2) {
	return (unsigned int) gdome_c_cloneNode((GdomeComment*)arg0, (GdomeBoolean)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_c_normalize' (GdomeComment* GdomeException*).
 * Configuration line: 'void,gdome_c_normalize,GdomeComment*,GdomeException*,'
 */
inline void cgate_gdome_c_normalize(unsigned int arg0, unsigned int arg1) {
	gdome_c_normalize((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_c_isSupported' (GdomeComment* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_c_isSupported,GdomeComment*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline int cgate_gdome_c_isSupported(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (int) gdome_c_isSupported((GdomeComment*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_c_namespaceURI' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_c_namespaceURI,GdomeComment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_namespaceURI(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_c_namespaceURI((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_c_prefix' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_c_prefix,GdomeComment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_prefix(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_c_prefix((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_c_set_prefix' (GdomeComment* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_c_set_prefix,GdomeComment*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_c_set_prefix(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_c_set_prefix((GdomeComment*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_c_localName' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_c_localName,GdomeComment*,GdomeException*,'
 */
inline unsigned int cgate_gdome_c_localName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_c_localName((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_c_hasAttributes' (GdomeComment* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_c_hasAttributes,GdomeComment*,GdomeException*,'
 */
inline int cgate_gdome_c_hasAttributes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_c_hasAttributes((GdomeComment*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_c_addEventListener' (GdomeComment* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_c_addEventListener,GdomeComment*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_c_addEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_c_addEventListener((GdomeComment*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_c_removeEventListener' (GdomeComment* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_c_removeEventListener,GdomeComment*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_c_removeEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_c_removeEventListener((GdomeComment*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'GdomeBoolean' 'gdome_c_dispatchEvent' (GdomeComment* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_c_dispatchEvent,GdomeComment*,GdomeEvent*,GdomeException*,'
 */
inline int cgate_gdome_c_dispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_c_dispatchEvent((GdomeComment*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_c_subTreeDispatchEvent' (GdomeComment* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_c_subTreeDispatchEvent,GdomeComment*,GdomeEvent*,GdomeException*,'
 */
inline void cgate_gdome_c_subTreeDispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_c_subTreeDispatchEvent((GdomeComment*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_c_canAppend' (GdomeComment* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_c_canAppend,GdomeComment*,GdomeNode*,GdomeException*,'
 */
inline int cgate_gdome_c_canAppend(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_c_canAppend((GdomeComment*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeText*' 'gdome_cds_splitText' (GdomeCDATASection* gulong GdomeException*).
 * Configuration line: 'GdomeText*,gdome_cds_splitText,GdomeCDATASection*,gulong,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_splitText(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_cds_splitText((GdomeCDATASection*)arg0, (gulong)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cds_data' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cds_data,GdomeCDATASection*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_data(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cds_data((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_cds_set_data' (GdomeCDATASection* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cds_set_data,GdomeCDATASection*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_cds_set_data(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_cds_set_data((GdomeCDATASection*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'gulong' 'gdome_cds_length' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'gulong,gdome_cds_length,GdomeCDATASection*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_length(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cds_length((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cds_substringData' (GdomeCDATASection* gulong gulong GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cds_substringData,GdomeCDATASection*,gulong,gulong,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_substringData(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_cds_substringData((GdomeCDATASection*)arg0, (gulong)arg1, (gulong)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'void' 'gdome_cds_appendData' (GdomeCDATASection* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cds_appendData,GdomeCDATASection*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_cds_appendData(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_cds_appendData((GdomeCDATASection*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_cds_insertData' (GdomeCDATASection* gulong GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cds_insertData,GdomeCDATASection*,gulong,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_cds_insertData(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	gdome_cds_insertData((GdomeCDATASection*)arg0, (gulong)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'void' 'gdome_cds_deleteData' (GdomeCDATASection* gulong gulong GdomeException*).
 * Configuration line: 'void,gdome_cds_deleteData,GdomeCDATASection*,gulong,gulong,GdomeException*,'
 */
inline void cgate_gdome_cds_deleteData(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	gdome_cds_deleteData((GdomeCDATASection*)arg0, (gulong)arg1, (gulong)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'void' 'gdome_cds_replaceData' (GdomeCDATASection* gulong gulong GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cds_replaceData,GdomeCDATASection*,gulong,gulong,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_cds_replaceData(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
	gdome_cds_replaceData((GdomeCDATASection*)arg0, (gulong)arg1, (gulong)arg2, (GdomeDOMString*)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_cds_ref' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'void,gdome_cds_ref,GdomeCDATASection*,GdomeException*,'
 */
inline void cgate_gdome_cds_ref(unsigned int arg0, unsigned int arg1) {
	gdome_cds_ref((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_cds_unref' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'void,gdome_cds_unref,GdomeCDATASection*,GdomeException*,'
 */
inline void cgate_gdome_cds_unref(unsigned int arg0, unsigned int arg1) {
	gdome_cds_unref((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'gpointer' 'gdome_cds_query_interface' (GdomeCDATASection* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_cds_query_interface,GdomeCDATASection*,const char*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_query_interface(unsigned int arg0, const char * arg1, unsigned int arg2) {
	return (unsigned int) gdome_cds_query_interface((GdomeCDATASection*)arg0, (const char*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cds_nodeName' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cds_nodeName,GdomeCDATASection*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_nodeName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cds_nodeName((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cds_nodeValue' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cds_nodeValue,GdomeCDATASection*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_nodeValue(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cds_nodeValue((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_cds_set_nodeValue' (GdomeCDATASection* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cds_set_nodeValue,GdomeCDATASection*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_cds_set_nodeValue(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_cds_set_nodeValue((GdomeCDATASection*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'unsigned short' 'gdome_cds_nodeType' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'unsigned short,gdome_cds_nodeType,GdomeCDATASection*,GdomeException*,'
 */
inline unsigned short int cgate_gdome_cds_nodeType(unsigned int arg0, unsigned int arg1) {
	return (unsigned short int) gdome_cds_nodeType((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_parentNode' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_parentNode,GdomeCDATASection*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_parentNode(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cds_parentNode((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_cds_childNodes' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_cds_childNodes,GdomeCDATASection*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_childNodes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cds_childNodes((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_firstChild' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_firstChild,GdomeCDATASection*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_firstChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cds_firstChild((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_lastChild' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_lastChild,GdomeCDATASection*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_lastChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cds_lastChild((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_previousSibling' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_previousSibling,GdomeCDATASection*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_previousSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cds_previousSibling((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_nextSibling' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_nextSibling,GdomeCDATASection*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_nextSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cds_nextSibling((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_cds_attributes' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_cds_attributes,GdomeCDATASection*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_attributes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cds_attributes((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDocument*' 'gdome_cds_ownerDocument' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_cds_ownerDocument,GdomeCDATASection*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_ownerDocument(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cds_ownerDocument((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_insertBefore' (GdomeCDATASection* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_insertBefore,GdomeCDATASection*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_insertBefore(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_cds_insertBefore((GdomeCDATASection*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_replaceChild' (GdomeCDATASection* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_replaceChild,GdomeCDATASection*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_replaceChild(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_cds_replaceChild((GdomeCDATASection*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_removeChild' (GdomeCDATASection* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_removeChild,GdomeCDATASection*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_removeChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_cds_removeChild((GdomeCDATASection*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_appendChild' (GdomeCDATASection* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_appendChild,GdomeCDATASection*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_appendChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_cds_appendChild((GdomeCDATASection*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_cds_hasChildNodes' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cds_hasChildNodes,GdomeCDATASection*,GdomeException*,'
 */
inline int cgate_gdome_cds_hasChildNodes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_cds_hasChildNodes((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_cds_cloneNode' (GdomeCDATASection* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_cds_cloneNode,GdomeCDATASection*,GdomeBoolean,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_cloneNode(unsigned int arg0, int arg1, unsigned int arg2) {
	return (unsigned int) gdome_cds_cloneNode((GdomeCDATASection*)arg0, (GdomeBoolean)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_cds_normalize' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'void,gdome_cds_normalize,GdomeCDATASection*,GdomeException*,'
 */
inline void cgate_gdome_cds_normalize(unsigned int arg0, unsigned int arg1) {
	gdome_cds_normalize((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_cds_isSupported' (GdomeCDATASection* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cds_isSupported,GdomeCDATASection*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline int cgate_gdome_cds_isSupported(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (int) gdome_cds_isSupported((GdomeCDATASection*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cds_namespaceURI' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cds_namespaceURI,GdomeCDATASection*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_namespaceURI(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cds_namespaceURI((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cds_prefix' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cds_prefix,GdomeCDATASection*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_prefix(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cds_prefix((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_cds_set_prefix' (GdomeCDATASection* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_cds_set_prefix,GdomeCDATASection*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_cds_set_prefix(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_cds_set_prefix((GdomeCDATASection*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_cds_localName' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_cds_localName,GdomeCDATASection*,GdomeException*,'
 */
inline unsigned int cgate_gdome_cds_localName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_cds_localName((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_cds_hasAttributes' (GdomeCDATASection* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cds_hasAttributes,GdomeCDATASection*,GdomeException*,'
 */
inline int cgate_gdome_cds_hasAttributes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_cds_hasAttributes((GdomeCDATASection*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_cds_addEventListener' (GdomeCDATASection* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_cds_addEventListener,GdomeCDATASection*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_cds_addEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_cds_addEventListener((GdomeCDATASection*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_cds_removeEventListener' (GdomeCDATASection* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_cds_removeEventListener,GdomeCDATASection*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_cds_removeEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_cds_removeEventListener((GdomeCDATASection*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'GdomeBoolean' 'gdome_cds_dispatchEvent' (GdomeCDATASection* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cds_dispatchEvent,GdomeCDATASection*,GdomeEvent*,GdomeException*,'
 */
inline int cgate_gdome_cds_dispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_cds_dispatchEvent((GdomeCDATASection*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_cds_subTreeDispatchEvent' (GdomeCDATASection* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_cds_subTreeDispatchEvent,GdomeCDATASection*,GdomeEvent*,GdomeException*,'
 */
inline void cgate_gdome_cds_subTreeDispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_cds_subTreeDispatchEvent((GdomeCDATASection*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_cds_canAppend' (GdomeCDATASection* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_cds_canAppend,GdomeCDATASection*,GdomeNode*,GdomeException*,'
 */
inline int cgate_gdome_cds_canAppend(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_cds_canAppend((GdomeCDATASection*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_not_publicId' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_not_publicId,GdomeNotation*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_publicId(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_not_publicId((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_not_systemId' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_not_systemId,GdomeNotation*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_systemId(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_not_systemId((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_not_ref' (GdomeNotation* GdomeException*).
 * Configuration line: 'void,gdome_not_ref,GdomeNotation*,GdomeException*,'
 */
inline void cgate_gdome_not_ref(unsigned int arg0, unsigned int arg1) {
	gdome_not_ref((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_not_unref' (GdomeNotation* GdomeException*).
 * Configuration line: 'void,gdome_not_unref,GdomeNotation*,GdomeException*,'
 */
inline void cgate_gdome_not_unref(unsigned int arg0, unsigned int arg1) {
	gdome_not_unref((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'gpointer' 'gdome_not_query_interface' (GdomeNotation* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_not_query_interface,GdomeNotation*,const char*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_query_interface(unsigned int arg0, const char * arg1, unsigned int arg2) {
	return (unsigned int) gdome_not_query_interface((GdomeNotation*)arg0, (const char*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_not_nodeName' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_not_nodeName,GdomeNotation*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_nodeName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_not_nodeName((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_not_nodeValue' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_not_nodeValue,GdomeNotation*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_nodeValue(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_not_nodeValue((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_not_set_nodeValue' (GdomeNotation* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_not_set_nodeValue,GdomeNotation*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_not_set_nodeValue(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_not_set_nodeValue((GdomeNotation*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'unsigned short' 'gdome_not_nodeType' (GdomeNotation* GdomeException*).
 * Configuration line: 'unsigned short,gdome_not_nodeType,GdomeNotation*,GdomeException*,'
 */
inline unsigned short int cgate_gdome_not_nodeType(unsigned int arg0, unsigned int arg1) {
	return (unsigned short int) gdome_not_nodeType((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_not_parentNode' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_parentNode,GdomeNotation*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_parentNode(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_not_parentNode((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_not_childNodes' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_not_childNodes,GdomeNotation*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_childNodes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_not_childNodes((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_not_firstChild' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_firstChild,GdomeNotation*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_firstChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_not_firstChild((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_not_lastChild' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_lastChild,GdomeNotation*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_lastChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_not_lastChild((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_not_previousSibling' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_previousSibling,GdomeNotation*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_previousSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_not_previousSibling((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_not_nextSibling' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_nextSibling,GdomeNotation*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_nextSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_not_nextSibling((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_not_attributes' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_not_attributes,GdomeNotation*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_attributes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_not_attributes((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDocument*' 'gdome_not_ownerDocument' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_not_ownerDocument,GdomeNotation*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_ownerDocument(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_not_ownerDocument((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_not_insertBefore' (GdomeNotation* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_insertBefore,GdomeNotation*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_insertBefore(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_not_insertBefore((GdomeNotation*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_not_replaceChild' (GdomeNotation* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_replaceChild,GdomeNotation*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_replaceChild(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_not_replaceChild((GdomeNotation*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_not_removeChild' (GdomeNotation* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_removeChild,GdomeNotation*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_removeChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_not_removeChild((GdomeNotation*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_not_appendChild' (GdomeNotation* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_appendChild,GdomeNotation*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_appendChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_not_appendChild((GdomeNotation*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_not_hasChildNodes' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_not_hasChildNodes,GdomeNotation*,GdomeException*,'
 */
inline int cgate_gdome_not_hasChildNodes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_not_hasChildNodes((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_not_cloneNode' (GdomeNotation* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_not_cloneNode,GdomeNotation*,GdomeBoolean,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_cloneNode(unsigned int arg0, int arg1, unsigned int arg2) {
	return (unsigned int) gdome_not_cloneNode((GdomeNotation*)arg0, (GdomeBoolean)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_not_normalize' (GdomeNotation* GdomeException*).
 * Configuration line: 'void,gdome_not_normalize,GdomeNotation*,GdomeException*,'
 */
inline void cgate_gdome_not_normalize(unsigned int arg0, unsigned int arg1) {
	gdome_not_normalize((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_not_isSupported' (GdomeNotation* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_not_isSupported,GdomeNotation*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline int cgate_gdome_not_isSupported(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (int) gdome_not_isSupported((GdomeNotation*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_not_namespaceURI' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_not_namespaceURI,GdomeNotation*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_namespaceURI(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_not_namespaceURI((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_not_prefix' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_not_prefix,GdomeNotation*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_prefix(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_not_prefix((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_not_set_prefix' (GdomeNotation* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_not_set_prefix,GdomeNotation*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_not_set_prefix(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_not_set_prefix((GdomeNotation*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_not_localName' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_not_localName,GdomeNotation*,GdomeException*,'
 */
inline unsigned int cgate_gdome_not_localName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_not_localName((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_not_hasAttributes' (GdomeNotation* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_not_hasAttributes,GdomeNotation*,GdomeException*,'
 */
inline int cgate_gdome_not_hasAttributes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_not_hasAttributes((GdomeNotation*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_not_addEventListener' (GdomeNotation* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_not_addEventListener,GdomeNotation*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_not_addEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_not_addEventListener((GdomeNotation*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_not_removeEventListener' (GdomeNotation* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_not_removeEventListener,GdomeNotation*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_not_removeEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_not_removeEventListener((GdomeNotation*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'GdomeBoolean' 'gdome_not_dispatchEvent' (GdomeNotation* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_not_dispatchEvent,GdomeNotation*,GdomeEvent*,GdomeException*,'
 */
inline int cgate_gdome_not_dispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_not_dispatchEvent((GdomeNotation*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_not_subTreeDispatchEvent' (GdomeNotation* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_not_subTreeDispatchEvent,GdomeNotation*,GdomeEvent*,GdomeException*,'
 */
inline void cgate_gdome_not_subTreeDispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_not_subTreeDispatchEvent((GdomeNotation*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_not_canAppend' (GdomeNotation* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_not_canAppend,GdomeNotation*,GdomeNode*,GdomeException*,'
 */
inline int cgate_gdome_not_canAppend(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_not_canAppend((GdomeNotation*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_ent_publicId' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_ent_publicId,GdomeEntity*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_publicId(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_ent_publicId((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_ent_systemId' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_ent_systemId,GdomeEntity*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_systemId(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_ent_systemId((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_ent_notationName' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_ent_notationName,GdomeEntity*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_notationName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_ent_notationName((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_ent_ref' (GdomeEntity* GdomeException*).
 * Configuration line: 'void,gdome_ent_ref,GdomeEntity*,GdomeException*,'
 */
inline void cgate_gdome_ent_ref(unsigned int arg0, unsigned int arg1) {
	gdome_ent_ref((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_ent_unref' (GdomeEntity* GdomeException*).
 * Configuration line: 'void,gdome_ent_unref,GdomeEntity*,GdomeException*,'
 */
inline void cgate_gdome_ent_unref(unsigned int arg0, unsigned int arg1) {
	gdome_ent_unref((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'gpointer' 'gdome_ent_query_interface' (GdomeEntity* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_ent_query_interface,GdomeEntity*,const char*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_query_interface(unsigned int arg0, const char * arg1, unsigned int arg2) {
	return (unsigned int) gdome_ent_query_interface((GdomeEntity*)arg0, (const char*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_ent_nodeName' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_ent_nodeName,GdomeEntity*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_nodeName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_ent_nodeName((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_ent_nodeValue' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_ent_nodeValue,GdomeEntity*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_nodeValue(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_ent_nodeValue((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_ent_set_nodeValue' (GdomeEntity* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_ent_set_nodeValue,GdomeEntity*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_ent_set_nodeValue(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_ent_set_nodeValue((GdomeEntity*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'unsigned short' 'gdome_ent_nodeType' (GdomeEntity* GdomeException*).
 * Configuration line: 'unsigned short,gdome_ent_nodeType,GdomeEntity*,GdomeException*,'
 */
inline unsigned short int cgate_gdome_ent_nodeType(unsigned int arg0, unsigned int arg1) {
	return (unsigned short int) gdome_ent_nodeType((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_parentNode' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_parentNode,GdomeEntity*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_parentNode(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_ent_parentNode((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_ent_childNodes' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_ent_childNodes,GdomeEntity*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_childNodes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_ent_childNodes((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_firstChild' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_firstChild,GdomeEntity*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_firstChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_ent_firstChild((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_lastChild' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_lastChild,GdomeEntity*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_lastChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_ent_lastChild((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_previousSibling' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_previousSibling,GdomeEntity*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_previousSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_ent_previousSibling((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_nextSibling' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_nextSibling,GdomeEntity*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_nextSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_ent_nextSibling((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_ent_attributes' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_ent_attributes,GdomeEntity*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_attributes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_ent_attributes((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDocument*' 'gdome_ent_ownerDocument' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_ent_ownerDocument,GdomeEntity*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_ownerDocument(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_ent_ownerDocument((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_insertBefore' (GdomeEntity* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_insertBefore,GdomeEntity*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_insertBefore(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_ent_insertBefore((GdomeEntity*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_replaceChild' (GdomeEntity* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_replaceChild,GdomeEntity*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_replaceChild(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_ent_replaceChild((GdomeEntity*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_removeChild' (GdomeEntity* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_removeChild,GdomeEntity*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_removeChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_ent_removeChild((GdomeEntity*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_appendChild' (GdomeEntity* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_appendChild,GdomeEntity*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_appendChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_ent_appendChild((GdomeEntity*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_ent_hasChildNodes' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_ent_hasChildNodes,GdomeEntity*,GdomeException*,'
 */
inline int cgate_gdome_ent_hasChildNodes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_ent_hasChildNodes((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_ent_cloneNode' (GdomeEntity* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_ent_cloneNode,GdomeEntity*,GdomeBoolean,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_cloneNode(unsigned int arg0, int arg1, unsigned int arg2) {
	return (unsigned int) gdome_ent_cloneNode((GdomeEntity*)arg0, (GdomeBoolean)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_ent_normalize' (GdomeEntity* GdomeException*).
 * Configuration line: 'void,gdome_ent_normalize,GdomeEntity*,GdomeException*,'
 */
inline void cgate_gdome_ent_normalize(unsigned int arg0, unsigned int arg1) {
	gdome_ent_normalize((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_ent_isSupported' (GdomeEntity* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_ent_isSupported,GdomeEntity*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline int cgate_gdome_ent_isSupported(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (int) gdome_ent_isSupported((GdomeEntity*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_ent_namespaceURI' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_ent_namespaceURI,GdomeEntity*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_namespaceURI(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_ent_namespaceURI((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_ent_prefix' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_ent_prefix,GdomeEntity*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_prefix(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_ent_prefix((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_ent_set_prefix' (GdomeEntity* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_ent_set_prefix,GdomeEntity*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_ent_set_prefix(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_ent_set_prefix((GdomeEntity*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_ent_localName' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_ent_localName,GdomeEntity*,GdomeException*,'
 */
inline unsigned int cgate_gdome_ent_localName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_ent_localName((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_ent_hasAttributes' (GdomeEntity* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_ent_hasAttributes,GdomeEntity*,GdomeException*,'
 */
inline int cgate_gdome_ent_hasAttributes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_ent_hasAttributes((GdomeEntity*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_ent_addEventListener' (GdomeEntity* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_ent_addEventListener,GdomeEntity*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_ent_addEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_ent_addEventListener((GdomeEntity*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_ent_removeEventListener' (GdomeEntity* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_ent_removeEventListener,GdomeEntity*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_ent_removeEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_ent_removeEventListener((GdomeEntity*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'GdomeBoolean' 'gdome_ent_dispatchEvent' (GdomeEntity* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_ent_dispatchEvent,GdomeEntity*,GdomeEvent*,GdomeException*,'
 */
inline int cgate_gdome_ent_dispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_ent_dispatchEvent((GdomeEntity*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_ent_subTreeDispatchEvent' (GdomeEntity* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_ent_subTreeDispatchEvent,GdomeEntity*,GdomeEvent*,GdomeException*,'
 */
inline void cgate_gdome_ent_subTreeDispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_ent_subTreeDispatchEvent((GdomeEntity*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_ent_canAppend' (GdomeEntity* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_ent_canAppend,GdomeEntity*,GdomeNode*,GdomeException*,'
 */
inline int cgate_gdome_ent_canAppend(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_ent_canAppend((GdomeEntity*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_er_ref' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'void,gdome_er_ref,GdomeEntityReference*,GdomeException*,'
 */
inline void cgate_gdome_er_ref(unsigned int arg0, unsigned int arg1) {
	gdome_er_ref((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_er_unref' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'void,gdome_er_unref,GdomeEntityReference*,GdomeException*,'
 */
inline void cgate_gdome_er_unref(unsigned int arg0, unsigned int arg1) {
	gdome_er_unref((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'gpointer' 'gdome_er_query_interface' (GdomeEntityReference* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_er_query_interface,GdomeEntityReference*,const char*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_query_interface(unsigned int arg0, const char * arg1, unsigned int arg2) {
	return (unsigned int) gdome_er_query_interface((GdomeEntityReference*)arg0, (const char*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_er_nodeName' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_er_nodeName,GdomeEntityReference*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_nodeName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_er_nodeName((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_er_nodeValue' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_er_nodeValue,GdomeEntityReference*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_nodeValue(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_er_nodeValue((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_er_set_nodeValue' (GdomeEntityReference* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_er_set_nodeValue,GdomeEntityReference*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_er_set_nodeValue(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_er_set_nodeValue((GdomeEntityReference*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'unsigned short' 'gdome_er_nodeType' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'unsigned short,gdome_er_nodeType,GdomeEntityReference*,GdomeException*,'
 */
inline unsigned short int cgate_gdome_er_nodeType(unsigned int arg0, unsigned int arg1) {
	return (unsigned short int) gdome_er_nodeType((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_er_parentNode' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_parentNode,GdomeEntityReference*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_parentNode(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_er_parentNode((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_er_childNodes' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_er_childNodes,GdomeEntityReference*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_childNodes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_er_childNodes((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_er_firstChild' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_firstChild,GdomeEntityReference*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_firstChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_er_firstChild((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_er_lastChild' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_lastChild,GdomeEntityReference*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_lastChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_er_lastChild((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_er_previousSibling' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_previousSibling,GdomeEntityReference*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_previousSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_er_previousSibling((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_er_nextSibling' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_nextSibling,GdomeEntityReference*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_nextSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_er_nextSibling((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_er_attributes' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_er_attributes,GdomeEntityReference*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_attributes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_er_attributes((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDocument*' 'gdome_er_ownerDocument' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_er_ownerDocument,GdomeEntityReference*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_ownerDocument(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_er_ownerDocument((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_er_insertBefore' (GdomeEntityReference* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_insertBefore,GdomeEntityReference*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_insertBefore(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_er_insertBefore((GdomeEntityReference*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_er_replaceChild' (GdomeEntityReference* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_replaceChild,GdomeEntityReference*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_replaceChild(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_er_replaceChild((GdomeEntityReference*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_er_removeChild' (GdomeEntityReference* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_removeChild,GdomeEntityReference*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_removeChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_er_removeChild((GdomeEntityReference*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_er_appendChild' (GdomeEntityReference* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_appendChild,GdomeEntityReference*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_appendChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_er_appendChild((GdomeEntityReference*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_er_hasChildNodes' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_er_hasChildNodes,GdomeEntityReference*,GdomeException*,'
 */
inline int cgate_gdome_er_hasChildNodes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_er_hasChildNodes((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_er_cloneNode' (GdomeEntityReference* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_er_cloneNode,GdomeEntityReference*,GdomeBoolean,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_cloneNode(unsigned int arg0, int arg1, unsigned int arg2) {
	return (unsigned int) gdome_er_cloneNode((GdomeEntityReference*)arg0, (GdomeBoolean)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_er_normalize' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'void,gdome_er_normalize,GdomeEntityReference*,GdomeException*,'
 */
inline void cgate_gdome_er_normalize(unsigned int arg0, unsigned int arg1) {
	gdome_er_normalize((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_er_isSupported' (GdomeEntityReference* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_er_isSupported,GdomeEntityReference*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline int cgate_gdome_er_isSupported(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (int) gdome_er_isSupported((GdomeEntityReference*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_er_namespaceURI' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_er_namespaceURI,GdomeEntityReference*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_namespaceURI(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_er_namespaceURI((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_er_prefix' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_er_prefix,GdomeEntityReference*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_prefix(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_er_prefix((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_er_set_prefix' (GdomeEntityReference* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_er_set_prefix,GdomeEntityReference*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_er_set_prefix(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_er_set_prefix((GdomeEntityReference*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_er_localName' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_er_localName,GdomeEntityReference*,GdomeException*,'
 */
inline unsigned int cgate_gdome_er_localName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_er_localName((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_er_hasAttributes' (GdomeEntityReference* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_er_hasAttributes,GdomeEntityReference*,GdomeException*,'
 */
inline int cgate_gdome_er_hasAttributes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_er_hasAttributes((GdomeEntityReference*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_er_addEventListener' (GdomeEntityReference* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_er_addEventListener,GdomeEntityReference*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_er_addEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_er_addEventListener((GdomeEntityReference*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_er_removeEventListener' (GdomeEntityReference* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_er_removeEventListener,GdomeEntityReference*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_er_removeEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_er_removeEventListener((GdomeEntityReference*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'GdomeBoolean' 'gdome_er_dispatchEvent' (GdomeEntityReference* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_er_dispatchEvent,GdomeEntityReference*,GdomeEvent*,GdomeException*,'
 */
inline int cgate_gdome_er_dispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_er_dispatchEvent((GdomeEntityReference*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_er_subTreeDispatchEvent' (GdomeEntityReference* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_er_subTreeDispatchEvent,GdomeEntityReference*,GdomeEvent*,GdomeException*,'
 */
inline void cgate_gdome_er_subTreeDispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_er_subTreeDispatchEvent((GdomeEntityReference*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_er_canAppend' (GdomeEntityReference* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_er_canAppend,GdomeEntityReference*,GdomeNode*,GdomeException*,'
 */
inline int cgate_gdome_er_canAppend(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_er_canAppend((GdomeEntityReference*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_pi_target' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_pi_target,GdomeProcessingInstruction*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_target(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_pi_target((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_pi_data' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_pi_data,GdomeProcessingInstruction*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_data(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_pi_data((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_pi_set_data' (GdomeProcessingInstruction* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_pi_set_data,GdomeProcessingInstruction*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_pi_set_data(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_pi_set_data((GdomeProcessingInstruction*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_pi_ref' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'void,gdome_pi_ref,GdomeProcessingInstruction*,GdomeException*,'
 */
inline void cgate_gdome_pi_ref(unsigned int arg0, unsigned int arg1) {
	gdome_pi_ref((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_pi_unref' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'void,gdome_pi_unref,GdomeProcessingInstruction*,GdomeException*,'
 */
inline void cgate_gdome_pi_unref(unsigned int arg0, unsigned int arg1) {
	gdome_pi_unref((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'gpointer' 'gdome_pi_query_interface' (GdomeProcessingInstruction* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_pi_query_interface,GdomeProcessingInstruction*,const char*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_query_interface(unsigned int arg0, const char * arg1, unsigned int arg2) {
	return (unsigned int) gdome_pi_query_interface((GdomeProcessingInstruction*)arg0, (const char*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_pi_nodeName' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_pi_nodeName,GdomeProcessingInstruction*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_nodeName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_pi_nodeName((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_pi_nodeValue' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_pi_nodeValue,GdomeProcessingInstruction*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_nodeValue(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_pi_nodeValue((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_pi_set_nodeValue' (GdomeProcessingInstruction* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_pi_set_nodeValue,GdomeProcessingInstruction*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_pi_set_nodeValue(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_pi_set_nodeValue((GdomeProcessingInstruction*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'unsigned short' 'gdome_pi_nodeType' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'unsigned short,gdome_pi_nodeType,GdomeProcessingInstruction*,GdomeException*,'
 */
inline unsigned short int cgate_gdome_pi_nodeType(unsigned int arg0, unsigned int arg1) {
	return (unsigned short int) gdome_pi_nodeType((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_parentNode' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_parentNode,GdomeProcessingInstruction*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_parentNode(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_pi_parentNode((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_pi_childNodes' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_pi_childNodes,GdomeProcessingInstruction*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_childNodes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_pi_childNodes((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_firstChild' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_firstChild,GdomeProcessingInstruction*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_firstChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_pi_firstChild((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_lastChild' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_lastChild,GdomeProcessingInstruction*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_lastChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_pi_lastChild((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_previousSibling' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_previousSibling,GdomeProcessingInstruction*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_previousSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_pi_previousSibling((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_nextSibling' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_nextSibling,GdomeProcessingInstruction*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_nextSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_pi_nextSibling((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_pi_attributes' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_pi_attributes,GdomeProcessingInstruction*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_attributes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_pi_attributes((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDocument*' 'gdome_pi_ownerDocument' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_pi_ownerDocument,GdomeProcessingInstruction*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_ownerDocument(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_pi_ownerDocument((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_insertBefore' (GdomeProcessingInstruction* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_insertBefore,GdomeProcessingInstruction*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_insertBefore(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_pi_insertBefore((GdomeProcessingInstruction*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_replaceChild' (GdomeProcessingInstruction* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_replaceChild,GdomeProcessingInstruction*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_replaceChild(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_pi_replaceChild((GdomeProcessingInstruction*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_removeChild' (GdomeProcessingInstruction* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_removeChild,GdomeProcessingInstruction*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_removeChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_pi_removeChild((GdomeProcessingInstruction*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_appendChild' (GdomeProcessingInstruction* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_appendChild,GdomeProcessingInstruction*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_appendChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_pi_appendChild((GdomeProcessingInstruction*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_pi_hasChildNodes' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_pi_hasChildNodes,GdomeProcessingInstruction*,GdomeException*,'
 */
inline int cgate_gdome_pi_hasChildNodes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_pi_hasChildNodes((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_pi_cloneNode' (GdomeProcessingInstruction* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_pi_cloneNode,GdomeProcessingInstruction*,GdomeBoolean,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_cloneNode(unsigned int arg0, int arg1, unsigned int arg2) {
	return (unsigned int) gdome_pi_cloneNode((GdomeProcessingInstruction*)arg0, (GdomeBoolean)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_pi_normalize' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'void,gdome_pi_normalize,GdomeProcessingInstruction*,GdomeException*,'
 */
inline void cgate_gdome_pi_normalize(unsigned int arg0, unsigned int arg1) {
	gdome_pi_normalize((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_pi_isSupported' (GdomeProcessingInstruction* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_pi_isSupported,GdomeProcessingInstruction*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline int cgate_gdome_pi_isSupported(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (int) gdome_pi_isSupported((GdomeProcessingInstruction*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_pi_namespaceURI' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_pi_namespaceURI,GdomeProcessingInstruction*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_namespaceURI(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_pi_namespaceURI((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_pi_prefix' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_pi_prefix,GdomeProcessingInstruction*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_prefix(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_pi_prefix((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_pi_set_prefix' (GdomeProcessingInstruction* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_pi_set_prefix,GdomeProcessingInstruction*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_pi_set_prefix(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_pi_set_prefix((GdomeProcessingInstruction*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_pi_localName' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_pi_localName,GdomeProcessingInstruction*,GdomeException*,'
 */
inline unsigned int cgate_gdome_pi_localName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_pi_localName((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_pi_hasAttributes' (GdomeProcessingInstruction* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_pi_hasAttributes,GdomeProcessingInstruction*,GdomeException*,'
 */
inline int cgate_gdome_pi_hasAttributes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_pi_hasAttributes((GdomeProcessingInstruction*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_pi_addEventListener' (GdomeProcessingInstruction* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_pi_addEventListener,GdomeProcessingInstruction*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_pi_addEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_pi_addEventListener((GdomeProcessingInstruction*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_pi_removeEventListener' (GdomeProcessingInstruction* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_pi_removeEventListener,GdomeProcessingInstruction*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_pi_removeEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_pi_removeEventListener((GdomeProcessingInstruction*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'GdomeBoolean' 'gdome_pi_dispatchEvent' (GdomeProcessingInstruction* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_pi_dispatchEvent,GdomeProcessingInstruction*,GdomeEvent*,GdomeException*,'
 */
inline int cgate_gdome_pi_dispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_pi_dispatchEvent((GdomeProcessingInstruction*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_pi_subTreeDispatchEvent' (GdomeProcessingInstruction* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_pi_subTreeDispatchEvent,GdomeProcessingInstruction*,GdomeEvent*,GdomeException*,'
 */
inline void cgate_gdome_pi_subTreeDispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_pi_subTreeDispatchEvent((GdomeProcessingInstruction*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_pi_canAppend' (GdomeProcessingInstruction* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_pi_canAppend,GdomeProcessingInstruction*,GdomeNode*,GdomeException*,'
 */
inline int cgate_gdome_pi_canAppend(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_pi_canAppend((GdomeProcessingInstruction*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_name' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_name,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_name(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_name((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_dt_entities' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_dt_entities,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_entities(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_entities((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_dt_notations' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_dt_notations,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_notations(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_notations((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_publicId' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_publicId,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_publicId(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_publicId((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_systemId' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_systemId,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_systemId(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_systemId((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_internalSubset' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_internalSubset,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_internalSubset(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_internalSubset((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_dt_ref' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'void,gdome_dt_ref,GdomeDocumentType*,GdomeException*,'
 */
inline void cgate_gdome_dt_ref(unsigned int arg0, unsigned int arg1) {
	gdome_dt_ref((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_dt_unref' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'void,gdome_dt_unref,GdomeDocumentType*,GdomeException*,'
 */
inline void cgate_gdome_dt_unref(unsigned int arg0, unsigned int arg1) {
	gdome_dt_unref((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'gpointer' 'gdome_dt_query_interface' (GdomeDocumentType* const char* GdomeException*).
 * Configuration line: 'gpointer,gdome_dt_query_interface,GdomeDocumentType*,const char*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_query_interface(unsigned int arg0, const char * arg1, unsigned int arg2) {
	return (unsigned int) gdome_dt_query_interface((GdomeDocumentType*)arg0, (const char*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_nodeName' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_nodeName,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_nodeName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_nodeName((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_nodeValue' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_nodeValue,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_nodeValue(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_nodeValue((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_dt_set_nodeValue' (GdomeDocumentType* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_dt_set_nodeValue,GdomeDocumentType*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_dt_set_nodeValue(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_dt_set_nodeValue((GdomeDocumentType*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'unsigned short' 'gdome_dt_nodeType' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'unsigned short,gdome_dt_nodeType,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned short int cgate_gdome_dt_nodeType(unsigned int arg0, unsigned int arg1) {
	return (unsigned short int) gdome_dt_nodeType((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_parentNode' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_parentNode,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_parentNode(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_parentNode((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNodeList*' 'gdome_dt_childNodes' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNodeList*,gdome_dt_childNodes,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_childNodes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_childNodes((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_firstChild' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_firstChild,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_firstChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_firstChild((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_lastChild' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_lastChild,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_lastChild(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_lastChild((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_previousSibling' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_previousSibling,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_previousSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_previousSibling((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_nextSibling' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_nextSibling,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_nextSibling(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_nextSibling((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNamedNodeMap*' 'gdome_dt_attributes' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeNamedNodeMap*,gdome_dt_attributes,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_attributes(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_attributes((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDocument*' 'gdome_dt_ownerDocument' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDocument*,gdome_dt_ownerDocument,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_ownerDocument(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_ownerDocument((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_insertBefore' (GdomeDocumentType* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_insertBefore,GdomeDocumentType*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_insertBefore(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_dt_insertBefore((GdomeDocumentType*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_replaceChild' (GdomeDocumentType* GdomeNode* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_replaceChild,GdomeDocumentType*,GdomeNode*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_replaceChild(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (unsigned int) gdome_dt_replaceChild((GdomeDocumentType*)arg0, (GdomeNode*)arg1, (GdomeNode*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_removeChild' (GdomeDocumentType* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_removeChild,GdomeDocumentType*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_removeChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_dt_removeChild((GdomeDocumentType*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_appendChild' (GdomeDocumentType* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_appendChild,GdomeDocumentType*,GdomeNode*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_appendChild(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (unsigned int) gdome_dt_appendChild((GdomeDocumentType*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_dt_hasChildNodes' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_dt_hasChildNodes,GdomeDocumentType*,GdomeException*,'
 */
inline int cgate_gdome_dt_hasChildNodes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_dt_hasChildNodes((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeNode*' 'gdome_dt_cloneNode' (GdomeDocumentType* GdomeBoolean GdomeException*).
 * Configuration line: 'GdomeNode*,gdome_dt_cloneNode,GdomeDocumentType*,GdomeBoolean,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_cloneNode(unsigned int arg0, int arg1, unsigned int arg2) {
	return (unsigned int) gdome_dt_cloneNode((GdomeDocumentType*)arg0, (GdomeBoolean)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_dt_normalize' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'void,gdome_dt_normalize,GdomeDocumentType*,GdomeException*,'
 */
inline void cgate_gdome_dt_normalize(unsigned int arg0, unsigned int arg1) {
	gdome_dt_normalize((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_dt_isSupported' (GdomeDocumentType* GdomeDOMString* GdomeDOMString* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_dt_isSupported,GdomeDocumentType*,GdomeDOMString*,GdomeDOMString*,GdomeException*,'
 */
inline int cgate_gdome_dt_isSupported(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	return (int) gdome_dt_isSupported((GdomeDocumentType*)arg0, (GdomeDOMString*)arg1, (GdomeDOMString*)arg2, (GdomeException*)arg3);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_namespaceURI' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_namespaceURI,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_namespaceURI(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_namespaceURI((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_prefix' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_prefix,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_prefix(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_prefix((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_dt_set_prefix' (GdomeDocumentType* GdomeDOMString* GdomeException*).
 * Configuration line: 'void,gdome_dt_set_prefix,GdomeDocumentType*,GdomeDOMString*,GdomeException*,'
 */
inline void cgate_gdome_dt_set_prefix(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_dt_set_prefix((GdomeDocumentType*)arg0, (GdomeDOMString*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeDOMString*' 'gdome_dt_localName' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeDOMString*,gdome_dt_localName,GdomeDocumentType*,GdomeException*,'
 */
inline unsigned int cgate_gdome_dt_localName(unsigned int arg0, unsigned int arg1) {
	return (unsigned int) gdome_dt_localName((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'GdomeBoolean' 'gdome_dt_hasAttributes' (GdomeDocumentType* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_dt_hasAttributes,GdomeDocumentType*,GdomeException*,'
 */
inline int cgate_gdome_dt_hasAttributes(unsigned int arg0, unsigned int arg1) {
	return (int) gdome_dt_hasAttributes((GdomeDocumentType*)arg0, (GdomeException*)arg1);
}

/** Wrapper for 'void' 'gdome_dt_addEventListener' (GdomeDocumentType* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_dt_addEventListener,GdomeDocumentType*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_dt_addEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_dt_addEventListener((GdomeDocumentType*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'void' 'gdome_dt_removeEventListener' (GdomeDocumentType* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*).
 * Configuration line: 'void,gdome_dt_removeEventListener,GdomeDocumentType*,GdomeDOMString*,GdomeEventListener*,GdomeBoolean,GdomeException*,'
 */
inline void cgate_gdome_dt_removeEventListener(unsigned int arg0, unsigned int arg1, unsigned int arg2, int arg3, unsigned int arg4) {
	gdome_dt_removeEventListener((GdomeDocumentType*)arg0, (GdomeDOMString*)arg1, (GdomeEventListener*)arg2, (GdomeBoolean)arg3, (GdomeException*)arg4);
}

/** Wrapper for 'GdomeBoolean' 'gdome_dt_dispatchEvent' (GdomeDocumentType* GdomeEvent* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_dt_dispatchEvent,GdomeDocumentType*,GdomeEvent*,GdomeException*,'
 */
inline int cgate_gdome_dt_dispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_dt_dispatchEvent((GdomeDocumentType*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'void' 'gdome_dt_subTreeDispatchEvent' (GdomeDocumentType* GdomeEvent* GdomeException*).
 * Configuration line: 'void,gdome_dt_subTreeDispatchEvent,GdomeDocumentType*,GdomeEvent*,GdomeException*,'
 */
inline void cgate_gdome_dt_subTreeDispatchEvent(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	gdome_dt_subTreeDispatchEvent((GdomeDocumentType*)arg0, (GdomeEvent*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeBoolean' 'gdome_dt_canAppend' (GdomeDocumentType* GdomeNode* GdomeException*).
 * Configuration line: 'GdomeBoolean,gdome_dt_canAppend,GdomeDocumentType*,GdomeNode*,GdomeException*,'
 */
inline int cgate_gdome_dt_canAppend(unsigned int arg0, unsigned int arg1, unsigned int arg2) {
	return (int) gdome_dt_canAppend((GdomeDocumentType*)arg0, (GdomeNode*)arg1, (GdomeException*)arg2);
}

/** Wrapper for 'GdomeException*' 'gdome_extra_exc_new' ().
 * Configuration line: 'GdomeException*,gdome_extra_exc_new,,'
 */
inline unsigned int cgate_gdome_extra_exc_new() {
	return (unsigned int) gdome_extra_exc_new();
}

/** Wrapper for 'void' 'gdome_extra_exc_del' (GdomeException*).
 * Configuration line: 'void,gdome_extra_exc_del,GdomeException*,'
 */
inline void cgate_gdome_extra_exc_del(unsigned int arg0) {
	gdome_extra_exc_del((GdomeException*)arg0);
}

/** Wrapper for 'GdomeException' 'gdome_extra_exc_getvalue' (GdomeException*).
 * Configuration line: 'GdomeException,gdome_extra_exc_getvalue,GdomeException*,'
 */
inline int cgate_gdome_extra_exc_getvalue(unsigned int arg0) {
	return (int) gdome_extra_exc_getvalue((GdomeException*)arg0);
}

/** Wrapper for 'void' 'gdome_extra_exc_setvalue' (GdomeException* GdomeException).
 * Configuration line: 'void,gdome_extra_exc_setvalue,GdomeException*,GdomeException,'
 */
inline void cgate_gdome_extra_exc_setvalue(unsigned int arg0, int arg1) {
	gdome_extra_exc_setvalue((GdomeException*)arg0, (GdomeException)arg1);
}

/** Wrapper for 'GdomeText*' 'gdome_extra_cast_node_to_text' (GdomeNode*).
 * Configuration line: 'GdomeText*,gdome_extra_cast_node_to_text,GdomeNode*,'
 */
inline unsigned int cgate_gdome_extra_cast_node_to_text(unsigned int arg0) {
	return (unsigned int) gdome_extra_cast_node_to_text((GdomeNode*)arg0);
}

/** Wrapper for 'GdomeNode*' 'gdome_extra_cast_text_to_node' (GdomeText*).
 * Configuration line: 'GdomeNode*,gdome_extra_cast_text_to_node,GdomeText*,'
 */
inline unsigned int cgate_gdome_extra_cast_text_to_node(unsigned int arg0) {
	return (unsigned int) gdome_extra_cast_text_to_node((GdomeText*)arg0);
}

/** Wrapper for 'GdomeNode*' 'gdome_extra_cast_element_to_node' (GdomeElement*).
 * Configuration line: 'GdomeNode*,gdome_extra_cast_element_to_node,GdomeElement*,'
 */
inline unsigned int cgate_gdome_extra_cast_element_to_node(unsigned int arg0) {
	return (unsigned int) gdome_extra_cast_element_to_node((GdomeElement*)arg0);
}


