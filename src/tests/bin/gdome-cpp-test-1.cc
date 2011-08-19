extern "C" {
#include <gdome.h>
}
#include <iostream>

int main (/* int argc, char **argv */) {
	GdomeDOMImplementation *domimpl;
	GdomeDocument *doc;
	GdomeElement *root, *el;
	GdomeNodeList *childs;
	GdomeException exc;
	GdomeDOMString *name, *value;
	unsigned long i, nchilds;

	/* First I get a DOMImplementation reference */
	domimpl = gdome_di_mkref ();
	
	/* I load a new document from the file name "exampleb.xml */
	doc = gdome_di_createDocFromURI(domimpl, "test.xml", GDOME_LOAD_PARSING, &exc);
	if (doc == NULL) {
		std::cerr << "DOMImplementation.createDocFromURI: failed\n\tException " << exc << std::endl;
		return 1;
	}

	/* I get reference to the root element of the document */
	root = gdome_doc_documentElement (doc, &exc);
	if (root == NULL) {
		std::cerr << "Document.documentElement: NULL\n\tException " << exc << std::endl;
		return 1;
	}

	/* I get the reference to the childrens NodeList of the root element */
	childs = gdome_el_childNodes (root, &exc);
	if (childs == NULL) {
		std::cerr << "Element.childNodes: NULL\n\tException " << exc << std::endl;
		return 1;
	}

	/* I add the attribute CHECKED="yes" to all element childs of the root element */
	name = gdome_str_mkref ("CHECKED");
	value = gdome_str_mkref ("yes");
	nchilds = gdome_nl_length (childs, &exc);
	for (i = 0; i < nchilds; i++) {
		el = (GdomeElement *)gdome_nl_item (childs, i, &exc);
		if (el == NULL) {
			std::cerr << "NodeList.item(" << (int)i << "): NULL\n\tException " << exc << std::endl;
			return 1;
		}
		if (gdome_el_nodeType (el, &exc) == GDOME_ELEMENT_NODE) {
			gdome_el_setAttribute (el, name, value, &exc);
			if (exc) {
				std::cerr << "Element.setAttribute: failed\n\tException " << exc << std::endl;
				return 1;
			}
		}
		gdome_el_unref (el, &exc);
	}
	gdome_nl_unref (childs, &exc);
	gdome_el_unref (root, &exc);

	/* I save the modified document to a file named "exampleb_out.xml */
	if (!gdome_di_saveDocToFile (domimpl, doc, "out.html", GDOME_SAVE_STANDARD, &exc)) {
		std::cerr << "DOMImplementation.saveDocToFile: failed\n\tException " << exc << std::endl;
		return 1;
	}
	
	/* I free the document structure and the DOMImplementation */
	gdome_doc_unref (doc, &exc);
	gdome_di_unref (domimpl, &exc);
	
	return 0;
}
