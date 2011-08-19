/*
 * Sendanor XSP -- Unit Tests -- xsp utils
 * Copyright 2007 Sendanor <info@sendanor.fi>
 * $Id: util-test.cc 755 2007-11-28 23:15:00Z jheusala $
 */

#include <boost/test/unit_test.hpp>  // for Boost's UTF
#include <sendanor/test.h>           // for BOOST_CHECK_EQUAL_DIFF
#include <xsp/xsp.h>                 // for xsp::exec
#include <sstream>                   // for std::ostringstream

BOOST_AUTO_TEST_CASE( xsp_run_script_test_1 ) {
	/*
	std::ostringstream out;
	std::map<Glib::ustring, Glib::ustring> input_variables;
	Glib::ustring ret = xsp::run_script("document.write(\"Hello world\");", out, input_variables);
	
	BOOST_CHECK_EQUAL( out.str(), "Hello World" );
	BOOST_CHECK_EQUAL( ret, "undefined" );
	*/
}

BOOST_AUTO_TEST_CASE( xsp_parse_xml_document_test_1 ) {
	const std::string input_text = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
	                              "<!DOCTYPE html\n"
	                              "PUBLIC \"-//W3C//DTD XHTML 1.1//EN\"\n"
	                              "\"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd\">\n"
	                              "<html>\n"
	                              "<head>\n"
	                              " <title>Hello World</title>\n"
	                              "</head>\n"
	                              "<body>\n"
	                              " <h1>Hello World</h1>\n"
	                              " <p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Nunc consequat \n"
	                              " interdum lorem. Aliquam viverra fringilla nibh. Vestibulum ante ipsum primis in \n"
	                              " faucibus orci luctus et ultrices posuere cubilia Curae; Aenean aliquet lobortis \n"
	                              " leo. Aliquam erat volutpat. Proin eget sem. Maecenas cursus vehicula massa. \n"
	                              " Duis a elit quis risus pretium tristique. Nam vel metus. Lorem ipsum dolor sit \n"
	                              " amet, consectetuer adipiscing elit. Nunc sed libero. Nunc vel lectus vel erat \n"
	                              " facilisis molestie. Morbi dapibus vehicula neque. Aliquam posuere elementum \n"
	                              " urna. Nunc iaculis dui id lectus. Pellentesque sit amet libero ut sapien \n"
	                              " convallis adipiscing. Suspendisse turpis dolor, varius a, fringilla nec, \n"
	                              " molestie et, augue.</p>\n"
	                              "</body>\n"
	                              "</html>\n";
	const std::string output_text = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
	                              "<!DOCTYPE html "
	                              "PUBLIC \"-//W3C//DTD XHTML 1.1//EN\" "
	                              "\"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd\">\n"
	                              "<html>\n"
	                              "<head>\n"
	                              " <title>Hello World</title>\n"
	                              "</head>\n"
	                              "<body>\n"
	                              " <h1>Hello World</h1>\n"
	                              " <p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Nunc consequat \n"
	                              " interdum lorem. Aliquam viverra fringilla nibh. Vestibulum ante ipsum primis in \n"
	                              " faucibus orci luctus et ultrices posuere cubilia Curae; Aenean aliquet lobortis \n"
	                              " leo. Aliquam erat volutpat. Proin eget sem. Maecenas cursus vehicula massa. \n"
	                              " Duis a elit quis risus pretium tristique. Nam vel metus. Lorem ipsum dolor sit \n"
	                              " amet, consectetuer adipiscing elit. Nunc sed libero. Nunc vel lectus vel erat \n"
	                              " facilisis molestie. Morbi dapibus vehicula neque. Aliquam posuere elementum \n"
	                              " urna. Nunc iaculis dui id lectus. Pellentesque sit amet libero ut sapien \n"
	                              " convallis adipiscing. Suspendisse turpis dolor, varius a, fringilla nec, \n"
	                              " molestie et, augue.</p>\n"
	                              "</body>\n"
	                              "</html>\n";
	std::istringstream input(input_text);
	std::ostringstream output;
	std::map<Glib::ustring, Glib::ustring> input_variables;
	xsp::parse_xml_document(input, output, input_variables);
	const std::string outbuf = output.str();
	BOOST_CHECK_EQUAL_DIFF( outbuf, output_text );
}

BOOST_AUTO_TEST_CASE( xsp_parse_xml_document_test_2 ) {
	const std::string input_text = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
	                              "<!DOCTYPE html\n"
	                              "PUBLIC \"-//W3C//DTD XHTML 1.1//EN\"\n"
	                              "\"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd\">\n"
	                              "<html xmlns=\"http://www.w3.org/1999/xhtml\""
	                              " xmlns:xsp=\"http://www.sendanor.org/xmlns/xsp\""
	                              " xml:lang=\"en\">\n"
	                              "<head>\n"
	                              " <title>Hello World</title>\n"
	                              "</head>\n"
	                              "<body>\n"
	                              " <h1>Hello World</h1>\n"
	                              " <xsp:import src=\"input.xml\" />\n"
	                              "</body>\n"
	                              "</html>\n";
	const std::string output_text = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
	                              "<!DOCTYPE html "
	                              "PUBLIC \"-//W3C//DTD XHTML 1.1//EN\" "
	                              "\"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd\">\n"
	                              "<html xmlns=\"http://www.w3.org/1999/xhtml\""
	                              " xmlns:xsp=\"http://www.sendanor.org/xmlns/xsp\""
	                              " xml:lang=\"en\">\n"
	                              "<head>\n"
	                              " <title>Hello World</title>\n"
	                              "</head>\n"
	                              "<body>\n"
	                              " <h1>Hello World</h1>\n"
	                              " <p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Nunc consequat \n"
	                              "interdum lorem. Aliquam viverra fringilla nibh. Vestibulum ante ipsum primis in \n"
	                              "faucibus orci luctus et ultrices posuere cubilia Curae; Aenean aliquet lobortis \n"
	                              "leo. Aliquam erat volutpat. Proin eget sem. Maecenas cursus vehicula massa. \n"
	                              "Duis a elit quis risus pretium tristique. Nam vel metus. Lorem ipsum dolor sit \n"
	                              "amet, consectetuer adipiscing elit. Nunc sed libero. Nunc vel lectus vel erat \n"
	                              "facilisis molestie. Morbi dapibus vehicula neque. Aliquam posuere elementum \n"
	                              "urna. Nunc iaculis dui id lectus. Pellentesque sit amet libero ut sapien \n"
	                              "convallis adipiscing. Suspendisse turpis dolor, varius a, fringilla nec, \n"
	                              "molestie et, augue.</p>\n"
	                              "</body>\n"
	                              "</html>\n";
	std::istringstream input(input_text);
	std::ostringstream output;
	std::map<Glib::ustring, Glib::ustring> input_variables;
	xsp::parse_xml_document(input, output, input_variables);
	const std::string outbuf = output.str();
	BOOST_CHECK_EQUAL_DIFF( outbuf, output_text );
}

/* EOF */
