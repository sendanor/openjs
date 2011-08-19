#include <stdio.h>
#include <gdome.h>

int main (int argc, char **argv) {
	GdomeDOMImplementation *domimpl;
	GdomeDocument *doc;
	GdomeElement *root;
	GdomeText *el;
	GdomeNodeList *childs;
	GdomeException exc;
	GdomeDOMString *id, *content;
	unsigned long i, nchilds;
	
	if(2>=argc) {
		fprintf (stderr, "No arguments.\n");
		return 1;
	}
	
	fprintf (stdout, "file: %s\nid:   %s\n", argv[1], argv[2]);
	
	/* First I get a DOMImplementation reference */
	domimpl = gdome_di_mkref ();

	/* I load a new document from the file name "exampleb.xml */
	doc = gdome_di_createDocFromURI(domimpl, argv[1], GDOME_LOAD_COMPLETE_ATTRS, &exc);
	if (doc == NULL) {
		fprintf (stderr, "gdome_di_createDocFromURI: failed\n\tException #%d\n", exc);
		return 1;
	}

	/* I get reference to the root element by id */
	id = gdome_str_mkref (argv[2]);
	root = gdome_doc_getElementById(doc, id, &exc);
	if (root == NULL) {
		fprintf (stderr, "gdome_doc_getElementById: NULL\n\tException #%d\n", exc);
		return 1;
	}
	
	/* Create new text node */
	content = gdome_str_mkref ("Input");
	el = gdome_doc_createTextNode(doc, content, &exc);
	if (el == NULL) {
		fprintf (stderr, "gdome_doc_createTextNode: NULL\n\tException #%d\n", exc);
		return 1;
	}
	
	if(gdome_el_appendChild(root, (GdomeNode *)el, &exc) == NULL) {
		fprintf (stderr, "gdome_el_appendChild: NULL\n\tException #%d\n", exc);
		return 1;
	}
	
	
	/* Free? */
	gdome_t_unref (el, &exc);
	//gdome_nl_unref (childs, &exc);
	gdome_el_unref (root, &exc);

	/* I save the modified document to a file named "exampleb_out.xml */
	if (!gdome_di_saveDocToFile (domimpl, doc, "exampleb_out.xml", GDOME_SAVE_STANDARD, &exc)) {
		fprintf (stderr, "gdome_di_saveDocToFile: failed\n\tException #%d\n", exc);
		return 1;
	}

	/* I free the document structure and the DOMImplementation */
	gdome_doc_unref (doc, &exc);
	gdome_di_unref (domimpl, &exc);

	return 0;
}
