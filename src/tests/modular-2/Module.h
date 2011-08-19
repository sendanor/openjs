/**
 * Extension framework test -- module class
 */

#ifndef SENDANOR_XSP_TESTS_MODULAR_MODULE_H
#define SENDANOR_XSP_TESTS_MODULAR_MODULE_H 1

#include <string>
#include <ostream>

namespace Test {
	
	class Module {
	public:
		typedef Module Base;
		typedef std::string Settings;
		Module(const Settings&) {}
		virtual ~Module() {}
		virtual std::string name() const = 0;
		virtual std::string version() const = 0;
	};
	
	std::ostream& operator<<(std::ostream&, const Module&);
};

/** */
std::ostream& Test::operator<<(std::ostream& out, const Module& a) {
	out << a.name() << " (" << a.version() << ")";
	return out;
}

#endif

/* EOF */
