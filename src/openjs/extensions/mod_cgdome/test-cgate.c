
/*
 * This example will generate segfault if linked with libxml++.
 */

#include "cgate.h"

int main(int argc, char **argv) {

	//0102 [debug] auto-wrappers.cc:1105: Calling 
	//0102 [debug] auto-wrappers.cc:1107: ret = 134775976
	unsigned int exc = cgate_gdome_extra_exc_new();
	
	//0102 [debug] auto-wrappers.cc:41: Calling cgate_gdome_di_mkref()
	//0102 [debug] auto-wrappers.cc:43: ret = 134757448
	unsigned int di = cgate_gdome_di_mkref();
	
	//0102 [debug] auto-wrappers.cc:138: Calling cgate_gdome_di_createDocFromURI(134757448, example.html, 8, 134775976)
	//0102 [debug] auto-wrappers.cc:140: ret = 134975808
	unsigned int doc = cgate_gdome_di_createDocFromURI(di, "example.html", 8, exc);
	
	//0102 [debug] auto-wrappers.cc:9: Calling cgate_gdome_str_mkref_dup(content)
	//0102 [debug] auto-wrappers.cc:11: ret = 134799096
	unsigned int id = cgate_gdome_str_mkref_dup("content");
	
	//0102 [debug] auto-wrappers.cc:517: Calling cgate_gdome_doc_getElementById(134975808, 134799096, 134775976)
	//0102 [debug] auto-wrappers.cc:519: ret = 135543696
	unsigned int element = cgate_gdome_doc_getElementById(doc, id, exc);
	
	//0102 [debug] auto-wrappers.cc:23: Calling cgate_gdome_str_unref(134799096)
	cgate_gdome_str_unref(id);
	
	//0102 [debug] auto-wrappers.cc:9: Calling cgate_gdome_str_mkref_dup(Input)
	//0102 [debug] auto-wrappers.cc:11: ret = 134778888
	unsigned int content = cgate_gdome_str_mkref_dup("Input");;
	
	//0102 [debug] auto-wrappers.cc:336: Calling cgate_gdome_doc_createTextNode(134975808, 134778888, 134775976)
	//0102 [debug] auto-wrappers.cc:338: ret = 134768896
	unsigned int text = cgate_gdome_doc_createTextNode(doc, content, exc);
	
	//0102 [debug] auto-wrappers.cc:23: Calling cgate_gdome_str_unref(134778888)
	cgate_gdome_str_unref(content);
	
	//0102 [debug] auto-wrappers.cc:1174: Calling cgate_gdome_extra_cast_text_to_node(134768896)
	//0102 [debug] auto-wrappers.cc:1176: ret = 134768896
	unsigned int text_node = cgate_gdome_extra_cast_text_to_node(text);
	
	//0102 [debug] auto-wrappers.cc:1058: Calling cgate_gdome_el_appendChild(135543696, 134768896, 134775976)
	cgate_gdome_el_appendChild(element, text_node, exc);
	
	return 0;
}
