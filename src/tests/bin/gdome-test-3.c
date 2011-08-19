/* 
 * 
 */

#include <gdome.h>
#include <stdio.h>

#define ENABLE_REMOVE 1

/* */
typedef struct {
	GdomeException exc;
	GdomeDocument *doc;
	GdomeDOMImplementation *domimpl;
	GdomeDOMString* nsuri;
	GdomeDOMString* content_name;
} view_t;

/* Init view */
void view_init(view_t* view) {
	view->doc = NULL;
	view->domimpl = NULL;
	view->nsuri = gdome_str_mkref_dup("http://www.openjs.org/2010/view");
	view->content_name = gdome_str_mkref_dup("content");
}

/* Clean view_t */
void view_unref(view_t* view) {
	if (!view) return;
	
	if (view->doc != NULL) gdome_doc_unref (view->doc, &(view->exc));
	if (view->domimpl != NULL) gdome_di_unref (view->domimpl, &(view->exc));
	if (view->nsuri != NULL) gdome_str_unref(view->nsuri);
	if (view->content_name != NULL) gdome_str_unref(view->content_name);
}

/* Print gdome string */
void print_str(const char* key, GdomeDOMString* str) {
	if(str == NULL) {
		fprintf (stderr, "%s = undefined\n", key );
		return;
	}
	fprintf (stderr, "%s = '%s'\n", key, str->str );
}

/* */
void handle_attr_view_content(view_t* view, GdomeNode *child) {
	#ifdef ENABLE_REMOVE
	GdomeNode *nl = NULL;
	GdomeNode *rem_nl = NULL;
	#endif
	GdomeText *el = NULL;
	GdomeDOMString *content = NULL;
	
	// Remove original child nodes
	#ifdef ENABLE_REMOVE
	while(gdome_n_hasChildNodes(child, &(view->exc)) == TRUE) {
		nl = gdome_n_lastChild(child, &(view->exc));
		rem_nl = gdome_n_removeChild(child, nl, &(view->exc));
		if(rem_nl != NULL) gdome_n_unref (rem_nl, &(view->exc));
		if(nl != NULL) gdome_n_unref (nl, &(view->exc));
	}
	#endif
	
	// Create text node for content
	content = gdome_str_mkref_dup ("Input");
	if (content == NULL) {
		fprintf (stderr, "gdome_str_mkref_dup: NULL\n");
		return;
	}
	el = gdome_doc_createTextNode(view->doc, content, &(view->exc));
	if(content != NULL) gdome_str_unref (content);
	if (el == NULL) {
		fprintf (stderr, "gdome_doc_createTextNode: NULL\n\tException #%d\n", view->exc);
		return;
	}
	
	// Append it to the element
	if(gdome_n_appendChild(child, GDOME_N(el), &(view->exc)) == NULL) {
		fprintf (stderr, "gdome_el_appendChild: NULL\n\tException #%d\n", view->exc);
		if(el != NULL) gdome_t_unref (el, &(view->exc));
		return;
	}
	
	// Clean up
	if(el != NULL) gdome_t_unref (el, &(view->exc));
}

/* */
void parse_attrs(view_t* view, GdomeNode *child) {
	GdomeNamedNodeMap* child_attrs = NULL;

	GdomeNode* attr = NULL;
	GdomeDOMString* attr_nsuri = NULL;
	GdomeDOMString* attr_name = NULL;
	guint i, length;
	
	#ifdef ENABLE_REMOVE
	GdomeNode* nl = NULL;
	#endif
	
	child_attrs = gdome_n_attributes(child, &(view->exc));
	
	if ((length = gdome_nnm_length (child_attrs, &(view->exc))) == 0) {
		if (child_attrs != NULL) gdome_nnm_unref(child_attrs, &(view->exc));
		return;
	}
	
	for (i = 0; i < length; i++) {
		attr = gdome_nnm_item(child_attrs, i, &(view->exc));
		attr_nsuri = gdome_n_namespaceURI (attr, &(view->exc));
		attr_name = gdome_n_localName (attr, &(view->exc));
		
		// Check for view:content
		if( (attr_nsuri != NULL)
		 && (attr_name != NULL)
		 && (gdome_str_equalIgnoreCase (attr_nsuri, view->nsuri) == TRUE)
		 && (gdome_str_equalIgnoreCase (attr_name, view->content_name) == TRUE) ) {
			
			// Print attribute data
			print_str("nsuri", attr_nsuri);
			print_str("attr", attr_name);
			
			/* Do the magic for view:content */
			handle_attr_view_content(view, child);
			
			/* Remove the view attribute */
			#ifdef ENABLE_REMOVE
			nl = gdome_nnm_removeNamedItemNS(child_attrs, attr_nsuri, attr_name, &(view->exc));
			if(nl != NULL) gdome_n_unref (nl, &(view->exc));
			#endif
		}
		
		// Clean up
		if (attr_nsuri != NULL) gdome_str_unref(attr_nsuri);
		if (attr_name != NULL) gdome_str_unref(attr_name);
		if (attr != NULL) gdome_n_unref (attr, &(view->exc));
	}
	
	if(child_attrs != NULL) gdome_nnm_unref(child_attrs, &(view->exc));
}

/* */
void parse_subtree(view_t* view, GdomeNode *node) {
	GdomeNode *child = NULL;
	GdomeNodeList *nl = NULL;
	guint i, nllength;
	//GdomeDOMString* str = NULL;
	
	nl = gdome_n_childNodes (node, &(view->exc));
	
	if ((nllength = gdome_nl_length (nl, &(view->exc))) == 0) {
		if (nl != NULL) gdome_nl_unref (nl, &(view->exc));
		return;
	}
	
	for (i = 0; i < nllength; i++) {
		child = gdome_nl_item (nl, i, &(view->exc));
		
		// Print child namespace
		//str = gdome_n_namespaceURI (child, &(view->exc));
		//print_str("nsuri", str);
		//if (str != NULL) gdome_str_unref(str);
		
		// Print child local name
		//str = gdome_n_localName (child, &(view->exc));
		//print_str("child", str);
		//if (str != NULL) gdome_str_unref(str);
		
		// Parse attributes
		parse_attrs(view, child);
		
		// Parse childs
		if (gdome_n_hasChildNodes (child, &(view->exc)) == TRUE) parse_subtree(view, child);
		
		// Clean up
		if (child != NULL) gdome_n_unref (child, &(view->exc));
	}
	
	if (nl != NULL) gdome_nl_unref (nl, &(view->exc));
}

/* */
void parse_file (const char* file, const char* key, const char* value) {
	//GdomeDOMImplementation *domimpl = NULL;
	//GdomeDocument *doc = NULL;
	GdomeElement *root = NULL;
	view_t view;
	
	view_init(&view);
	
	/* Load document */
	view.domimpl = gdome_di_mkref ();
	view.doc = gdome_di_createDocFromURI(view.domimpl, file, GDOME_LOAD_COMPLETE_ATTRS, &view.exc);
	if (view.doc == NULL) {
		fprintf (stderr, "gdome_di_createDocFromURI: failed\n\tException #%d\n", view.exc);
		view_unref(&view);
		return;
	}
	
	/* Get root element */
	root = gdome_doc_documentElement(view.doc, &view.exc);
	if (root == NULL) {
		fprintf (stderr, "gdome_doc_documentElement: NULL\n\tException #%d\n", view.exc);
		view_unref(&view);
		return;
	}
	
	parse_subtree(&view, (GdomeNode*)root );
	
	if(root != NULL) gdome_el_unref (root, &view.exc);
	
	/* Saving document to exampleb_out.xml */
	if (!gdome_di_saveDocToFile (view.domimpl, view.doc, "exampleb_out.xml", GDOME_SAVE_STANDARD, &view.exc)) {
		fprintf (stderr, "gdome_di_saveDocToFile: failed\n\tException #%d\n", view.exc);
		view_unref(&view);
		return;
	}
	
	view_unref(&view);
	
}

/* */
int main (int argc, char **argv) {
	
	if(3>=argc) {
		fprintf (stderr, "No arguments.\n");
		fprintf (stderr, "USAGE: %s <FILE> <KEY> <VALUE>\n", argv[0]);
		return 1;
	}
	
	fprintf (stderr, "file:  %s\n"
	                 "key:   %s\n"
	                 "value: %s\n\n", argv[1], argv[2], argv[3]);
	
	parse_file(argv[1], argv[2], argv[3]);
	return 0;
}

/* EOF */
