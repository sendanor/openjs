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
		fprintf (stderr, "USAGE: %s <FILE> <ID>\n", argv[0]);
		return 1;
	}
	
	fprintf (stdout, "file: %s\nid:   %s\n", argv[1], argv[2]);
	
	domimpl = gdome_di_mkref ();

	/* Load document */
	doc = gdome_di_createDocFromURI(domimpl, argv[1], GDOME_LOAD_COMPLETE_ATTRS, &exc);
	if (doc == NULL) {
		fprintf (stderr, "gdome_di_createDocFromURI: failed\n\tException #%d\n", exc);
		return 1;
	}

	/* Get element by id */
	id = gdome_str_mkref (argv[2]);
	root = gdome_doc_getElementById(doc, id, &exc);
	gdome_str_unref (id);
	if (root == NULL) {
		fprintf (stderr, "gdome_doc_getElementById: NULL\n\tException #%d\n", exc);
		return 1;
	}
	
	/* Create new text element */
	content = gdome_str_mkref ("Input");
	el = gdome_doc_createTextNode(doc, content, &exc);
	gdome_str_unref (content);
	if (el == NULL) {
		fprintf (stderr, "gdome_doc_createTextNode: NULL\n\tException #%d\n", exc);
		return 1;
	}
	
	/* Append it to the element */
	if(gdome_el_appendChild(root, (GdomeNode *)el, &exc) == NULL) {
		fprintf (stderr, "gdome_el_appendChild: NULL\n\tException #%d\n", exc);
		return 1;
	}
	gdome_t_unref (el, &exc);
	gdome_el_unref (root, &exc);
	
	/* Saving document to exampleb_out.xml */
	if (!gdome_di_saveDocToFile (domimpl, doc, "exampleb_out.xml", GDOME_SAVE_STANDARD, &exc)) {
		fprintf (stderr, "gdome_di_saveDocToFile: failed\n\tException #%d\n", exc);
		return 1;
	}
	
	gdome_doc_unref (doc, &exc);
	gdome_di_unref (domimpl, &exc);
	
	return 0;
}
