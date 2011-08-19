/* 
 * JavaScript XML Pipe Preprosessor
 * Copyright 2010 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/*
 * Note: This program is an independent process mainly because GDOME leaks memory.
 */

#include <gdome.h>
#include <iostream>
#include <string>
#include <stdexcept>
#include <cstring>
#include "jsxmlpp.h"

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
	view->nsuri = gdome_str_mkref_dup("http://www.openjs.org/2010/jsxmlpp");
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
std::string to_string(GdomeDOMString* s) {
	if(s == NULL) return "";
	return std::string( s->str, gdome_str_length(s) );
}

/* */
void handle_attr_view_content(view_t* view, GdomeNode *child, const std::string& content_str) {
	
	// Remove original child nodes
	#ifdef ENABLE_REMOVE
	while(gdome_n_hasChildNodes(child, &(view->exc)) == TRUE) {
		GdomeNode* nl = gdome_n_lastChild(child, &(view->exc));
		GdomeNode* rem_nl = gdome_n_removeChild(child, nl, &(view->exc));
		if(rem_nl != NULL) gdome_n_unref (rem_nl, &(view->exc));
		if(nl != NULL) gdome_n_unref (nl, &(view->exc));
	}
	#endif
	
	// Create text node for content
	GdomeDOMString* content = gdome_str_mkref_dup (content_str.c_str());
	if (content == NULL) {
		std::cerr << "jsxmlpp: gdome_str_mkref_dup: NULL" << std::endl;
		return;
	}
	GdomeText* el = gdome_doc_createTextNode(view->doc, content, &(view->exc));
	if(content != NULL) gdome_str_unref (content);
	if (el == NULL) {
		std::cerr << "jsxmlpp: gdome_doc_createTextNode: failed: exception #" << view->exc << std::endl;
		return;
	}
	
	// Append it to the element
	if(gdome_n_appendChild(child, GDOME_N(el), &(view->exc)) == NULL) {
		std::cerr << "jsxmlpp: gdome_el_appendChild: failed: exception #" << view->exc << std::endl;
		if(el != NULL) gdome_t_unref (el, &(view->exc));
		return;
	}
	
	// Clean up
	if(el != NULL) gdome_t_unref (el, &(view->exc));
}

/* */
void parse_attrs(view_t* view, GdomeNode *child) {
	
	GdomeNamedNodeMap* child_attrs = gdome_n_attributes(child, &(view->exc));
	
	guint i, length;
	if ((length = gdome_nnm_length (child_attrs, &(view->exc))) == 0) {
		if (child_attrs != NULL) gdome_nnm_unref(child_attrs, &(view->exc));
		return;
	}
	
	for (i = 0; i < length; i++) {
		GdomeNode* attr = gdome_nnm_item(child_attrs, i, &(view->exc));
		GdomeDOMString* attr_nsuri = gdome_n_namespaceURI (attr, &(view->exc));
		GdomeDOMString* attr_name = gdome_n_localName (attr, &(view->exc));
		
		// Check for view:content
		if( (attr_nsuri != NULL)
		 && (attr_name != NULL)
		 && (gdome_str_equalIgnoreCase (attr_nsuri, view->nsuri) == TRUE)
		 && (gdome_str_equalIgnoreCase (attr_name, view->content_name) == TRUE) ) {
			
			// Get command
			GdomeDOMString* attr_value = gdome_n_nodeValue (attr, &(view->exc));
			const std::string command = to_string(attr_value);
			if (attr_value != NULL) gdome_str_unref(attr_value);
			
			// Get content
			const std::string content = jsxmlpp::fetch_multiline_response(std::cout, std::cin, command);
			
			// Print attribute data
			#ifdef DEBUG
			std::cerr << "jsxmlpp: DEBUG: nsuri='" << to_string(attr_nsuri) << "', attr='" << to_string(attr_name) << "'" << std::endl;
			#endif // DEBUG
			
			/* Do the magic for view:content */
			handle_attr_view_content(view, child, content);
			
			/* Remove the view attribute */
			#ifdef ENABLE_REMOVE
			GdomeNode* nl = gdome_nnm_removeNamedItemNS(child_attrs, attr_nsuri, attr_name, &(view->exc));
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
	
	GdomeNodeList* nl = gdome_n_childNodes (node, &(view->exc));
	
	guint i, nllength;
	if ((nllength = gdome_nl_length (nl, &(view->exc))) == 0) {
		if (nl != NULL) gdome_nl_unref (nl, &(view->exc));
		return;
	}
	
	for (i = 0; i < nllength; i++) {
		GdomeNode* child = gdome_nl_item (nl, i, &(view->exc));
		
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
void parse_file () {
	
	std::string file = jsxmlpp::fetch_singleline_response(std::cin, '<');
	
	view_t view;
	view_init(&view);
	
	/* Load document */
	view.domimpl = gdome_di_mkref ();
	view.doc = gdome_di_createDocFromURI(view.domimpl, file.c_str(), GDOME_LOAD_COMPLETE_ATTRS, &view.exc);
	if (view.doc == NULL) {
		std::cerr << "jsxmlpp: gdome_di_createDocFromURI: failed: exception #" << view.exc << std::endl;
		view_unref(&view);
		return;
	}
	
	/* Get root element */
	GdomeElement* root = gdome_doc_documentElement(view.doc, &view.exc);
	if (root == NULL) {
		std::cerr << "jsxmlpp: gdome_doc_documentElement: failed: exception #" << view.exc << std::endl;
		view_unref(&view);
		return;
	}
	
	parse_subtree(&view, (GdomeNode*)root );
	
	if(root != NULL) gdome_el_unref (root, &view.exc);
	
	/* Saving document to exampleb_out.xml */
	char* mem;
	if (!gdome_di_saveDocToMemory (view.domimpl, view.doc, &mem, GDOME_SAVE_STANDARD, &view.exc)) {
		std::cerr << "jsxmlpp: gdome_di_saveDocToMemory: failed: exception #" << view.exc << std::endl;
		view_unref(&view);
		return;
	}
	
	std::cout << "--" << std::endl
	          << "L" << std::strlen(mem) << std::endl
	          << mem
	          << "-- " << std::endl;
	
	view_unref(&view);
	
}

/* */
int main (int /*argc*/, char ** /*argv*/) {
	
	#ifdef DEBUG
	std::cerr << "jsxmlpp: DEBUG: Start of Program" << std::endl;
	#endif // DEBUG
	
	/*
	if(1>=argc) {
		std::cerr << "jsxmlpp: no arguments." << std::endl;
		std::cerr << "USAGE: " << argv[0] << " <FILE>" << std::endl;
		return 1;
	}
	#ifdef DEBUG
	std::cerr << "jsxmlpp: DEBUG: file = '" << argv[1] << "'" << std::endl;
	#endif // DEBUG
	
	*/
	
	try {
		while(true) {
			try {
				char ch = 0;
				std::cin.get(ch);
				std::cin.putback(ch);
				if(ch == '<') {
					parse_file();
				} else {
					std::string command = jsxmlpp::fetch_singleline_response(std::cin, ':');
					if(command == "quit") {
						//std::cerr << "jsxmlpp: info: going to shutdown" << std::endl; // FIXME: At the moment the process blocks if there is no output on stderr. It should not be needed.
						break;
					}
					else throw std::runtime_error("unknown command: "+command);
				}
			} catch(std::runtime_error& e) {
				std::cerr << "jsxmlpp: error: " << e.what() << std::endl;
			}
		}
	} catch (std::exception& e) {
		std::cerr << "jsxmlpp: error: " << e.what() << std::endl;
	} catch (...) {
		std::cerr << "jsxmlpp: error: unknown exception" << std::endl;
	}
	
	// Wait until cin is closed
	//std::cin.peek();
	
	#ifdef DEBUG
	std::cerr << "jsxmlpp: DEBUG: End of Program" << std::endl;
	#endif // DEBUG
	return 0;
}

/* EOF */
