/* C-Wrapper for 'GdomeDOMString*' 'gdome_str_mkref_dup' (const gchar*) */
extern inline unsigned int cgate_gdome_str_mkref_dup(const char *);

/* C-Wrapper for 'void' 'gdome_str_ref' (GdomeDOMString*) */
extern inline void cgate_gdome_str_ref(unsigned int);

/* C-Wrapper for 'void' 'gdome_str_unref' (GdomeDOMString*) */
extern inline void cgate_gdome_str_unref(unsigned int);

/* C-Wrapper for 'int' 'gdome_str_length' (GdomeDOMString*) */
extern inline int cgate_gdome_str_length(unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_str_isEmpty' (GdomeDOMString*) */
extern inline int cgate_gdome_str_isEmpty(unsigned int);

/* C-Wrapper for 'gchar' 'gdome_str_charAt' (GdomeDOMString* int) */
extern inline char cgate_gdome_str_charAt(unsigned int, int);

/* C-Wrapper for 'GdomeDOMImplementation*' 'gdome_di_mkref' () */
extern inline unsigned int cgate_gdome_di_mkref();

/* C-Wrapper for 'void' 'gdome_di_ref' (GdomeDOMImplementation* GdomeException*) */
extern inline void cgate_gdome_di_ref(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_di_unref' (GdomeDOMImplementation* GdomeException*) */
extern inline void cgate_gdome_di_unref(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocumentType*' 'gdome_di_createDocumentType' (GdomeDOMImplementation* GdomeDOMString* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_di_createDocumentType(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocument*' 'gdome_di_createDocument' (GdomeDOMImplementation* GdomeDOMString* GdomeDOMString* GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_di_createDocument(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_di_freeDoc' (GdomeDOMImplementation* GdomeDocument* GdomeException*) */
extern inline void cgate_gdome_di_freeDoc(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocument*' 'gdome_di_createDocFromURI' (GdomeDOMImplementation* const char* unsigned int GdomeException*) */
extern inline unsigned int cgate_gdome_di_createDocFromURI(unsigned int, const char *, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocument*' 'gdome_di_createDocFromMemory' (GdomeDOMImplementation* char* unsigned int GdomeException*) */
extern inline unsigned int cgate_gdome_di_createDocFromMemory(unsigned int, char *, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_di_saveDocToFile' (GdomeDOMImplementation* GdomeDocument* const char* GdomeSavingCode GdomeException*) */
extern inline int cgate_gdome_di_saveDocToFile(unsigned int, unsigned int, const char *, int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_di_saveDocToFileEnc' (GdomeDOMImplementation* GdomeDocument* const char* const char* GdomeSavingCode GdomeException*) */
extern inline int cgate_gdome_di_saveDocToFileEnc(unsigned int, unsigned int, const char *, const char *, int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_di_saveDocToMemory' (GdomeDOMImplementation* GdomeDocument* char** GdomeSavingCode GdomeException*) */
extern inline int cgate_gdome_di_saveDocToMemory(unsigned int, unsigned int, char **, int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_di_saveDocToMemoryEnc' (GdomeDOMImplementation* GdomeDocument* char** const char* GdomeSavingCode GdomeException*) */
extern inline int cgate_gdome_di_saveDocToMemoryEnc(unsigned int, unsigned int, char **, const char *, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_df_ref' (GdomeDocumentFragment* GdomeException*) */
extern inline void cgate_gdome_df_ref(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_df_unref' (GdomeDocumentFragment* GdomeException*) */
extern inline void cgate_gdome_df_unref(unsigned int, unsigned int);

/* C-Wrapper for 'gpointer' 'gdome_df_query_interface' (GdomeDocumentFragment* const char* GdomeException*) */
extern inline unsigned int cgate_gdome_df_query_interface(unsigned int, const char *, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_df_nodeName' (GdomeDocumentFragment* GdomeException*) */
extern inline unsigned int cgate_gdome_df_nodeName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_df_nodeValue' (GdomeDocumentFragment* GdomeException*) */
extern inline unsigned int cgate_gdome_df_nodeValue(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_df_set_nodeValue' (GdomeDocumentFragment* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_df_set_nodeValue(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'unsigned short' 'gdome_df_nodeType' (GdomeDocumentFragment* GdomeException*) */
extern inline unsigned short int cgate_gdome_df_nodeType(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_df_parentNode' (GdomeDocumentFragment* GdomeException*) */
extern inline unsigned int cgate_gdome_df_parentNode(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_df_childNodes' (GdomeDocumentFragment* GdomeException*) */
extern inline unsigned int cgate_gdome_df_childNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_df_firstChild' (GdomeDocumentFragment* GdomeException*) */
extern inline unsigned int cgate_gdome_df_firstChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_df_lastChild' (GdomeDocumentFragment* GdomeException*) */
extern inline unsigned int cgate_gdome_df_lastChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_df_previousSibling' (GdomeDocumentFragment* GdomeException*) */
extern inline unsigned int cgate_gdome_df_previousSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_df_nextSibling' (GdomeDocumentFragment* GdomeException*) */
extern inline unsigned int cgate_gdome_df_nextSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNamedNodeMap*' 'gdome_df_attributes' (GdomeDocumentFragment* GdomeException*) */
extern inline unsigned int cgate_gdome_df_attributes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocument*' 'gdome_df_ownerDocument' (GdomeDocumentFragment* GdomeException*) */
extern inline unsigned int cgate_gdome_df_ownerDocument(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_df_insertBefore' (GdomeDocumentFragment* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_df_insertBefore(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_df_replaceChild' (GdomeDocumentFragment* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_df_replaceChild(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_df_removeChild' (GdomeDocumentFragment* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_df_removeChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_df_appendChild' (GdomeDocumentFragment* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_df_appendChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_df_hasChildNodes' (GdomeDocumentFragment* GdomeException*) */
extern inline int cgate_gdome_df_hasChildNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_df_cloneNode' (GdomeDocumentFragment* GdomeBoolean GdomeException*) */
extern inline unsigned int cgate_gdome_df_cloneNode(unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_df_normalize' (GdomeDocumentFragment* GdomeException*) */
extern inline void cgate_gdome_df_normalize(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_df_isSupported' (GdomeDocumentFragment* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline int cgate_gdome_df_isSupported(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_df_namespaceURI' (GdomeDocumentFragment* GdomeException*) */
extern inline unsigned int cgate_gdome_df_namespaceURI(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_df_prefix' (GdomeDocumentFragment* GdomeException*) */
extern inline unsigned int cgate_gdome_df_prefix(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_df_set_prefix' (GdomeDocumentFragment* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_df_set_prefix(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_df_localName' (GdomeDocumentFragment* GdomeException*) */
extern inline unsigned int cgate_gdome_df_localName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_df_hasAttributes' (GdomeDocumentFragment* GdomeException*) */
extern inline int cgate_gdome_df_hasAttributes(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_df_addEventListener' (GdomeDocumentFragment* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_df_addEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_df_removeEventListener' (GdomeDocumentFragment* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_df_removeEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_df_dispatchEvent' (GdomeDocumentFragment* GdomeEvent* GdomeException*) */
extern inline int cgate_gdome_df_dispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_df_subTreeDispatchEvent' (GdomeDocumentFragment* GdomeEvent* GdomeException*) */
extern inline void cgate_gdome_df_subTreeDispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_df_canAppend' (GdomeDocumentFragment* GdomeNode* GdomeException*) */
extern inline int cgate_gdome_df_canAppend(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocumentType*' 'gdome_doc_doctype' (GdomeDocument* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_doctype(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMImplementation*' 'gdome_doc_implementation' (GdomeDocument* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_implementation(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeElement*' 'gdome_doc_documentElement' (GdomeDocument* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_documentElement(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeElement*' 'gdome_doc_createElement' (GdomeDocument* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_createElement(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocumentFragment*' 'gdome_doc_createDocumentFragment' (GdomeDocument* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_createDocumentFragment(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeText*' 'gdome_doc_createTextNode' (GdomeDocument* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_createTextNode(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeComment*' 'gdome_doc_createComment' (GdomeDocument* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_createComment(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeCDATASection*' 'gdome_doc_createCDATASection' (GdomeDocument* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_createCDATASection(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeProcessingInstruction*' 'gdome_doc_createProcessingInstruction' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_createProcessingInstruction(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeAttr*' 'gdome_doc_createAttribute' (GdomeDocument* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_createAttribute(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeEntityReference*' 'gdome_doc_createEntityReference' (GdomeDocument* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_createEntityReference(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_doc_getElementsByTagName' (GdomeDocument* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_getElementsByTagName(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_doc_importNode' (GdomeDocument* GdomeNode* GdomeBoolean GdomeException*) */
extern inline unsigned int cgate_gdome_doc_importNode(unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'GdomeElement*' 'gdome_doc_createElementNS' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_createElementNS(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeAttr*' 'gdome_doc_createAttributeNS' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_createAttributeNS(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_doc_getElementsByTagNameNS' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_getElementsByTagNameNS(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeElement*' 'gdome_doc_getElementById' (GdomeDocument* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_getElementById(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeEvent*' 'gdome_doc_createEvent' (GdomeDocument* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_createEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_doc_ref' (GdomeDocument* GdomeException*) */
extern inline void cgate_gdome_doc_ref(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_doc_unref' (GdomeDocument* GdomeException*) */
extern inline void cgate_gdome_doc_unref(unsigned int, unsigned int);

/* C-Wrapper for 'gpointer' 'gdome_doc_query_interface' (GdomeDocument* const char* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_query_interface(unsigned int, const char *, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_doc_nodeName' (GdomeDocument* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_nodeName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_doc_nodeValue' (GdomeDocument* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_nodeValue(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_doc_set_nodeValue' (GdomeDocument* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_doc_set_nodeValue(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'unsigned short' 'gdome_doc_nodeType' (GdomeDocument* GdomeException*) */
extern inline unsigned short int cgate_gdome_doc_nodeType(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_doc_parentNode' (GdomeDocument* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_parentNode(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_doc_childNodes' (GdomeDocument* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_childNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_doc_firstChild' (GdomeDocument* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_firstChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_doc_lastChild' (GdomeDocument* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_lastChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_doc_previousSibling' (GdomeDocument* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_previousSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_doc_nextSibling' (GdomeDocument* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_nextSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNamedNodeMap*' 'gdome_doc_attributes' (GdomeDocument* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_attributes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocument*' 'gdome_doc_ownerDocument' (GdomeDocument* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_ownerDocument(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_doc_insertBefore' (GdomeDocument* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_insertBefore(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_doc_replaceChild' (GdomeDocument* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_replaceChild(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_doc_removeChild' (GdomeDocument* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_removeChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_doc_appendChild' (GdomeDocument* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_appendChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_doc_hasChildNodes' (GdomeDocument* GdomeException*) */
extern inline int cgate_gdome_doc_hasChildNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_doc_cloneNode' (GdomeDocument* GdomeBoolean GdomeException*) */
extern inline unsigned int cgate_gdome_doc_cloneNode(unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_doc_normalize' (GdomeDocument* GdomeException*) */
extern inline void cgate_gdome_doc_normalize(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_doc_isSupported' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline int cgate_gdome_doc_isSupported(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_doc_namespaceURI' (GdomeDocument* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_namespaceURI(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_doc_prefix' (GdomeDocument* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_prefix(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_doc_set_prefix' (GdomeDocument* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_doc_set_prefix(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_doc_localName' (GdomeDocument* GdomeException*) */
extern inline unsigned int cgate_gdome_doc_localName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_doc_hasAttributes' (GdomeDocument* GdomeException*) */
extern inline int cgate_gdome_doc_hasAttributes(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_doc_addEventListener' (GdomeDocument* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_doc_addEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_doc_removeEventListener' (GdomeDocument* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_doc_removeEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_doc_dispatchEvent' (GdomeDocument* GdomeEvent* GdomeException*) */
extern inline int cgate_gdome_doc_dispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_doc_subTreeDispatchEvent' (GdomeDocument* GdomeEvent* GdomeException*) */
extern inline void cgate_gdome_doc_subTreeDispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_doc_canAppend' (GdomeDocument* GdomeNode* GdomeException*) */
extern inline int cgate_gdome_doc_canAppend(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_n_ref' (GdomeNode* GdomeException*) */
extern inline void cgate_gdome_n_ref(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_n_unref' (GdomeNode* GdomeException*) */
extern inline void cgate_gdome_n_unref(unsigned int, unsigned int);

/* C-Wrapper for 'gpointer' 'gdome_n_query_interface' (GdomeNode* const char* GdomeException*) */
extern inline unsigned int cgate_gdome_n_query_interface(unsigned int, const char *, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_n_nodeName' (GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_n_nodeName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_n_nodeValue' (GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_n_nodeValue(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_n_set_nodeValue' (GdomeNode* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_n_set_nodeValue(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'unsigned short' 'gdome_n_nodeType' (GdomeNode* GdomeException*) */
extern inline unsigned short int cgate_gdome_n_nodeType(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_n_parentNode' (GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_n_parentNode(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_n_childNodes' (GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_n_childNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_n_firstChild' (GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_n_firstChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_n_lastChild' (GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_n_lastChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_n_previousSibling' (GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_n_previousSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_n_nextSibling' (GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_n_nextSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNamedNodeMap*' 'gdome_n_attributes' (GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_n_attributes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocument*' 'gdome_n_ownerDocument' (GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_n_ownerDocument(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_n_insertBefore' (GdomeNode* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_n_insertBefore(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_n_replaceChild' (GdomeNode* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_n_replaceChild(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_n_removeChild' (GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_n_removeChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_n_appendChild' (GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_n_appendChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_n_hasChildNodes' (GdomeNode* GdomeException*) */
extern inline int cgate_gdome_n_hasChildNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_n_cloneNode' (GdomeNode* GdomeBoolean GdomeException*) */
extern inline unsigned int cgate_gdome_n_cloneNode(unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_n_normalize' (GdomeNode* GdomeException*) */
extern inline void cgate_gdome_n_normalize(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_n_isSupported' (GdomeNode* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline int cgate_gdome_n_isSupported(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_n_namespaceURI' (GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_n_namespaceURI(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_n_prefix' (GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_n_prefix(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_n_set_prefix' (GdomeNode* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_n_set_prefix(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_n_localName' (GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_n_localName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_n_hasAttributes' (GdomeNode* GdomeException*) */
extern inline int cgate_gdome_n_hasAttributes(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_n_addEventListener' (GdomeNode* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_n_addEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_n_removeEventListener' (GdomeNode* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_n_removeEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_n_dispatchEvent' (GdomeNode* GdomeEvent* GdomeException*) */
extern inline int cgate_gdome_n_dispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_n_subTreeDispatchEvent' (GdomeNode* GdomeEvent* GdomeException*) */
extern inline void cgate_gdome_n_subTreeDispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_n_canAppend' (GdomeNode* GdomeNode* GdomeException*) */
extern inline int cgate_gdome_n_canAppend(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_nl_ref' (GdomeNodeList* GdomeException*) */
extern inline void cgate_gdome_nl_ref(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_nl_unref' (GdomeNodeList* GdomeException*) */
extern inline void cgate_gdome_nl_unref(unsigned int, unsigned int);

/* C-Wrapper for 'gpointer' 'gdome_nl_query_interface' (GdomeNodeList* const char* GdomeException*) */
extern inline unsigned int cgate_gdome_nl_query_interface(unsigned int, const char *, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_nl_item' (GdomeNodeList* gulong GdomeException*) */
extern inline unsigned int cgate_gdome_nl_item(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'gulong' 'gdome_nl_length' (GdomeNodeList* GdomeException*) */
extern inline unsigned int cgate_gdome_nl_length(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_nnm_ref' (GdomeNamedNodeMap* GdomeException*) */
extern inline void cgate_gdome_nnm_ref(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_nnm_unref' (GdomeNamedNodeMap* GdomeException*) */
extern inline void cgate_gdome_nnm_unref(unsigned int, unsigned int);

/* C-Wrapper for 'gpointer' 'gdome_nnm_query_interface' (GdomeNamedNodeMap* const char* GdomeException*) */
extern inline unsigned int cgate_gdome_nnm_query_interface(unsigned int, const char *, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_nnm_getNamedItem' (GdomeNamedNodeMap* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_nnm_getNamedItem(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_nnm_setNamedItem' (GdomeNamedNodeMap* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_nnm_setNamedItem(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_nnm_removeNamedItem' (GdomeNamedNodeMap* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_nnm_removeNamedItem(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_nnm_item' (GdomeNamedNodeMap* gulong GdomeException*) */
extern inline unsigned int cgate_gdome_nnm_item(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'gulong' 'gdome_nnm_length' (GdomeNamedNodeMap* GdomeException*) */
extern inline unsigned int cgate_gdome_nnm_length(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_nnm_getNamedItemNS' (GdomeNamedNodeMap* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_nnm_getNamedItemNS(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_nnm_setNamedItemNS' (GdomeNamedNodeMap* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_nnm_setNamedItemNS(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_nnm_removeNamedItemNS' (GdomeNamedNodeMap* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_nnm_removeNamedItemNS(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_cd_data' (GdomeCharacterData* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_data(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cd_set_data' (GdomeCharacterData* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_cd_set_data(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'gulong' 'gdome_cd_length' (GdomeCharacterData* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_length(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_cd_substringData' (GdomeCharacterData* gulong gulong GdomeException*) */
extern inline unsigned int cgate_gdome_cd_substringData(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cd_appendData' (GdomeCharacterData* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_cd_appendData(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cd_insertData' (GdomeCharacterData* gulong GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_cd_insertData(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cd_deleteData' (GdomeCharacterData* gulong gulong GdomeException*) */
extern inline void cgate_gdome_cd_deleteData(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cd_replaceData' (GdomeCharacterData* gulong gulong GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_cd_replaceData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cd_ref' (GdomeCharacterData* GdomeException*) */
extern inline void cgate_gdome_cd_ref(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cd_unref' (GdomeCharacterData* GdomeException*) */
extern inline void cgate_gdome_cd_unref(unsigned int, unsigned int);

/* C-Wrapper for 'gpointer' 'gdome_cd_query_interface' (GdomeCharacterData* const char* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_query_interface(unsigned int, const char *, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_cd_nodeName' (GdomeCharacterData* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_nodeName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_cd_nodeValue' (GdomeCharacterData* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_nodeValue(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cd_set_nodeValue' (GdomeCharacterData* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_cd_set_nodeValue(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'unsigned short' 'gdome_cd_nodeType' (GdomeCharacterData* GdomeException*) */
extern inline unsigned short int cgate_gdome_cd_nodeType(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cd_parentNode' (GdomeCharacterData* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_parentNode(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_cd_childNodes' (GdomeCharacterData* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_childNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cd_firstChild' (GdomeCharacterData* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_firstChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cd_lastChild' (GdomeCharacterData* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_lastChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cd_previousSibling' (GdomeCharacterData* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_previousSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cd_nextSibling' (GdomeCharacterData* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_nextSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNamedNodeMap*' 'gdome_cd_attributes' (GdomeCharacterData* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_attributes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocument*' 'gdome_cd_ownerDocument' (GdomeCharacterData* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_ownerDocument(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cd_insertBefore' (GdomeCharacterData* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_insertBefore(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cd_replaceChild' (GdomeCharacterData* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_replaceChild(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cd_removeChild' (GdomeCharacterData* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_removeChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cd_appendChild' (GdomeCharacterData* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_appendChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_cd_hasChildNodes' (GdomeCharacterData* GdomeException*) */
extern inline int cgate_gdome_cd_hasChildNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cd_cloneNode' (GdomeCharacterData* GdomeBoolean GdomeException*) */
extern inline unsigned int cgate_gdome_cd_cloneNode(unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cd_normalize' (GdomeCharacterData* GdomeException*) */
extern inline void cgate_gdome_cd_normalize(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_cd_isSupported' (GdomeCharacterData* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline int cgate_gdome_cd_isSupported(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_cd_namespaceURI' (GdomeCharacterData* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_namespaceURI(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_cd_prefix' (GdomeCharacterData* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_prefix(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cd_set_prefix' (GdomeCharacterData* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_cd_set_prefix(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_cd_localName' (GdomeCharacterData* GdomeException*) */
extern inline unsigned int cgate_gdome_cd_localName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_cd_hasAttributes' (GdomeCharacterData* GdomeException*) */
extern inline int cgate_gdome_cd_hasAttributes(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cd_addEventListener' (GdomeCharacterData* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_cd_addEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cd_removeEventListener' (GdomeCharacterData* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_cd_removeEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_cd_dispatchEvent' (GdomeCharacterData* GdomeEvent* GdomeException*) */
extern inline int cgate_gdome_cd_dispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cd_subTreeDispatchEvent' (GdomeCharacterData* GdomeEvent* GdomeException*) */
extern inline void cgate_gdome_cd_subTreeDispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_cd_canAppend' (GdomeCharacterData* GdomeNode* GdomeException*) */
extern inline int cgate_gdome_cd_canAppend(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_a_ref' (GdomeAttr* GdomeException*) */
extern inline void cgate_gdome_a_ref(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_a_unref' (GdomeAttr* GdomeException*) */
extern inline void cgate_gdome_a_unref(unsigned int, unsigned int);

/* C-Wrapper for 'gpointer' 'gdome_a_query_interface' (GdomeAttr* const char* GdomeException*) */
extern inline unsigned int cgate_gdome_a_query_interface(unsigned int, const char *, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_a_name' (GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_a_name(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeElement*' 'gdome_a_ownerElement' (GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_a_ownerElement(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_a_specified' (GdomeAttr* GdomeException*) */
extern inline int cgate_gdome_a_specified(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_a_value' (GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_a_value(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_a_set_value' (GdomeAttr* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_a_set_value(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_a_nodeName' (GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_a_nodeName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_a_nodeValue' (GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_a_nodeValue(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_a_set_nodeValue' (GdomeAttr* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_a_set_nodeValue(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'unsigned short' 'gdome_a_nodeType' (GdomeAttr* GdomeException*) */
extern inline unsigned short int cgate_gdome_a_nodeType(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_a_parentNode' (GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_a_parentNode(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_a_childNodes' (GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_a_childNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_a_firstChild' (GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_a_firstChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_a_lastChild' (GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_a_lastChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_a_previousSibling' (GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_a_previousSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_a_nextSibling' (GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_a_nextSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNamedNodeMap*' 'gdome_a_attributes' (GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_a_attributes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocument*' 'gdome_a_ownerDocument' (GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_a_ownerDocument(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_a_insertBefore' (GdomeAttr* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_a_insertBefore(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_a_replaceChild' (GdomeAttr* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_a_replaceChild(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_a_removeChild' (GdomeAttr* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_a_removeChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_a_appendChild' (GdomeAttr* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_a_appendChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_a_hasChildNodes' (GdomeAttr* GdomeException*) */
extern inline int cgate_gdome_a_hasChildNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_a_cloneNode' (GdomeAttr* GdomeBoolean GdomeException*) */
extern inline unsigned int cgate_gdome_a_cloneNode(unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_a_normalize' (GdomeAttr* GdomeException*) */
extern inline void cgate_gdome_a_normalize(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_a_isSupported' (GdomeAttr* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline int cgate_gdome_a_isSupported(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_a_namespaceURI' (GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_a_namespaceURI(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_a_prefix' (GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_a_prefix(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_a_set_prefix' (GdomeAttr* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_a_set_prefix(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_a_localName' (GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_a_localName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_a_hasAttributes' (GdomeAttr* GdomeException*) */
extern inline int cgate_gdome_a_hasAttributes(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_a_addEventListener' (GdomeAttr* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_a_addEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_a_removeEventListener' (GdomeAttr* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_a_removeEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_a_dispatchEvent' (GdomeAttr* GdomeEvent* GdomeException*) */
extern inline int cgate_gdome_a_dispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_a_subTreeDispatchEvent' (GdomeAttr* GdomeEvent* GdomeException*) */
extern inline void cgate_gdome_a_subTreeDispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_a_canAppend' (GdomeAttr* GdomeNode* GdomeException*) */
extern inline int cgate_gdome_a_canAppend(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_el_tagName' (GdomeElement* GdomeException*) */
extern inline unsigned int cgate_gdome_el_tagName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_el_getAttribute' (GdomeElement* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_el_getAttribute(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_el_setAttribute' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_el_setAttribute(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_el_removeAttribute' (GdomeElement* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_el_removeAttribute(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeAttr*' 'gdome_el_getAttributeNode' (GdomeElement* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_el_getAttributeNode(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeAttr*' 'gdome_el_setAttributeNode' (GdomeElement* GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_el_setAttributeNode(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeAttr*' 'gdome_el_removeAttributeNode' (GdomeElement* GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_el_removeAttributeNode(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_el_getElementsByTagName' (GdomeElement* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_el_getElementsByTagName(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_el_getAttributeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_el_getAttributeNS(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_el_setAttributeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_el_setAttributeNS(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_el_removeAttributeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_el_removeAttributeNS(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeAttr*' 'gdome_el_getAttributeNodeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_el_getAttributeNodeNS(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeAttr*' 'gdome_el_setAttributeNodeNS' (GdomeElement* GdomeAttr* GdomeException*) */
extern inline unsigned int cgate_gdome_el_setAttributeNodeNS(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_el_getElementsByTagNameNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline unsigned int cgate_gdome_el_getElementsByTagNameNS(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_el_hasAttribute' (GdomeElement* GdomeDOMString* GdomeException*) */
extern inline int cgate_gdome_el_hasAttribute(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_el_hasAttributeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline int cgate_gdome_el_hasAttributeNS(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_el_ref' (GdomeElement* GdomeException*) */
extern inline void cgate_gdome_el_ref(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_el_unref' (GdomeElement* GdomeException*) */
extern inline void cgate_gdome_el_unref(unsigned int, unsigned int);

/* C-Wrapper for 'gpointer' 'gdome_el_query_interface' (GdomeElement* const char* GdomeException*) */
extern inline unsigned int cgate_gdome_el_query_interface(unsigned int, const char *, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_el_nodeName' (GdomeElement* GdomeException*) */
extern inline unsigned int cgate_gdome_el_nodeName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_el_nodeValue' (GdomeElement* GdomeException*) */
extern inline unsigned int cgate_gdome_el_nodeValue(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_el_set_nodeValue' (GdomeElement* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_el_set_nodeValue(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'unsigned short' 'gdome_el_nodeType' (GdomeElement* GdomeException*) */
extern inline unsigned short int cgate_gdome_el_nodeType(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_el_parentNode' (GdomeElement* GdomeException*) */
extern inline unsigned int cgate_gdome_el_parentNode(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_el_childNodes' (GdomeElement* GdomeException*) */
extern inline unsigned int cgate_gdome_el_childNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_el_firstChild' (GdomeElement* GdomeException*) */
extern inline unsigned int cgate_gdome_el_firstChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_el_lastChild' (GdomeElement* GdomeException*) */
extern inline unsigned int cgate_gdome_el_lastChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_el_previousSibling' (GdomeElement* GdomeException*) */
extern inline unsigned int cgate_gdome_el_previousSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_el_nextSibling' (GdomeElement* GdomeException*) */
extern inline unsigned int cgate_gdome_el_nextSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNamedNodeMap*' 'gdome_el_attributes' (GdomeElement* GdomeException*) */
extern inline unsigned int cgate_gdome_el_attributes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocument*' 'gdome_el_ownerDocument' (GdomeElement* GdomeException*) */
extern inline unsigned int cgate_gdome_el_ownerDocument(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_el_insertBefore' (GdomeElement* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_el_insertBefore(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_el_replaceChild' (GdomeElement* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_el_replaceChild(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_el_removeChild' (GdomeElement* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_el_removeChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_el_appendChild' (GdomeElement* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_el_appendChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_el_hasChildNodes' (GdomeElement* GdomeException*) */
extern inline int cgate_gdome_el_hasChildNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_el_cloneNode' (GdomeElement* GdomeBoolean GdomeException*) */
extern inline unsigned int cgate_gdome_el_cloneNode(unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_el_normalize' (GdomeElement* GdomeException*) */
extern inline void cgate_gdome_el_normalize(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_el_isSupported' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline int cgate_gdome_el_isSupported(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_el_namespaceURI' (GdomeElement* GdomeException*) */
extern inline unsigned int cgate_gdome_el_namespaceURI(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_el_prefix' (GdomeElement* GdomeException*) */
extern inline unsigned int cgate_gdome_el_prefix(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_el_set_prefix' (GdomeElement* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_el_set_prefix(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_el_localName' (GdomeElement* GdomeException*) */
extern inline unsigned int cgate_gdome_el_localName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_el_hasAttributes' (GdomeElement* GdomeException*) */
extern inline int cgate_gdome_el_hasAttributes(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_el_addEventListener' (GdomeElement* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_el_addEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_el_removeEventListener' (GdomeElement* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_el_removeEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_el_dispatchEvent' (GdomeElement* GdomeEvent* GdomeException*) */
extern inline int cgate_gdome_el_dispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_el_subTreeDispatchEvent' (GdomeElement* GdomeEvent* GdomeException*) */
extern inline void cgate_gdome_el_subTreeDispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_el_canAppend' (GdomeElement* GdomeNode* GdomeException*) */
extern inline int cgate_gdome_el_canAppend(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeText*' 'gdome_t_splitText' (GdomeText* gulong GdomeException*) */
extern inline unsigned int cgate_gdome_t_splitText(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_t_data' (GdomeText* GdomeException*) */
extern inline unsigned int cgate_gdome_t_data(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_t_set_data' (GdomeText* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_t_set_data(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'gulong' 'gdome_t_length' (GdomeText* GdomeException*) */
extern inline unsigned int cgate_gdome_t_length(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_t_substringData' (GdomeText* gulong gulong GdomeException*) */
extern inline unsigned int cgate_gdome_t_substringData(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_t_appendData' (GdomeText* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_t_appendData(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_t_insertData' (GdomeText* gulong GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_t_insertData(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_t_deleteData' (GdomeText* gulong gulong GdomeException*) */
extern inline void cgate_gdome_t_deleteData(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_t_replaceData' (GdomeText* gulong gulong GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_t_replaceData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_t_ref' (GdomeText* GdomeException*) */
extern inline void cgate_gdome_t_ref(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_t_unref' (GdomeText* GdomeException*) */
extern inline void cgate_gdome_t_unref(unsigned int, unsigned int);

/* C-Wrapper for 'gpointer' 'gdome_t_query_interface' (GdomeText* const char* GdomeException*) */
extern inline unsigned int cgate_gdome_t_query_interface(unsigned int, const char *, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_t_nodeName' (GdomeText* GdomeException*) */
extern inline unsigned int cgate_gdome_t_nodeName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_t_nodeValue' (GdomeText* GdomeException*) */
extern inline unsigned int cgate_gdome_t_nodeValue(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_t_set_nodeValue' (GdomeText* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_t_set_nodeValue(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'unsigned short' 'gdome_t_nodeType' (GdomeText* GdomeException*) */
extern inline unsigned short int cgate_gdome_t_nodeType(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_t_parentNode' (GdomeText* GdomeException*) */
extern inline unsigned int cgate_gdome_t_parentNode(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_t_childNodes' (GdomeText* GdomeException*) */
extern inline unsigned int cgate_gdome_t_childNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_t_firstChild' (GdomeText* GdomeException*) */
extern inline unsigned int cgate_gdome_t_firstChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_t_lastChild' (GdomeText* GdomeException*) */
extern inline unsigned int cgate_gdome_t_lastChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_t_previousSibling' (GdomeText* GdomeException*) */
extern inline unsigned int cgate_gdome_t_previousSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_t_nextSibling' (GdomeText* GdomeException*) */
extern inline unsigned int cgate_gdome_t_nextSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNamedNodeMap*' 'gdome_t_attributes' (GdomeText* GdomeException*) */
extern inline unsigned int cgate_gdome_t_attributes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocument*' 'gdome_t_ownerDocument' (GdomeText* GdomeException*) */
extern inline unsigned int cgate_gdome_t_ownerDocument(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_t_insertBefore' (GdomeText* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_t_insertBefore(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_t_replaceChild' (GdomeText* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_t_replaceChild(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_t_removeChild' (GdomeText* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_t_removeChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_t_appendChild' (GdomeText* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_t_appendChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_t_hasChildNodes' (GdomeText* GdomeException*) */
extern inline int cgate_gdome_t_hasChildNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_t_cloneNode' (GdomeText* GdomeBoolean GdomeException*) */
extern inline unsigned int cgate_gdome_t_cloneNode(unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_t_normalize' (GdomeText* GdomeException*) */
extern inline void cgate_gdome_t_normalize(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_t_isSupported' (GdomeText* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline int cgate_gdome_t_isSupported(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_t_namespaceURI' (GdomeText* GdomeException*) */
extern inline unsigned int cgate_gdome_t_namespaceURI(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_t_prefix' (GdomeText* GdomeException*) */
extern inline unsigned int cgate_gdome_t_prefix(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_t_set_prefix' (GdomeText* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_t_set_prefix(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_t_localName' (GdomeText* GdomeException*) */
extern inline unsigned int cgate_gdome_t_localName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_t_hasAttributes' (GdomeText* GdomeException*) */
extern inline int cgate_gdome_t_hasAttributes(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_t_addEventListener' (GdomeText* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_t_addEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_t_removeEventListener' (GdomeText* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_t_removeEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_t_dispatchEvent' (GdomeText* GdomeEvent* GdomeException*) */
extern inline int cgate_gdome_t_dispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_t_subTreeDispatchEvent' (GdomeText* GdomeEvent* GdomeException*) */
extern inline void cgate_gdome_t_subTreeDispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_t_canAppend' (GdomeText* GdomeNode* GdomeException*) */
extern inline int cgate_gdome_t_canAppend(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_c_data' (GdomeComment* GdomeException*) */
extern inline unsigned int cgate_gdome_c_data(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_c_set_data' (GdomeComment* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_c_set_data(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'gulong' 'gdome_c_length' (GdomeComment* GdomeException*) */
extern inline unsigned int cgate_gdome_c_length(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_c_substringData' (GdomeComment* gulong gulong GdomeException*) */
extern inline unsigned int cgate_gdome_c_substringData(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_c_appendData' (GdomeComment* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_c_appendData(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_c_insertData' (GdomeComment* gulong GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_c_insertData(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_c_deleteData' (GdomeComment* gulong gulong GdomeException*) */
extern inline void cgate_gdome_c_deleteData(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_c_replaceData' (GdomeComment* gulong gulong GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_c_replaceData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_c_ref' (GdomeComment* GdomeException*) */
extern inline void cgate_gdome_c_ref(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_c_unref' (GdomeComment* GdomeException*) */
extern inline void cgate_gdome_c_unref(unsigned int, unsigned int);

/* C-Wrapper for 'gpointer' 'gdome_c_query_interface' (GdomeComment* const char* GdomeException*) */
extern inline unsigned int cgate_gdome_c_query_interface(unsigned int, const char *, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_c_nodeName' (GdomeComment* GdomeException*) */
extern inline unsigned int cgate_gdome_c_nodeName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_c_nodeValue' (GdomeComment* GdomeException*) */
extern inline unsigned int cgate_gdome_c_nodeValue(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_c_set_nodeValue' (GdomeComment* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_c_set_nodeValue(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'unsigned short' 'gdome_c_nodeType' (GdomeComment* GdomeException*) */
extern inline unsigned short int cgate_gdome_c_nodeType(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_c_parentNode' (GdomeComment* GdomeException*) */
extern inline unsigned int cgate_gdome_c_parentNode(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_c_childNodes' (GdomeComment* GdomeException*) */
extern inline unsigned int cgate_gdome_c_childNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_c_firstChild' (GdomeComment* GdomeException*) */
extern inline unsigned int cgate_gdome_c_firstChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_c_lastChild' (GdomeComment* GdomeException*) */
extern inline unsigned int cgate_gdome_c_lastChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_c_previousSibling' (GdomeComment* GdomeException*) */
extern inline unsigned int cgate_gdome_c_previousSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_c_nextSibling' (GdomeComment* GdomeException*) */
extern inline unsigned int cgate_gdome_c_nextSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNamedNodeMap*' 'gdome_c_attributes' (GdomeComment* GdomeException*) */
extern inline unsigned int cgate_gdome_c_attributes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocument*' 'gdome_c_ownerDocument' (GdomeComment* GdomeException*) */
extern inline unsigned int cgate_gdome_c_ownerDocument(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_c_insertBefore' (GdomeComment* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_c_insertBefore(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_c_replaceChild' (GdomeComment* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_c_replaceChild(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_c_removeChild' (GdomeComment* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_c_removeChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_c_appendChild' (GdomeComment* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_c_appendChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_c_hasChildNodes' (GdomeComment* GdomeException*) */
extern inline int cgate_gdome_c_hasChildNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_c_cloneNode' (GdomeComment* GdomeBoolean GdomeException*) */
extern inline unsigned int cgate_gdome_c_cloneNode(unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_c_normalize' (GdomeComment* GdomeException*) */
extern inline void cgate_gdome_c_normalize(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_c_isSupported' (GdomeComment* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline int cgate_gdome_c_isSupported(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_c_namespaceURI' (GdomeComment* GdomeException*) */
extern inline unsigned int cgate_gdome_c_namespaceURI(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_c_prefix' (GdomeComment* GdomeException*) */
extern inline unsigned int cgate_gdome_c_prefix(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_c_set_prefix' (GdomeComment* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_c_set_prefix(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_c_localName' (GdomeComment* GdomeException*) */
extern inline unsigned int cgate_gdome_c_localName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_c_hasAttributes' (GdomeComment* GdomeException*) */
extern inline int cgate_gdome_c_hasAttributes(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_c_addEventListener' (GdomeComment* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_c_addEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_c_removeEventListener' (GdomeComment* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_c_removeEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_c_dispatchEvent' (GdomeComment* GdomeEvent* GdomeException*) */
extern inline int cgate_gdome_c_dispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_c_subTreeDispatchEvent' (GdomeComment* GdomeEvent* GdomeException*) */
extern inline void cgate_gdome_c_subTreeDispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_c_canAppend' (GdomeComment* GdomeNode* GdomeException*) */
extern inline int cgate_gdome_c_canAppend(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeText*' 'gdome_cds_splitText' (GdomeCDATASection* gulong GdomeException*) */
extern inline unsigned int cgate_gdome_cds_splitText(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_cds_data' (GdomeCDATASection* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_data(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cds_set_data' (GdomeCDATASection* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_cds_set_data(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'gulong' 'gdome_cds_length' (GdomeCDATASection* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_length(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_cds_substringData' (GdomeCDATASection* gulong gulong GdomeException*) */
extern inline unsigned int cgate_gdome_cds_substringData(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cds_appendData' (GdomeCDATASection* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_cds_appendData(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cds_insertData' (GdomeCDATASection* gulong GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_cds_insertData(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cds_deleteData' (GdomeCDATASection* gulong gulong GdomeException*) */
extern inline void cgate_gdome_cds_deleteData(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cds_replaceData' (GdomeCDATASection* gulong gulong GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_cds_replaceData(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cds_ref' (GdomeCDATASection* GdomeException*) */
extern inline void cgate_gdome_cds_ref(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cds_unref' (GdomeCDATASection* GdomeException*) */
extern inline void cgate_gdome_cds_unref(unsigned int, unsigned int);

/* C-Wrapper for 'gpointer' 'gdome_cds_query_interface' (GdomeCDATASection* const char* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_query_interface(unsigned int, const char *, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_cds_nodeName' (GdomeCDATASection* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_nodeName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_cds_nodeValue' (GdomeCDATASection* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_nodeValue(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cds_set_nodeValue' (GdomeCDATASection* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_cds_set_nodeValue(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'unsigned short' 'gdome_cds_nodeType' (GdomeCDATASection* GdomeException*) */
extern inline unsigned short int cgate_gdome_cds_nodeType(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cds_parentNode' (GdomeCDATASection* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_parentNode(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_cds_childNodes' (GdomeCDATASection* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_childNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cds_firstChild' (GdomeCDATASection* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_firstChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cds_lastChild' (GdomeCDATASection* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_lastChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cds_previousSibling' (GdomeCDATASection* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_previousSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cds_nextSibling' (GdomeCDATASection* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_nextSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNamedNodeMap*' 'gdome_cds_attributes' (GdomeCDATASection* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_attributes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocument*' 'gdome_cds_ownerDocument' (GdomeCDATASection* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_ownerDocument(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cds_insertBefore' (GdomeCDATASection* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_insertBefore(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cds_replaceChild' (GdomeCDATASection* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_replaceChild(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cds_removeChild' (GdomeCDATASection* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_removeChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cds_appendChild' (GdomeCDATASection* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_appendChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_cds_hasChildNodes' (GdomeCDATASection* GdomeException*) */
extern inline int cgate_gdome_cds_hasChildNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_cds_cloneNode' (GdomeCDATASection* GdomeBoolean GdomeException*) */
extern inline unsigned int cgate_gdome_cds_cloneNode(unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cds_normalize' (GdomeCDATASection* GdomeException*) */
extern inline void cgate_gdome_cds_normalize(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_cds_isSupported' (GdomeCDATASection* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline int cgate_gdome_cds_isSupported(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_cds_namespaceURI' (GdomeCDATASection* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_namespaceURI(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_cds_prefix' (GdomeCDATASection* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_prefix(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cds_set_prefix' (GdomeCDATASection* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_cds_set_prefix(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_cds_localName' (GdomeCDATASection* GdomeException*) */
extern inline unsigned int cgate_gdome_cds_localName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_cds_hasAttributes' (GdomeCDATASection* GdomeException*) */
extern inline int cgate_gdome_cds_hasAttributes(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cds_addEventListener' (GdomeCDATASection* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_cds_addEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cds_removeEventListener' (GdomeCDATASection* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_cds_removeEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_cds_dispatchEvent' (GdomeCDATASection* GdomeEvent* GdomeException*) */
extern inline int cgate_gdome_cds_dispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_cds_subTreeDispatchEvent' (GdomeCDATASection* GdomeEvent* GdomeException*) */
extern inline void cgate_gdome_cds_subTreeDispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_cds_canAppend' (GdomeCDATASection* GdomeNode* GdomeException*) */
extern inline int cgate_gdome_cds_canAppend(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_not_publicId' (GdomeNotation* GdomeException*) */
extern inline unsigned int cgate_gdome_not_publicId(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_not_systemId' (GdomeNotation* GdomeException*) */
extern inline unsigned int cgate_gdome_not_systemId(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_not_ref' (GdomeNotation* GdomeException*) */
extern inline void cgate_gdome_not_ref(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_not_unref' (GdomeNotation* GdomeException*) */
extern inline void cgate_gdome_not_unref(unsigned int, unsigned int);

/* C-Wrapper for 'gpointer' 'gdome_not_query_interface' (GdomeNotation* const char* GdomeException*) */
extern inline unsigned int cgate_gdome_not_query_interface(unsigned int, const char *, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_not_nodeName' (GdomeNotation* GdomeException*) */
extern inline unsigned int cgate_gdome_not_nodeName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_not_nodeValue' (GdomeNotation* GdomeException*) */
extern inline unsigned int cgate_gdome_not_nodeValue(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_not_set_nodeValue' (GdomeNotation* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_not_set_nodeValue(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'unsigned short' 'gdome_not_nodeType' (GdomeNotation* GdomeException*) */
extern inline unsigned short int cgate_gdome_not_nodeType(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_not_parentNode' (GdomeNotation* GdomeException*) */
extern inline unsigned int cgate_gdome_not_parentNode(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_not_childNodes' (GdomeNotation* GdomeException*) */
extern inline unsigned int cgate_gdome_not_childNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_not_firstChild' (GdomeNotation* GdomeException*) */
extern inline unsigned int cgate_gdome_not_firstChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_not_lastChild' (GdomeNotation* GdomeException*) */
extern inline unsigned int cgate_gdome_not_lastChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_not_previousSibling' (GdomeNotation* GdomeException*) */
extern inline unsigned int cgate_gdome_not_previousSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_not_nextSibling' (GdomeNotation* GdomeException*) */
extern inline unsigned int cgate_gdome_not_nextSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNamedNodeMap*' 'gdome_not_attributes' (GdomeNotation* GdomeException*) */
extern inline unsigned int cgate_gdome_not_attributes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocument*' 'gdome_not_ownerDocument' (GdomeNotation* GdomeException*) */
extern inline unsigned int cgate_gdome_not_ownerDocument(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_not_insertBefore' (GdomeNotation* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_not_insertBefore(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_not_replaceChild' (GdomeNotation* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_not_replaceChild(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_not_removeChild' (GdomeNotation* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_not_removeChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_not_appendChild' (GdomeNotation* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_not_appendChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_not_hasChildNodes' (GdomeNotation* GdomeException*) */
extern inline int cgate_gdome_not_hasChildNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_not_cloneNode' (GdomeNotation* GdomeBoolean GdomeException*) */
extern inline unsigned int cgate_gdome_not_cloneNode(unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_not_normalize' (GdomeNotation* GdomeException*) */
extern inline void cgate_gdome_not_normalize(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_not_isSupported' (GdomeNotation* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline int cgate_gdome_not_isSupported(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_not_namespaceURI' (GdomeNotation* GdomeException*) */
extern inline unsigned int cgate_gdome_not_namespaceURI(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_not_prefix' (GdomeNotation* GdomeException*) */
extern inline unsigned int cgate_gdome_not_prefix(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_not_set_prefix' (GdomeNotation* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_not_set_prefix(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_not_localName' (GdomeNotation* GdomeException*) */
extern inline unsigned int cgate_gdome_not_localName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_not_hasAttributes' (GdomeNotation* GdomeException*) */
extern inline int cgate_gdome_not_hasAttributes(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_not_addEventListener' (GdomeNotation* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_not_addEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_not_removeEventListener' (GdomeNotation* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_not_removeEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_not_dispatchEvent' (GdomeNotation* GdomeEvent* GdomeException*) */
extern inline int cgate_gdome_not_dispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_not_subTreeDispatchEvent' (GdomeNotation* GdomeEvent* GdomeException*) */
extern inline void cgate_gdome_not_subTreeDispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_not_canAppend' (GdomeNotation* GdomeNode* GdomeException*) */
extern inline int cgate_gdome_not_canAppend(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_ent_publicId' (GdomeEntity* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_publicId(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_ent_systemId' (GdomeEntity* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_systemId(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_ent_notationName' (GdomeEntity* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_notationName(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_ent_ref' (GdomeEntity* GdomeException*) */
extern inline void cgate_gdome_ent_ref(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_ent_unref' (GdomeEntity* GdomeException*) */
extern inline void cgate_gdome_ent_unref(unsigned int, unsigned int);

/* C-Wrapper for 'gpointer' 'gdome_ent_query_interface' (GdomeEntity* const char* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_query_interface(unsigned int, const char *, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_ent_nodeName' (GdomeEntity* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_nodeName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_ent_nodeValue' (GdomeEntity* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_nodeValue(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_ent_set_nodeValue' (GdomeEntity* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_ent_set_nodeValue(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'unsigned short' 'gdome_ent_nodeType' (GdomeEntity* GdomeException*) */
extern inline unsigned short int cgate_gdome_ent_nodeType(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_ent_parentNode' (GdomeEntity* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_parentNode(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_ent_childNodes' (GdomeEntity* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_childNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_ent_firstChild' (GdomeEntity* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_firstChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_ent_lastChild' (GdomeEntity* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_lastChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_ent_previousSibling' (GdomeEntity* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_previousSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_ent_nextSibling' (GdomeEntity* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_nextSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNamedNodeMap*' 'gdome_ent_attributes' (GdomeEntity* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_attributes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocument*' 'gdome_ent_ownerDocument' (GdomeEntity* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_ownerDocument(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_ent_insertBefore' (GdomeEntity* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_insertBefore(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_ent_replaceChild' (GdomeEntity* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_replaceChild(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_ent_removeChild' (GdomeEntity* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_removeChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_ent_appendChild' (GdomeEntity* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_appendChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_ent_hasChildNodes' (GdomeEntity* GdomeException*) */
extern inline int cgate_gdome_ent_hasChildNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_ent_cloneNode' (GdomeEntity* GdomeBoolean GdomeException*) */
extern inline unsigned int cgate_gdome_ent_cloneNode(unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_ent_normalize' (GdomeEntity* GdomeException*) */
extern inline void cgate_gdome_ent_normalize(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_ent_isSupported' (GdomeEntity* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline int cgate_gdome_ent_isSupported(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_ent_namespaceURI' (GdomeEntity* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_namespaceURI(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_ent_prefix' (GdomeEntity* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_prefix(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_ent_set_prefix' (GdomeEntity* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_ent_set_prefix(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_ent_localName' (GdomeEntity* GdomeException*) */
extern inline unsigned int cgate_gdome_ent_localName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_ent_hasAttributes' (GdomeEntity* GdomeException*) */
extern inline int cgate_gdome_ent_hasAttributes(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_ent_addEventListener' (GdomeEntity* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_ent_addEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_ent_removeEventListener' (GdomeEntity* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_ent_removeEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_ent_dispatchEvent' (GdomeEntity* GdomeEvent* GdomeException*) */
extern inline int cgate_gdome_ent_dispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_ent_subTreeDispatchEvent' (GdomeEntity* GdomeEvent* GdomeException*) */
extern inline void cgate_gdome_ent_subTreeDispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_ent_canAppend' (GdomeEntity* GdomeNode* GdomeException*) */
extern inline int cgate_gdome_ent_canAppend(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_er_ref' (GdomeEntityReference* GdomeException*) */
extern inline void cgate_gdome_er_ref(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_er_unref' (GdomeEntityReference* GdomeException*) */
extern inline void cgate_gdome_er_unref(unsigned int, unsigned int);

/* C-Wrapper for 'gpointer' 'gdome_er_query_interface' (GdomeEntityReference* const char* GdomeException*) */
extern inline unsigned int cgate_gdome_er_query_interface(unsigned int, const char *, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_er_nodeName' (GdomeEntityReference* GdomeException*) */
extern inline unsigned int cgate_gdome_er_nodeName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_er_nodeValue' (GdomeEntityReference* GdomeException*) */
extern inline unsigned int cgate_gdome_er_nodeValue(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_er_set_nodeValue' (GdomeEntityReference* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_er_set_nodeValue(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'unsigned short' 'gdome_er_nodeType' (GdomeEntityReference* GdomeException*) */
extern inline unsigned short int cgate_gdome_er_nodeType(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_er_parentNode' (GdomeEntityReference* GdomeException*) */
extern inline unsigned int cgate_gdome_er_parentNode(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_er_childNodes' (GdomeEntityReference* GdomeException*) */
extern inline unsigned int cgate_gdome_er_childNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_er_firstChild' (GdomeEntityReference* GdomeException*) */
extern inline unsigned int cgate_gdome_er_firstChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_er_lastChild' (GdomeEntityReference* GdomeException*) */
extern inline unsigned int cgate_gdome_er_lastChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_er_previousSibling' (GdomeEntityReference* GdomeException*) */
extern inline unsigned int cgate_gdome_er_previousSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_er_nextSibling' (GdomeEntityReference* GdomeException*) */
extern inline unsigned int cgate_gdome_er_nextSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNamedNodeMap*' 'gdome_er_attributes' (GdomeEntityReference* GdomeException*) */
extern inline unsigned int cgate_gdome_er_attributes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocument*' 'gdome_er_ownerDocument' (GdomeEntityReference* GdomeException*) */
extern inline unsigned int cgate_gdome_er_ownerDocument(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_er_insertBefore' (GdomeEntityReference* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_er_insertBefore(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_er_replaceChild' (GdomeEntityReference* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_er_replaceChild(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_er_removeChild' (GdomeEntityReference* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_er_removeChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_er_appendChild' (GdomeEntityReference* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_er_appendChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_er_hasChildNodes' (GdomeEntityReference* GdomeException*) */
extern inline int cgate_gdome_er_hasChildNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_er_cloneNode' (GdomeEntityReference* GdomeBoolean GdomeException*) */
extern inline unsigned int cgate_gdome_er_cloneNode(unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_er_normalize' (GdomeEntityReference* GdomeException*) */
extern inline void cgate_gdome_er_normalize(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_er_isSupported' (GdomeEntityReference* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline int cgate_gdome_er_isSupported(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_er_namespaceURI' (GdomeEntityReference* GdomeException*) */
extern inline unsigned int cgate_gdome_er_namespaceURI(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_er_prefix' (GdomeEntityReference* GdomeException*) */
extern inline unsigned int cgate_gdome_er_prefix(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_er_set_prefix' (GdomeEntityReference* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_er_set_prefix(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_er_localName' (GdomeEntityReference* GdomeException*) */
extern inline unsigned int cgate_gdome_er_localName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_er_hasAttributes' (GdomeEntityReference* GdomeException*) */
extern inline int cgate_gdome_er_hasAttributes(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_er_addEventListener' (GdomeEntityReference* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_er_addEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_er_removeEventListener' (GdomeEntityReference* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_er_removeEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_er_dispatchEvent' (GdomeEntityReference* GdomeEvent* GdomeException*) */
extern inline int cgate_gdome_er_dispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_er_subTreeDispatchEvent' (GdomeEntityReference* GdomeEvent* GdomeException*) */
extern inline void cgate_gdome_er_subTreeDispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_er_canAppend' (GdomeEntityReference* GdomeNode* GdomeException*) */
extern inline int cgate_gdome_er_canAppend(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_pi_target' (GdomeProcessingInstruction* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_target(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_pi_data' (GdomeProcessingInstruction* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_data(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_pi_set_data' (GdomeProcessingInstruction* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_pi_set_data(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_pi_ref' (GdomeProcessingInstruction* GdomeException*) */
extern inline void cgate_gdome_pi_ref(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_pi_unref' (GdomeProcessingInstruction* GdomeException*) */
extern inline void cgate_gdome_pi_unref(unsigned int, unsigned int);

/* C-Wrapper for 'gpointer' 'gdome_pi_query_interface' (GdomeProcessingInstruction* const char* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_query_interface(unsigned int, const char *, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_pi_nodeName' (GdomeProcessingInstruction* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_nodeName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_pi_nodeValue' (GdomeProcessingInstruction* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_nodeValue(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_pi_set_nodeValue' (GdomeProcessingInstruction* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_pi_set_nodeValue(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'unsigned short' 'gdome_pi_nodeType' (GdomeProcessingInstruction* GdomeException*) */
extern inline unsigned short int cgate_gdome_pi_nodeType(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_pi_parentNode' (GdomeProcessingInstruction* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_parentNode(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_pi_childNodes' (GdomeProcessingInstruction* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_childNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_pi_firstChild' (GdomeProcessingInstruction* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_firstChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_pi_lastChild' (GdomeProcessingInstruction* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_lastChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_pi_previousSibling' (GdomeProcessingInstruction* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_previousSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_pi_nextSibling' (GdomeProcessingInstruction* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_nextSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNamedNodeMap*' 'gdome_pi_attributes' (GdomeProcessingInstruction* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_attributes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocument*' 'gdome_pi_ownerDocument' (GdomeProcessingInstruction* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_ownerDocument(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_pi_insertBefore' (GdomeProcessingInstruction* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_insertBefore(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_pi_replaceChild' (GdomeProcessingInstruction* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_replaceChild(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_pi_removeChild' (GdomeProcessingInstruction* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_removeChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_pi_appendChild' (GdomeProcessingInstruction* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_appendChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_pi_hasChildNodes' (GdomeProcessingInstruction* GdomeException*) */
extern inline int cgate_gdome_pi_hasChildNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_pi_cloneNode' (GdomeProcessingInstruction* GdomeBoolean GdomeException*) */
extern inline unsigned int cgate_gdome_pi_cloneNode(unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_pi_normalize' (GdomeProcessingInstruction* GdomeException*) */
extern inline void cgate_gdome_pi_normalize(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_pi_isSupported' (GdomeProcessingInstruction* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline int cgate_gdome_pi_isSupported(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_pi_namespaceURI' (GdomeProcessingInstruction* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_namespaceURI(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_pi_prefix' (GdomeProcessingInstruction* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_prefix(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_pi_set_prefix' (GdomeProcessingInstruction* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_pi_set_prefix(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_pi_localName' (GdomeProcessingInstruction* GdomeException*) */
extern inline unsigned int cgate_gdome_pi_localName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_pi_hasAttributes' (GdomeProcessingInstruction* GdomeException*) */
extern inline int cgate_gdome_pi_hasAttributes(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_pi_addEventListener' (GdomeProcessingInstruction* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_pi_addEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_pi_removeEventListener' (GdomeProcessingInstruction* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_pi_removeEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_pi_dispatchEvent' (GdomeProcessingInstruction* GdomeEvent* GdomeException*) */
extern inline int cgate_gdome_pi_dispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_pi_subTreeDispatchEvent' (GdomeProcessingInstruction* GdomeEvent* GdomeException*) */
extern inline void cgate_gdome_pi_subTreeDispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_pi_canAppend' (GdomeProcessingInstruction* GdomeNode* GdomeException*) */
extern inline int cgate_gdome_pi_canAppend(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_dt_name' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_name(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNamedNodeMap*' 'gdome_dt_entities' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_entities(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNamedNodeMap*' 'gdome_dt_notations' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_notations(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_dt_publicId' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_publicId(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_dt_systemId' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_systemId(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_dt_internalSubset' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_internalSubset(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_dt_ref' (GdomeDocumentType* GdomeException*) */
extern inline void cgate_gdome_dt_ref(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_dt_unref' (GdomeDocumentType* GdomeException*) */
extern inline void cgate_gdome_dt_unref(unsigned int, unsigned int);

/* C-Wrapper for 'gpointer' 'gdome_dt_query_interface' (GdomeDocumentType* const char* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_query_interface(unsigned int, const char *, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_dt_nodeName' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_nodeName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_dt_nodeValue' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_nodeValue(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_dt_set_nodeValue' (GdomeDocumentType* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_dt_set_nodeValue(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'unsigned short' 'gdome_dt_nodeType' (GdomeDocumentType* GdomeException*) */
extern inline unsigned short int cgate_gdome_dt_nodeType(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_dt_parentNode' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_parentNode(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNodeList*' 'gdome_dt_childNodes' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_childNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_dt_firstChild' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_firstChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_dt_lastChild' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_lastChild(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_dt_previousSibling' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_previousSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_dt_nextSibling' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_nextSibling(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNamedNodeMap*' 'gdome_dt_attributes' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_attributes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDocument*' 'gdome_dt_ownerDocument' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_ownerDocument(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_dt_insertBefore' (GdomeDocumentType* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_insertBefore(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_dt_replaceChild' (GdomeDocumentType* GdomeNode* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_replaceChild(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_dt_removeChild' (GdomeDocumentType* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_removeChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_dt_appendChild' (GdomeDocumentType* GdomeNode* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_appendChild(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_dt_hasChildNodes' (GdomeDocumentType* GdomeException*) */
extern inline int cgate_gdome_dt_hasChildNodes(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_dt_cloneNode' (GdomeDocumentType* GdomeBoolean GdomeException*) */
extern inline unsigned int cgate_gdome_dt_cloneNode(unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_dt_normalize' (GdomeDocumentType* GdomeException*) */
extern inline void cgate_gdome_dt_normalize(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_dt_isSupported' (GdomeDocumentType* GdomeDOMString* GdomeDOMString* GdomeException*) */
extern inline int cgate_gdome_dt_isSupported(unsigned int, unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_dt_namespaceURI' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_namespaceURI(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_dt_prefix' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_prefix(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_dt_set_prefix' (GdomeDocumentType* GdomeDOMString* GdomeException*) */
extern inline void cgate_gdome_dt_set_prefix(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeDOMString*' 'gdome_dt_localName' (GdomeDocumentType* GdomeException*) */
extern inline unsigned int cgate_gdome_dt_localName(unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_dt_hasAttributes' (GdomeDocumentType* GdomeException*) */
extern inline int cgate_gdome_dt_hasAttributes(unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_dt_addEventListener' (GdomeDocumentType* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_dt_addEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'void' 'gdome_dt_removeEventListener' (GdomeDocumentType* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
extern inline void cgate_gdome_dt_removeEventListener(unsigned int, unsigned int, unsigned int, int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_dt_dispatchEvent' (GdomeDocumentType* GdomeEvent* GdomeException*) */
extern inline int cgate_gdome_dt_dispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'void' 'gdome_dt_subTreeDispatchEvent' (GdomeDocumentType* GdomeEvent* GdomeException*) */
extern inline void cgate_gdome_dt_subTreeDispatchEvent(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeBoolean' 'gdome_dt_canAppend' (GdomeDocumentType* GdomeNode* GdomeException*) */
extern inline int cgate_gdome_dt_canAppend(unsigned int, unsigned int, unsigned int);

/* C-Wrapper for 'GdomeException*' 'gdome_extra_exc_new' () */
extern inline unsigned int cgate_gdome_extra_exc_new();

/* C-Wrapper for 'void' 'gdome_extra_exc_del' (GdomeException*) */
extern inline void cgate_gdome_extra_exc_del(unsigned int);

/* C-Wrapper for 'GdomeException' 'gdome_extra_exc_getvalue' (GdomeException*) */
extern inline int cgate_gdome_extra_exc_getvalue(unsigned int);

/* C-Wrapper for 'void' 'gdome_extra_exc_setvalue' (GdomeException* GdomeException) */
extern inline void cgate_gdome_extra_exc_setvalue(unsigned int, int);

/* C-Wrapper for 'GdomeText*' 'gdome_extra_cast_node_to_text' (GdomeNode*) */
extern inline unsigned int cgate_gdome_extra_cast_node_to_text(unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_extra_cast_text_to_node' (GdomeText*) */
extern inline unsigned int cgate_gdome_extra_cast_text_to_node(unsigned int);

/* C-Wrapper for 'GdomeNode*' 'gdome_extra_cast_element_to_node' (GdomeElement*) */
extern inline unsigned int cgate_gdome_extra_cast_element_to_node(unsigned int);


