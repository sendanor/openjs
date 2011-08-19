
#include <sendanor/exception.h>                       // for RUNTIME_ERROR
#include <iostream>                                   // for std::runtime_error
#include <libxml++/libxml++.h>                        // for xmlpp::
#include <libxml++/nodes/processinginstructionnode.h> // for xmlpp::ProcessingInstructionNode
#include <glibmm/ustring.h> // for Glib::ustring
#define USE_GLIB 1
#include <sendanor/convert.h>

/** XML reader using libxml++ */
int main(int argc, char* argv[]) {
	
	if(2>=argc) throw RUNTIME_ERROR("1<argc");
	Glib::ustring source_file = sendanor::convert<Glib::ustring>(std::string(argv[1]));
	Glib::ustring list_path = sendanor::convert<Glib::ustring>(std::string(argv[2]));
	
	xmlpp::DomParser parser;
	parser.set_substitute_entities();
	parser.parse_file(source_file);
	if(!parser) throw RUNTIME_ERROR("parser isn't working");
	xmlpp::Document* doc = parser.get_document();
	if(!doc) throw RUNTIME_ERROR("!doc");
	xmlpp::Node* root_node = doc->get_root_node();
	if(!root_node) throw RUNTIME_ERROR("!roow_node");
	
	xmlpp::NodeSet nodes = root_node->find(list_path);
	for(xmlpp::NodeSet::iterator i=nodes.begin(); i!=nodes.end(); ++i) {
		xmlpp::Node* node = *i;
		if(!node) throw RUNTIME_ERROR("!node");
		std::cout << node->get_namespace_prefix() << ":" << node->get_name() << " = " << node->get_path() << std::endl;
	}
	
	/*
	xmlpp::NodeSet::iterator main_i = nodes.begin();
	if(main_i==nodes.end()) throw RUNTIME_ERROR("main_i==nodes.end()");
	xmlpp::Node* main_node = *main_i;
	if(!main_node) throw RUNTIME_ERROR("!main_node");
	
	xmlpp::Node::NodeList list = main_node->get_children();
	for(xmlpp::Node::NodeList::iterator i = list.begin(); i != list.end(); ++i) {
		xmlpp::Node* node = *i;
		if(!node) throw RUNTIME_ERROR("!node");
		std::cout << node->get_namespace_prefix() << ":" << node->get_name() << " = " << node->get_path() << std::endl;
	}
	*/
}

/* EOF */
