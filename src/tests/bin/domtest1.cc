#include <iostream>            // for std::runtime_error
#include <stdexcept>           // for std::runtime_error
#include <GdomeSmartDOM.hh>    // for GdomeSmartDOM::*
#include <string>              // for std::string
#include <cstring>             // for std::strlen
#include <sendanor/convert.h>  // for sendanor::convert

/** gmetadom test */
int main(int argc, char* argv[]) {
  try {
	if(2>=argc) throw std::runtime_error("No arguments");
	//std::string file(argv[1], std::strlen(argv[1]));
	std::string id(argv[2], std::strlen(argv[2]));
	
	//std::wstring wfile = sendanor::convert<std::wstring>(file);
	//std::wstring wid = sendanor::convert<std::wstring>(id);
	
	GdomeSmartDOM::DOMImplementation di;
	//GdomeSmartDOM::DOMString domfile(file.c_str(), file.size() );
	GdomeSmartDOM::Document doc = di.createDocumentFromURI(argv[1], GDOME_LOAD_PARSING);
	if(!doc) throw std::runtime_error("Failed to open document");
	//di.disableEvent(doc, "*");
	
	try {
		GdomeSmartDOM::GdomeString domid = id;
		GdomeSmartDOM::Element e = doc.getElementById(domid);
		if(e) {
			GdomeSmartDOM::Text content = doc.createTextNode("Your new content.");
			if(!content) throw std::runtime_error("Failed to create new content node.");
			e.appendChild(content);
			//e.normalize();
		} else {
			std::cerr << "Warning: No element found by id '" << id << "'." << std::endl;
		}
		
		/*
		GdomeSmartDOM::Element root = doc.get_documentElement();
		if(!root) throw std::runtime_error("!root");
		GdomeSmartDOM::NodeList list = root.get_childNodes();
		if(!list) throw std::runtime_error("!list");
		for(unsigned int i=0; i<list.get_length(); ++i) {
			GdomeSmartDOM::Node node = list.item(i);
			if(!node) throw std::runtime_error("!node");
			
			unsigned short type = node.get_nodeType();
			switch (type) {
			case GdomeSmartDOM::Node::DOCUMENT_NODE: {
				GdomeNode* gdome_node = node.gdome_object();
				if(!gdome_node) throw std::runtime_error("!gdome_node");
				std::cout << "Gdome object: " << gdome_node << " unique id: " << node.id() << std::endl;
				}
			default:
				std::cout << "unrecognized node type " << node.get_nodeType() << std::endl;
			break;
			}
		}
		*/
		
		GdomeSmartDOM::GdomeString out;
		if(!di.saveDocumentToMemory(doc, out)) throw std::runtime_error("Failed to save document to memory");
		if(out) std::cout << out;
		
	} catch(GdomeSmartDOM::DOMException& e) {
		std::cerr << "Error: DOMException: " << e.code << ": " << e.msg << std::endl;
		return 1;
	}
	
  } catch(std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
  }
}
/* EOF */
