/**
 * Extension framework test -- module class
 */

#ifndef SENDANOR_XSP_TESTS_MODULAR_MODULE_H
#define SENDANOR_XSP_TESTS_MODULAR_MODULE_H 1

#include <string>

namespace Modular {
	
	class Module {
	public:
		Module(const std::string& a_name) : m_name(a_name) {}
		virtual ~Module() {}
		const std::string& name() const { return m_name; }
	private:
		std::string m_name;
	};
	
};

#endif

/* EOF */
