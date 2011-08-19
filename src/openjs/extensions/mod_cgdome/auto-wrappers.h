/* Wrapper for 'GdomeDOMString*' 'gdome_str_mkref_dup' (const gchar*) */
v8::Handle<v8::Value> do_gdome_str_mkref_dup(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_str_ref' (GdomeDOMString*) */
v8::Handle<v8::Value> do_gdome_str_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_str_unref' (GdomeDOMString*) */
v8::Handle<v8::Value> do_gdome_str_unref(const v8::Arguments&);

/* Wrapper for 'int' 'gdome_str_length' (GdomeDOMString*) */
v8::Handle<v8::Value> do_gdome_str_length(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_str_isEmpty' (GdomeDOMString*) */
v8::Handle<v8::Value> do_gdome_str_isEmpty(const v8::Arguments&);

/* Wrapper for 'gchar' 'gdome_str_charAt' (GdomeDOMString* int) */
v8::Handle<v8::Value> do_gdome_str_charAt(const v8::Arguments&);

/* Wrapper for 'GdomeDOMImplementation*' 'gdome_di_mkref' () */
v8::Handle<v8::Value> do_gdome_di_mkref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_di_ref' (GdomeDOMImplementation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_di_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_di_unref' (GdomeDOMImplementation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_di_unref(const v8::Arguments&);

/* Wrapper for 'GdomeDocumentType*' 'gdome_di_createDocumentType' (GdomeDOMImplementation* GdomeDOMString* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_di_createDocumentType(const v8::Arguments&);

/* Wrapper for 'GdomeDocument*' 'gdome_di_createDocument' (GdomeDOMImplementation* GdomeDOMString* GdomeDOMString* GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_di_createDocument(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_di_freeDoc' (GdomeDOMImplementation* GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_di_freeDoc(const v8::Arguments&);

/* Wrapper for 'GdomeDocument*' 'gdome_di_createDocFromURI' (GdomeDOMImplementation* const char* unsigned int GdomeException*) */
v8::Handle<v8::Value> do_gdome_di_createDocFromURI(const v8::Arguments&);

/* Wrapper for 'GdomeDocument*' 'gdome_di_createDocFromMemory' (GdomeDOMImplementation* char* unsigned int GdomeException*) */
v8::Handle<v8::Value> do_gdome_di_createDocFromMemory(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_di_saveDocToFile' (GdomeDOMImplementation* GdomeDocument* const char* GdomeSavingCode GdomeException*) */
v8::Handle<v8::Value> do_gdome_di_saveDocToFile(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_di_saveDocToFileEnc' (GdomeDOMImplementation* GdomeDocument* const char* const char* GdomeSavingCode GdomeException*) */
v8::Handle<v8::Value> do_gdome_di_saveDocToFileEnc(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_di_saveDocToMemory' (GdomeDOMImplementation* GdomeDocument* char** GdomeSavingCode GdomeException*) */
v8::Handle<v8::Value> do_gdome_di_saveDocToMemory(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_di_saveDocToMemoryEnc' (GdomeDOMImplementation* GdomeDocument* char** const char* GdomeSavingCode GdomeException*) */
v8::Handle<v8::Value> do_gdome_di_saveDocToMemoryEnc(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_df_ref' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_df_unref' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_unref(const v8::Arguments&);

/* Wrapper for 'gpointer' 'gdome_df_query_interface' (GdomeDocumentFragment* const char* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_query_interface(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_df_nodeName' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_nodeName(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_df_nodeValue' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_nodeValue(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_df_set_nodeValue' (GdomeDocumentFragment* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_set_nodeValue(const v8::Arguments&);

/* Wrapper for 'unsigned short' 'gdome_df_nodeType' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_nodeType(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_df_parentNode' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_parentNode(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_df_childNodes' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_childNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_df_firstChild' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_firstChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_df_lastChild' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_lastChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_df_previousSibling' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_previousSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_df_nextSibling' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_nextSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNamedNodeMap*' 'gdome_df_attributes' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_attributes(const v8::Arguments&);

/* Wrapper for 'GdomeDocument*' 'gdome_df_ownerDocument' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_ownerDocument(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_df_insertBefore' (GdomeDocumentFragment* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_insertBefore(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_df_replaceChild' (GdomeDocumentFragment* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_replaceChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_df_removeChild' (GdomeDocumentFragment* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_removeChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_df_appendChild' (GdomeDocumentFragment* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_appendChild(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_df_hasChildNodes' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_hasChildNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_df_cloneNode' (GdomeDocumentFragment* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_cloneNode(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_df_normalize' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_normalize(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_df_isSupported' (GdomeDocumentFragment* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_isSupported(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_df_namespaceURI' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_namespaceURI(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_df_prefix' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_prefix(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_df_set_prefix' (GdomeDocumentFragment* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_set_prefix(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_df_localName' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_localName(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_df_hasAttributes' (GdomeDocumentFragment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_hasAttributes(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_df_addEventListener' (GdomeDocumentFragment* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_addEventListener(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_df_removeEventListener' (GdomeDocumentFragment* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_removeEventListener(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_df_dispatchEvent' (GdomeDocumentFragment* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_dispatchEvent(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_df_subTreeDispatchEvent' (GdomeDocumentFragment* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_subTreeDispatchEvent(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_df_canAppend' (GdomeDocumentFragment* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_df_canAppend(const v8::Arguments&);

/* Wrapper for 'GdomeDocumentType*' 'gdome_doc_doctype' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_doctype(const v8::Arguments&);

/* Wrapper for 'GdomeDOMImplementation*' 'gdome_doc_implementation' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_implementation(const v8::Arguments&);

/* Wrapper for 'GdomeElement*' 'gdome_doc_documentElement' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_documentElement(const v8::Arguments&);

/* Wrapper for 'GdomeElement*' 'gdome_doc_createElement' (GdomeDocument* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_createElement(const v8::Arguments&);

/* Wrapper for 'GdomeDocumentFragment*' 'gdome_doc_createDocumentFragment' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_createDocumentFragment(const v8::Arguments&);

/* Wrapper for 'GdomeText*' 'gdome_doc_createTextNode' (GdomeDocument* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_createTextNode(const v8::Arguments&);

/* Wrapper for 'GdomeComment*' 'gdome_doc_createComment' (GdomeDocument* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_createComment(const v8::Arguments&);

/* Wrapper for 'GdomeCDATASection*' 'gdome_doc_createCDATASection' (GdomeDocument* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_createCDATASection(const v8::Arguments&);

/* Wrapper for 'GdomeProcessingInstruction*' 'gdome_doc_createProcessingInstruction' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_createProcessingInstruction(const v8::Arguments&);

/* Wrapper for 'GdomeAttr*' 'gdome_doc_createAttribute' (GdomeDocument* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_createAttribute(const v8::Arguments&);

/* Wrapper for 'GdomeEntityReference*' 'gdome_doc_createEntityReference' (GdomeDocument* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_createEntityReference(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_doc_getElementsByTagName' (GdomeDocument* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_getElementsByTagName(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_doc_importNode' (GdomeDocument* GdomeNode* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_importNode(const v8::Arguments&);

/* Wrapper for 'GdomeElement*' 'gdome_doc_createElementNS' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_createElementNS(const v8::Arguments&);

/* Wrapper for 'GdomeAttr*' 'gdome_doc_createAttributeNS' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_createAttributeNS(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_doc_getElementsByTagNameNS' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_getElementsByTagNameNS(const v8::Arguments&);

/* Wrapper for 'GdomeElement*' 'gdome_doc_getElementById' (GdomeDocument* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_getElementById(const v8::Arguments&);

/* Wrapper for 'GdomeEvent*' 'gdome_doc_createEvent' (GdomeDocument* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_createEvent(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_doc_ref' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_doc_unref' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_unref(const v8::Arguments&);

/* Wrapper for 'gpointer' 'gdome_doc_query_interface' (GdomeDocument* const char* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_query_interface(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_doc_nodeName' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_nodeName(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_doc_nodeValue' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_nodeValue(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_doc_set_nodeValue' (GdomeDocument* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_set_nodeValue(const v8::Arguments&);

/* Wrapper for 'unsigned short' 'gdome_doc_nodeType' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_nodeType(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_doc_parentNode' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_parentNode(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_doc_childNodes' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_childNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_doc_firstChild' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_firstChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_doc_lastChild' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_lastChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_doc_previousSibling' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_previousSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_doc_nextSibling' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_nextSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNamedNodeMap*' 'gdome_doc_attributes' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_attributes(const v8::Arguments&);

/* Wrapper for 'GdomeDocument*' 'gdome_doc_ownerDocument' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_ownerDocument(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_doc_insertBefore' (GdomeDocument* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_insertBefore(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_doc_replaceChild' (GdomeDocument* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_replaceChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_doc_removeChild' (GdomeDocument* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_removeChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_doc_appendChild' (GdomeDocument* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_appendChild(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_doc_hasChildNodes' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_hasChildNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_doc_cloneNode' (GdomeDocument* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_cloneNode(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_doc_normalize' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_normalize(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_doc_isSupported' (GdomeDocument* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_isSupported(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_doc_namespaceURI' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_namespaceURI(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_doc_prefix' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_prefix(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_doc_set_prefix' (GdomeDocument* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_set_prefix(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_doc_localName' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_localName(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_doc_hasAttributes' (GdomeDocument* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_hasAttributes(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_doc_addEventListener' (GdomeDocument* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_addEventListener(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_doc_removeEventListener' (GdomeDocument* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_removeEventListener(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_doc_dispatchEvent' (GdomeDocument* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_dispatchEvent(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_doc_subTreeDispatchEvent' (GdomeDocument* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_subTreeDispatchEvent(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_doc_canAppend' (GdomeDocument* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_doc_canAppend(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_n_ref' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_n_unref' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_unref(const v8::Arguments&);

/* Wrapper for 'gpointer' 'gdome_n_query_interface' (GdomeNode* const char* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_query_interface(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_n_nodeName' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_nodeName(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_n_nodeValue' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_nodeValue(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_n_set_nodeValue' (GdomeNode* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_set_nodeValue(const v8::Arguments&);

/* Wrapper for 'unsigned short' 'gdome_n_nodeType' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_nodeType(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_n_parentNode' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_parentNode(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_n_childNodes' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_childNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_n_firstChild' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_firstChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_n_lastChild' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_lastChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_n_previousSibling' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_previousSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_n_nextSibling' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_nextSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNamedNodeMap*' 'gdome_n_attributes' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_attributes(const v8::Arguments&);

/* Wrapper for 'GdomeDocument*' 'gdome_n_ownerDocument' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_ownerDocument(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_n_insertBefore' (GdomeNode* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_insertBefore(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_n_replaceChild' (GdomeNode* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_replaceChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_n_removeChild' (GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_removeChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_n_appendChild' (GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_appendChild(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_n_hasChildNodes' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_hasChildNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_n_cloneNode' (GdomeNode* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_cloneNode(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_n_normalize' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_normalize(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_n_isSupported' (GdomeNode* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_isSupported(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_n_namespaceURI' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_namespaceURI(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_n_prefix' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_prefix(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_n_set_prefix' (GdomeNode* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_set_prefix(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_n_localName' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_localName(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_n_hasAttributes' (GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_hasAttributes(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_n_addEventListener' (GdomeNode* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_addEventListener(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_n_removeEventListener' (GdomeNode* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_removeEventListener(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_n_dispatchEvent' (GdomeNode* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_dispatchEvent(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_n_subTreeDispatchEvent' (GdomeNode* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_subTreeDispatchEvent(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_n_canAppend' (GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_n_canAppend(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_nl_ref' (GdomeNodeList* GdomeException*) */
v8::Handle<v8::Value> do_gdome_nl_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_nl_unref' (GdomeNodeList* GdomeException*) */
v8::Handle<v8::Value> do_gdome_nl_unref(const v8::Arguments&);

/* Wrapper for 'gpointer' 'gdome_nl_query_interface' (GdomeNodeList* const char* GdomeException*) */
v8::Handle<v8::Value> do_gdome_nl_query_interface(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_nl_item' (GdomeNodeList* gulong GdomeException*) */
v8::Handle<v8::Value> do_gdome_nl_item(const v8::Arguments&);

/* Wrapper for 'gulong' 'gdome_nl_length' (GdomeNodeList* GdomeException*) */
v8::Handle<v8::Value> do_gdome_nl_length(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_nnm_ref' (GdomeNamedNodeMap* GdomeException*) */
v8::Handle<v8::Value> do_gdome_nnm_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_nnm_unref' (GdomeNamedNodeMap* GdomeException*) */
v8::Handle<v8::Value> do_gdome_nnm_unref(const v8::Arguments&);

/* Wrapper for 'gpointer' 'gdome_nnm_query_interface' (GdomeNamedNodeMap* const char* GdomeException*) */
v8::Handle<v8::Value> do_gdome_nnm_query_interface(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_nnm_getNamedItem' (GdomeNamedNodeMap* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_nnm_getNamedItem(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_nnm_setNamedItem' (GdomeNamedNodeMap* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_nnm_setNamedItem(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_nnm_removeNamedItem' (GdomeNamedNodeMap* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_nnm_removeNamedItem(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_nnm_item' (GdomeNamedNodeMap* gulong GdomeException*) */
v8::Handle<v8::Value> do_gdome_nnm_item(const v8::Arguments&);

/* Wrapper for 'gulong' 'gdome_nnm_length' (GdomeNamedNodeMap* GdomeException*) */
v8::Handle<v8::Value> do_gdome_nnm_length(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_nnm_getNamedItemNS' (GdomeNamedNodeMap* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_nnm_getNamedItemNS(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_nnm_setNamedItemNS' (GdomeNamedNodeMap* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_nnm_setNamedItemNS(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_nnm_removeNamedItemNS' (GdomeNamedNodeMap* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_nnm_removeNamedItemNS(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_cd_data' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_data(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cd_set_data' (GdomeCharacterData* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_set_data(const v8::Arguments&);

/* Wrapper for 'gulong' 'gdome_cd_length' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_length(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_cd_substringData' (GdomeCharacterData* gulong gulong GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_substringData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cd_appendData' (GdomeCharacterData* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_appendData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cd_insertData' (GdomeCharacterData* gulong GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_insertData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cd_deleteData' (GdomeCharacterData* gulong gulong GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_deleteData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cd_replaceData' (GdomeCharacterData* gulong gulong GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_replaceData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cd_ref' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cd_unref' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_unref(const v8::Arguments&);

/* Wrapper for 'gpointer' 'gdome_cd_query_interface' (GdomeCharacterData* const char* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_query_interface(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_cd_nodeName' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_nodeName(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_cd_nodeValue' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_nodeValue(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cd_set_nodeValue' (GdomeCharacterData* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_set_nodeValue(const v8::Arguments&);

/* Wrapper for 'unsigned short' 'gdome_cd_nodeType' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_nodeType(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cd_parentNode' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_parentNode(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_cd_childNodes' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_childNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cd_firstChild' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_firstChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cd_lastChild' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_lastChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cd_previousSibling' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_previousSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cd_nextSibling' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_nextSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNamedNodeMap*' 'gdome_cd_attributes' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_attributes(const v8::Arguments&);

/* Wrapper for 'GdomeDocument*' 'gdome_cd_ownerDocument' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_ownerDocument(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cd_insertBefore' (GdomeCharacterData* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_insertBefore(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cd_replaceChild' (GdomeCharacterData* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_replaceChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cd_removeChild' (GdomeCharacterData* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_removeChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cd_appendChild' (GdomeCharacterData* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_appendChild(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_cd_hasChildNodes' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_hasChildNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cd_cloneNode' (GdomeCharacterData* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_cloneNode(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cd_normalize' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_normalize(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_cd_isSupported' (GdomeCharacterData* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_isSupported(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_cd_namespaceURI' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_namespaceURI(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_cd_prefix' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_prefix(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cd_set_prefix' (GdomeCharacterData* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_set_prefix(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_cd_localName' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_localName(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_cd_hasAttributes' (GdomeCharacterData* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_hasAttributes(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cd_addEventListener' (GdomeCharacterData* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_addEventListener(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cd_removeEventListener' (GdomeCharacterData* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_removeEventListener(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_cd_dispatchEvent' (GdomeCharacterData* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_dispatchEvent(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cd_subTreeDispatchEvent' (GdomeCharacterData* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_subTreeDispatchEvent(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_cd_canAppend' (GdomeCharacterData* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cd_canAppend(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_a_ref' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_a_unref' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_unref(const v8::Arguments&);

/* Wrapper for 'gpointer' 'gdome_a_query_interface' (GdomeAttr* const char* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_query_interface(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_a_name' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_name(const v8::Arguments&);

/* Wrapper for 'GdomeElement*' 'gdome_a_ownerElement' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_ownerElement(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_a_specified' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_specified(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_a_value' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_value(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_a_set_value' (GdomeAttr* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_set_value(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_a_nodeName' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_nodeName(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_a_nodeValue' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_nodeValue(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_a_set_nodeValue' (GdomeAttr* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_set_nodeValue(const v8::Arguments&);

/* Wrapper for 'unsigned short' 'gdome_a_nodeType' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_nodeType(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_a_parentNode' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_parentNode(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_a_childNodes' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_childNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_a_firstChild' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_firstChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_a_lastChild' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_lastChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_a_previousSibling' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_previousSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_a_nextSibling' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_nextSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNamedNodeMap*' 'gdome_a_attributes' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_attributes(const v8::Arguments&);

/* Wrapper for 'GdomeDocument*' 'gdome_a_ownerDocument' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_ownerDocument(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_a_insertBefore' (GdomeAttr* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_insertBefore(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_a_replaceChild' (GdomeAttr* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_replaceChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_a_removeChild' (GdomeAttr* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_removeChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_a_appendChild' (GdomeAttr* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_appendChild(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_a_hasChildNodes' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_hasChildNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_a_cloneNode' (GdomeAttr* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_cloneNode(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_a_normalize' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_normalize(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_a_isSupported' (GdomeAttr* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_isSupported(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_a_namespaceURI' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_namespaceURI(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_a_prefix' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_prefix(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_a_set_prefix' (GdomeAttr* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_set_prefix(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_a_localName' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_localName(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_a_hasAttributes' (GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_hasAttributes(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_a_addEventListener' (GdomeAttr* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_addEventListener(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_a_removeEventListener' (GdomeAttr* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_removeEventListener(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_a_dispatchEvent' (GdomeAttr* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_dispatchEvent(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_a_subTreeDispatchEvent' (GdomeAttr* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_subTreeDispatchEvent(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_a_canAppend' (GdomeAttr* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_a_canAppend(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_el_tagName' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_tagName(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_el_getAttribute' (GdomeElement* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_getAttribute(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_el_setAttribute' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_setAttribute(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_el_removeAttribute' (GdomeElement* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_removeAttribute(const v8::Arguments&);

/* Wrapper for 'GdomeAttr*' 'gdome_el_getAttributeNode' (GdomeElement* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_getAttributeNode(const v8::Arguments&);

/* Wrapper for 'GdomeAttr*' 'gdome_el_setAttributeNode' (GdomeElement* GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_setAttributeNode(const v8::Arguments&);

/* Wrapper for 'GdomeAttr*' 'gdome_el_removeAttributeNode' (GdomeElement* GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_removeAttributeNode(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_el_getElementsByTagName' (GdomeElement* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_getElementsByTagName(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_el_getAttributeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_getAttributeNS(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_el_setAttributeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_setAttributeNS(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_el_removeAttributeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_removeAttributeNS(const v8::Arguments&);

/* Wrapper for 'GdomeAttr*' 'gdome_el_getAttributeNodeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_getAttributeNodeNS(const v8::Arguments&);

/* Wrapper for 'GdomeAttr*' 'gdome_el_setAttributeNodeNS' (GdomeElement* GdomeAttr* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_setAttributeNodeNS(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_el_getElementsByTagNameNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_getElementsByTagNameNS(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_el_hasAttribute' (GdomeElement* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_hasAttribute(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_el_hasAttributeNS' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_hasAttributeNS(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_el_ref' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_el_unref' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_unref(const v8::Arguments&);

/* Wrapper for 'gpointer' 'gdome_el_query_interface' (GdomeElement* const char* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_query_interface(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_el_nodeName' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_nodeName(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_el_nodeValue' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_nodeValue(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_el_set_nodeValue' (GdomeElement* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_set_nodeValue(const v8::Arguments&);

/* Wrapper for 'unsigned short' 'gdome_el_nodeType' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_nodeType(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_el_parentNode' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_parentNode(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_el_childNodes' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_childNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_el_firstChild' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_firstChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_el_lastChild' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_lastChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_el_previousSibling' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_previousSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_el_nextSibling' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_nextSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNamedNodeMap*' 'gdome_el_attributes' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_attributes(const v8::Arguments&);

/* Wrapper for 'GdomeDocument*' 'gdome_el_ownerDocument' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_ownerDocument(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_el_insertBefore' (GdomeElement* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_insertBefore(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_el_replaceChild' (GdomeElement* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_replaceChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_el_removeChild' (GdomeElement* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_removeChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_el_appendChild' (GdomeElement* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_appendChild(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_el_hasChildNodes' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_hasChildNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_el_cloneNode' (GdomeElement* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_cloneNode(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_el_normalize' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_normalize(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_el_isSupported' (GdomeElement* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_isSupported(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_el_namespaceURI' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_namespaceURI(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_el_prefix' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_prefix(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_el_set_prefix' (GdomeElement* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_set_prefix(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_el_localName' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_localName(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_el_hasAttributes' (GdomeElement* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_hasAttributes(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_el_addEventListener' (GdomeElement* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_addEventListener(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_el_removeEventListener' (GdomeElement* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_removeEventListener(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_el_dispatchEvent' (GdomeElement* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_dispatchEvent(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_el_subTreeDispatchEvent' (GdomeElement* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_subTreeDispatchEvent(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_el_canAppend' (GdomeElement* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_el_canAppend(const v8::Arguments&);

/* Wrapper for 'GdomeText*' 'gdome_t_splitText' (GdomeText* gulong GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_splitText(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_t_data' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_data(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_t_set_data' (GdomeText* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_set_data(const v8::Arguments&);

/* Wrapper for 'gulong' 'gdome_t_length' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_length(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_t_substringData' (GdomeText* gulong gulong GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_substringData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_t_appendData' (GdomeText* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_appendData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_t_insertData' (GdomeText* gulong GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_insertData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_t_deleteData' (GdomeText* gulong gulong GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_deleteData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_t_replaceData' (GdomeText* gulong gulong GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_replaceData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_t_ref' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_t_unref' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_unref(const v8::Arguments&);

/* Wrapper for 'gpointer' 'gdome_t_query_interface' (GdomeText* const char* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_query_interface(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_t_nodeName' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_nodeName(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_t_nodeValue' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_nodeValue(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_t_set_nodeValue' (GdomeText* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_set_nodeValue(const v8::Arguments&);

/* Wrapper for 'unsigned short' 'gdome_t_nodeType' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_nodeType(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_t_parentNode' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_parentNode(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_t_childNodes' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_childNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_t_firstChild' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_firstChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_t_lastChild' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_lastChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_t_previousSibling' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_previousSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_t_nextSibling' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_nextSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNamedNodeMap*' 'gdome_t_attributes' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_attributes(const v8::Arguments&);

/* Wrapper for 'GdomeDocument*' 'gdome_t_ownerDocument' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_ownerDocument(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_t_insertBefore' (GdomeText* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_insertBefore(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_t_replaceChild' (GdomeText* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_replaceChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_t_removeChild' (GdomeText* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_removeChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_t_appendChild' (GdomeText* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_appendChild(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_t_hasChildNodes' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_hasChildNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_t_cloneNode' (GdomeText* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_cloneNode(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_t_normalize' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_normalize(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_t_isSupported' (GdomeText* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_isSupported(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_t_namespaceURI' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_namespaceURI(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_t_prefix' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_prefix(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_t_set_prefix' (GdomeText* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_set_prefix(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_t_localName' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_localName(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_t_hasAttributes' (GdomeText* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_hasAttributes(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_t_addEventListener' (GdomeText* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_addEventListener(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_t_removeEventListener' (GdomeText* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_removeEventListener(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_t_dispatchEvent' (GdomeText* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_dispatchEvent(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_t_subTreeDispatchEvent' (GdomeText* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_subTreeDispatchEvent(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_t_canAppend' (GdomeText* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_t_canAppend(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_c_data' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_data(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_c_set_data' (GdomeComment* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_set_data(const v8::Arguments&);

/* Wrapper for 'gulong' 'gdome_c_length' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_length(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_c_substringData' (GdomeComment* gulong gulong GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_substringData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_c_appendData' (GdomeComment* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_appendData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_c_insertData' (GdomeComment* gulong GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_insertData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_c_deleteData' (GdomeComment* gulong gulong GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_deleteData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_c_replaceData' (GdomeComment* gulong gulong GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_replaceData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_c_ref' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_c_unref' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_unref(const v8::Arguments&);

/* Wrapper for 'gpointer' 'gdome_c_query_interface' (GdomeComment* const char* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_query_interface(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_c_nodeName' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_nodeName(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_c_nodeValue' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_nodeValue(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_c_set_nodeValue' (GdomeComment* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_set_nodeValue(const v8::Arguments&);

/* Wrapper for 'unsigned short' 'gdome_c_nodeType' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_nodeType(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_c_parentNode' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_parentNode(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_c_childNodes' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_childNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_c_firstChild' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_firstChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_c_lastChild' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_lastChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_c_previousSibling' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_previousSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_c_nextSibling' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_nextSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNamedNodeMap*' 'gdome_c_attributes' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_attributes(const v8::Arguments&);

/* Wrapper for 'GdomeDocument*' 'gdome_c_ownerDocument' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_ownerDocument(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_c_insertBefore' (GdomeComment* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_insertBefore(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_c_replaceChild' (GdomeComment* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_replaceChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_c_removeChild' (GdomeComment* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_removeChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_c_appendChild' (GdomeComment* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_appendChild(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_c_hasChildNodes' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_hasChildNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_c_cloneNode' (GdomeComment* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_cloneNode(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_c_normalize' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_normalize(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_c_isSupported' (GdomeComment* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_isSupported(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_c_namespaceURI' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_namespaceURI(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_c_prefix' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_prefix(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_c_set_prefix' (GdomeComment* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_set_prefix(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_c_localName' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_localName(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_c_hasAttributes' (GdomeComment* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_hasAttributes(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_c_addEventListener' (GdomeComment* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_addEventListener(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_c_removeEventListener' (GdomeComment* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_removeEventListener(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_c_dispatchEvent' (GdomeComment* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_dispatchEvent(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_c_subTreeDispatchEvent' (GdomeComment* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_subTreeDispatchEvent(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_c_canAppend' (GdomeComment* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_c_canAppend(const v8::Arguments&);

/* Wrapper for 'GdomeText*' 'gdome_cds_splitText' (GdomeCDATASection* gulong GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_splitText(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_cds_data' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_data(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cds_set_data' (GdomeCDATASection* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_set_data(const v8::Arguments&);

/* Wrapper for 'gulong' 'gdome_cds_length' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_length(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_cds_substringData' (GdomeCDATASection* gulong gulong GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_substringData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cds_appendData' (GdomeCDATASection* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_appendData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cds_insertData' (GdomeCDATASection* gulong GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_insertData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cds_deleteData' (GdomeCDATASection* gulong gulong GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_deleteData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cds_replaceData' (GdomeCDATASection* gulong gulong GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_replaceData(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cds_ref' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cds_unref' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_unref(const v8::Arguments&);

/* Wrapper for 'gpointer' 'gdome_cds_query_interface' (GdomeCDATASection* const char* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_query_interface(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_cds_nodeName' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_nodeName(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_cds_nodeValue' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_nodeValue(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cds_set_nodeValue' (GdomeCDATASection* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_set_nodeValue(const v8::Arguments&);

/* Wrapper for 'unsigned short' 'gdome_cds_nodeType' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_nodeType(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cds_parentNode' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_parentNode(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_cds_childNodes' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_childNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cds_firstChild' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_firstChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cds_lastChild' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_lastChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cds_previousSibling' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_previousSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cds_nextSibling' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_nextSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNamedNodeMap*' 'gdome_cds_attributes' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_attributes(const v8::Arguments&);

/* Wrapper for 'GdomeDocument*' 'gdome_cds_ownerDocument' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_ownerDocument(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cds_insertBefore' (GdomeCDATASection* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_insertBefore(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cds_replaceChild' (GdomeCDATASection* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_replaceChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cds_removeChild' (GdomeCDATASection* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_removeChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cds_appendChild' (GdomeCDATASection* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_appendChild(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_cds_hasChildNodes' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_hasChildNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_cds_cloneNode' (GdomeCDATASection* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_cloneNode(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cds_normalize' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_normalize(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_cds_isSupported' (GdomeCDATASection* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_isSupported(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_cds_namespaceURI' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_namespaceURI(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_cds_prefix' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_prefix(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cds_set_prefix' (GdomeCDATASection* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_set_prefix(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_cds_localName' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_localName(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_cds_hasAttributes' (GdomeCDATASection* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_hasAttributes(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cds_addEventListener' (GdomeCDATASection* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_addEventListener(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cds_removeEventListener' (GdomeCDATASection* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_removeEventListener(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_cds_dispatchEvent' (GdomeCDATASection* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_dispatchEvent(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_cds_subTreeDispatchEvent' (GdomeCDATASection* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_subTreeDispatchEvent(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_cds_canAppend' (GdomeCDATASection* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_cds_canAppend(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_not_publicId' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_publicId(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_not_systemId' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_systemId(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_not_ref' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_not_unref' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_unref(const v8::Arguments&);

/* Wrapper for 'gpointer' 'gdome_not_query_interface' (GdomeNotation* const char* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_query_interface(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_not_nodeName' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_nodeName(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_not_nodeValue' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_nodeValue(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_not_set_nodeValue' (GdomeNotation* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_set_nodeValue(const v8::Arguments&);

/* Wrapper for 'unsigned short' 'gdome_not_nodeType' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_nodeType(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_not_parentNode' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_parentNode(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_not_childNodes' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_childNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_not_firstChild' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_firstChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_not_lastChild' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_lastChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_not_previousSibling' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_previousSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_not_nextSibling' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_nextSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNamedNodeMap*' 'gdome_not_attributes' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_attributes(const v8::Arguments&);

/* Wrapper for 'GdomeDocument*' 'gdome_not_ownerDocument' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_ownerDocument(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_not_insertBefore' (GdomeNotation* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_insertBefore(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_not_replaceChild' (GdomeNotation* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_replaceChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_not_removeChild' (GdomeNotation* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_removeChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_not_appendChild' (GdomeNotation* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_appendChild(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_not_hasChildNodes' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_hasChildNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_not_cloneNode' (GdomeNotation* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_cloneNode(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_not_normalize' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_normalize(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_not_isSupported' (GdomeNotation* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_isSupported(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_not_namespaceURI' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_namespaceURI(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_not_prefix' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_prefix(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_not_set_prefix' (GdomeNotation* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_set_prefix(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_not_localName' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_localName(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_not_hasAttributes' (GdomeNotation* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_hasAttributes(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_not_addEventListener' (GdomeNotation* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_addEventListener(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_not_removeEventListener' (GdomeNotation* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_removeEventListener(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_not_dispatchEvent' (GdomeNotation* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_dispatchEvent(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_not_subTreeDispatchEvent' (GdomeNotation* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_subTreeDispatchEvent(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_not_canAppend' (GdomeNotation* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_not_canAppend(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_ent_publicId' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_publicId(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_ent_systemId' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_systemId(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_ent_notationName' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_notationName(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_ent_ref' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_ent_unref' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_unref(const v8::Arguments&);

/* Wrapper for 'gpointer' 'gdome_ent_query_interface' (GdomeEntity* const char* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_query_interface(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_ent_nodeName' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_nodeName(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_ent_nodeValue' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_nodeValue(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_ent_set_nodeValue' (GdomeEntity* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_set_nodeValue(const v8::Arguments&);

/* Wrapper for 'unsigned short' 'gdome_ent_nodeType' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_nodeType(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_ent_parentNode' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_parentNode(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_ent_childNodes' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_childNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_ent_firstChild' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_firstChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_ent_lastChild' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_lastChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_ent_previousSibling' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_previousSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_ent_nextSibling' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_nextSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNamedNodeMap*' 'gdome_ent_attributes' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_attributes(const v8::Arguments&);

/* Wrapper for 'GdomeDocument*' 'gdome_ent_ownerDocument' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_ownerDocument(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_ent_insertBefore' (GdomeEntity* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_insertBefore(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_ent_replaceChild' (GdomeEntity* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_replaceChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_ent_removeChild' (GdomeEntity* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_removeChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_ent_appendChild' (GdomeEntity* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_appendChild(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_ent_hasChildNodes' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_hasChildNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_ent_cloneNode' (GdomeEntity* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_cloneNode(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_ent_normalize' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_normalize(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_ent_isSupported' (GdomeEntity* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_isSupported(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_ent_namespaceURI' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_namespaceURI(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_ent_prefix' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_prefix(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_ent_set_prefix' (GdomeEntity* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_set_prefix(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_ent_localName' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_localName(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_ent_hasAttributes' (GdomeEntity* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_hasAttributes(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_ent_addEventListener' (GdomeEntity* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_addEventListener(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_ent_removeEventListener' (GdomeEntity* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_removeEventListener(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_ent_dispatchEvent' (GdomeEntity* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_dispatchEvent(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_ent_subTreeDispatchEvent' (GdomeEntity* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_subTreeDispatchEvent(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_ent_canAppend' (GdomeEntity* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_ent_canAppend(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_er_ref' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_er_unref' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_unref(const v8::Arguments&);

/* Wrapper for 'gpointer' 'gdome_er_query_interface' (GdomeEntityReference* const char* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_query_interface(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_er_nodeName' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_nodeName(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_er_nodeValue' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_nodeValue(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_er_set_nodeValue' (GdomeEntityReference* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_set_nodeValue(const v8::Arguments&);

/* Wrapper for 'unsigned short' 'gdome_er_nodeType' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_nodeType(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_er_parentNode' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_parentNode(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_er_childNodes' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_childNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_er_firstChild' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_firstChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_er_lastChild' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_lastChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_er_previousSibling' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_previousSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_er_nextSibling' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_nextSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNamedNodeMap*' 'gdome_er_attributes' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_attributes(const v8::Arguments&);

/* Wrapper for 'GdomeDocument*' 'gdome_er_ownerDocument' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_ownerDocument(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_er_insertBefore' (GdomeEntityReference* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_insertBefore(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_er_replaceChild' (GdomeEntityReference* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_replaceChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_er_removeChild' (GdomeEntityReference* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_removeChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_er_appendChild' (GdomeEntityReference* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_appendChild(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_er_hasChildNodes' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_hasChildNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_er_cloneNode' (GdomeEntityReference* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_cloneNode(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_er_normalize' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_normalize(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_er_isSupported' (GdomeEntityReference* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_isSupported(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_er_namespaceURI' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_namespaceURI(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_er_prefix' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_prefix(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_er_set_prefix' (GdomeEntityReference* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_set_prefix(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_er_localName' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_localName(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_er_hasAttributes' (GdomeEntityReference* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_hasAttributes(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_er_addEventListener' (GdomeEntityReference* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_addEventListener(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_er_removeEventListener' (GdomeEntityReference* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_removeEventListener(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_er_dispatchEvent' (GdomeEntityReference* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_dispatchEvent(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_er_subTreeDispatchEvent' (GdomeEntityReference* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_subTreeDispatchEvent(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_er_canAppend' (GdomeEntityReference* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_er_canAppend(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_pi_target' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_target(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_pi_data' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_data(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_pi_set_data' (GdomeProcessingInstruction* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_set_data(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_pi_ref' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_pi_unref' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_unref(const v8::Arguments&);

/* Wrapper for 'gpointer' 'gdome_pi_query_interface' (GdomeProcessingInstruction* const char* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_query_interface(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_pi_nodeName' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_nodeName(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_pi_nodeValue' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_nodeValue(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_pi_set_nodeValue' (GdomeProcessingInstruction* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_set_nodeValue(const v8::Arguments&);

/* Wrapper for 'unsigned short' 'gdome_pi_nodeType' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_nodeType(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_pi_parentNode' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_parentNode(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_pi_childNodes' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_childNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_pi_firstChild' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_firstChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_pi_lastChild' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_lastChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_pi_previousSibling' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_previousSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_pi_nextSibling' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_nextSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNamedNodeMap*' 'gdome_pi_attributes' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_attributes(const v8::Arguments&);

/* Wrapper for 'GdomeDocument*' 'gdome_pi_ownerDocument' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_ownerDocument(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_pi_insertBefore' (GdomeProcessingInstruction* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_insertBefore(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_pi_replaceChild' (GdomeProcessingInstruction* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_replaceChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_pi_removeChild' (GdomeProcessingInstruction* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_removeChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_pi_appendChild' (GdomeProcessingInstruction* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_appendChild(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_pi_hasChildNodes' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_hasChildNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_pi_cloneNode' (GdomeProcessingInstruction* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_cloneNode(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_pi_normalize' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_normalize(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_pi_isSupported' (GdomeProcessingInstruction* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_isSupported(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_pi_namespaceURI' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_namespaceURI(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_pi_prefix' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_prefix(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_pi_set_prefix' (GdomeProcessingInstruction* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_set_prefix(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_pi_localName' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_localName(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_pi_hasAttributes' (GdomeProcessingInstruction* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_hasAttributes(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_pi_addEventListener' (GdomeProcessingInstruction* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_addEventListener(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_pi_removeEventListener' (GdomeProcessingInstruction* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_removeEventListener(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_pi_dispatchEvent' (GdomeProcessingInstruction* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_dispatchEvent(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_pi_subTreeDispatchEvent' (GdomeProcessingInstruction* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_subTreeDispatchEvent(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_pi_canAppend' (GdomeProcessingInstruction* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_pi_canAppend(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_dt_name' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_name(const v8::Arguments&);

/* Wrapper for 'GdomeNamedNodeMap*' 'gdome_dt_entities' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_entities(const v8::Arguments&);

/* Wrapper for 'GdomeNamedNodeMap*' 'gdome_dt_notations' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_notations(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_dt_publicId' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_publicId(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_dt_systemId' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_systemId(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_dt_internalSubset' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_internalSubset(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_dt_ref' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_ref(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_dt_unref' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_unref(const v8::Arguments&);

/* Wrapper for 'gpointer' 'gdome_dt_query_interface' (GdomeDocumentType* const char* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_query_interface(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_dt_nodeName' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_nodeName(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_dt_nodeValue' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_nodeValue(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_dt_set_nodeValue' (GdomeDocumentType* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_set_nodeValue(const v8::Arguments&);

/* Wrapper for 'unsigned short' 'gdome_dt_nodeType' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_nodeType(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_dt_parentNode' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_parentNode(const v8::Arguments&);

/* Wrapper for 'GdomeNodeList*' 'gdome_dt_childNodes' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_childNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_dt_firstChild' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_firstChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_dt_lastChild' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_lastChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_dt_previousSibling' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_previousSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_dt_nextSibling' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_nextSibling(const v8::Arguments&);

/* Wrapper for 'GdomeNamedNodeMap*' 'gdome_dt_attributes' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_attributes(const v8::Arguments&);

/* Wrapper for 'GdomeDocument*' 'gdome_dt_ownerDocument' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_ownerDocument(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_dt_insertBefore' (GdomeDocumentType* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_insertBefore(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_dt_replaceChild' (GdomeDocumentType* GdomeNode* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_replaceChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_dt_removeChild' (GdomeDocumentType* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_removeChild(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_dt_appendChild' (GdomeDocumentType* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_appendChild(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_dt_hasChildNodes' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_hasChildNodes(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_dt_cloneNode' (GdomeDocumentType* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_cloneNode(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_dt_normalize' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_normalize(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_dt_isSupported' (GdomeDocumentType* GdomeDOMString* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_isSupported(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_dt_namespaceURI' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_namespaceURI(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_dt_prefix' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_prefix(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_dt_set_prefix' (GdomeDocumentType* GdomeDOMString* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_set_prefix(const v8::Arguments&);

/* Wrapper for 'GdomeDOMString*' 'gdome_dt_localName' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_localName(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_dt_hasAttributes' (GdomeDocumentType* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_hasAttributes(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_dt_addEventListener' (GdomeDocumentType* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_addEventListener(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_dt_removeEventListener' (GdomeDocumentType* GdomeDOMString* GdomeEventListener* GdomeBoolean GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_removeEventListener(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_dt_dispatchEvent' (GdomeDocumentType* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_dispatchEvent(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_dt_subTreeDispatchEvent' (GdomeDocumentType* GdomeEvent* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_subTreeDispatchEvent(const v8::Arguments&);

/* Wrapper for 'GdomeBoolean' 'gdome_dt_canAppend' (GdomeDocumentType* GdomeNode* GdomeException*) */
v8::Handle<v8::Value> do_gdome_dt_canAppend(const v8::Arguments&);

/* Wrapper for 'GdomeException*' 'gdome_extra_exc_new' () */
v8::Handle<v8::Value> do_gdome_extra_exc_new(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_extra_exc_del' (GdomeException*) */
v8::Handle<v8::Value> do_gdome_extra_exc_del(const v8::Arguments&);

/* Wrapper for 'GdomeException' 'gdome_extra_exc_getvalue' (GdomeException*) */
v8::Handle<v8::Value> do_gdome_extra_exc_getvalue(const v8::Arguments&);

/* Wrapper for 'void' 'gdome_extra_exc_setvalue' (GdomeException* GdomeException) */
v8::Handle<v8::Value> do_gdome_extra_exc_setvalue(const v8::Arguments&);

/* Wrapper for 'GdomeText*' 'gdome_extra_cast_node_to_text' (GdomeNode*) */
v8::Handle<v8::Value> do_gdome_extra_cast_node_to_text(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_extra_cast_text_to_node' (GdomeText*) */
v8::Handle<v8::Value> do_gdome_extra_cast_text_to_node(const v8::Arguments&);

/* Wrapper for 'GdomeNode*' 'gdome_extra_cast_element_to_node' (GdomeElement*) */
v8::Handle<v8::Value> do_gdome_extra_cast_element_to_node(const v8::Arguments&);


