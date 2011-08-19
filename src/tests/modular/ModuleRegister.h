/**
 * Extension framework test -- ModuleRegister class
 */

#ifndef SENDANOR_XSP_TESTS_MODULAR_MODULEREGISTER_H
#define SENDANOR_XSP_TESTS_MODULAR_MODULEREGISTER_H 1

#include <vector>    // for std::vector
#include <string>    // for std::string
#include <stdexcept> // for std::runtime_error
#include "Module.h"

namespace Modular {
	
	// Registered module
	class RegisteredModule {
	public:
		virtual ~RegisteredModule();
		std::size_t id() const;
		Module* module() const;
		void* dynamicLibrary() const;
		
	protected:
		void id(const std::size_t);
		void module(Module*);
		void dynamicLibrary(void*);
		RegisteredModule();
		RegisteredModule(const RegisteredModule&);
		
	private:
		std::size_t m_id;
		void* m_dl;
		Module* m_module;
		
		// Friends
		friend class ModuleRegister;
		
	};
	
	class ModuleRegister {
	public:
		
		// Typedefs
		typedef std::vector<RegisteredModule*> ModuleVector;
		typedef ModuleVector::const_iterator const_iterator;
		typedef ModuleVector::const_reverse_iterator const_reverse_iterator;
		
		// Public Members
		ModuleRegister();
		virtual ~ModuleRegister();
		RegisteredModule* load(const std::string& file);
		const const_iterator begin() { return m_modules.begin(); }
		const const_iterator end() { return m_modules.end(); }
		const const_reverse_iterator rbegin() { return m_modules.rbegin(); }
		const const_reverse_iterator rend() { return m_modules.rend(); }
		void clear();
		
		// DLHandshake
		template<class module_t>
		class DLHandshake {
		public:
			DLHandshake(const std::string& name);
			virtual ~DLHandshake();
		private:
			DLHandshake(const DLHandshake&);
		}; // end of DLHandshake
		
	protected:
		
		// Protected Members
		std::size_t idGenerator();
		
	private:
		
		// Predeclare
		class Handshake;
		
		// Global register for handshakes
		class HandshakeRegister {
		public:
			
			// Members
			virtual ~HandshakeRegister();
			
			static HandshakeRegister& self();
			void initiateHandshake(Handshake*);
			Handshake* receiveHandshake();
			void clear();
			
		private:
			
			// Private Members
			HandshakeRegister(const HandshakeRegister&);
			HandshakeRegister();
			
			// Private Data Members
			Handshake* m_handshake;
			
		}; // end of HandshakeRegister
		
		// Handshake
		class Handshake {
		public:
			Handshake();
			virtual ~Handshake();
			
			Module* module() const;
			void module(Module*);
			
			void* dynamicLibrary() const;
			void dynamicLibrary(void*);
			
			void finish();
			
		private:
			Handshake(const Handshake&);
			Module* m_module;
			void* m_dl;
			//ModuleRegister* m_module_register;
		}; // end of Handshake
		
		// Private Members
		ModuleRegister(const ModuleRegister&);
		
		// Private Data Members
		ModuleVector m_modules;
		std::size_t m_next_id;
		
	}; // end of ModuleRegister
	
}; // end of Modular

/** Constructor */
template<class module_t> 
Modular::ModuleRegister::DLHandshake<module_t>::DLHandshake(const std::string& name) {
	Handshake* h = HandshakeRegister::self().receiveHandshake();
	Module* mod = new module_t(name);
	if(!mod) throw std::runtime_error("Module creation failed!");
	h->module(mod);
}

/** Destructor */
template<class module_t> 
Modular::ModuleRegister::DLHandshake<module_t>::~DLHandshake() { }

// Macros
#define REGISTER_DL_MODULE(module_t, name) namespace { Modular::ModuleRegister::DLHandshake<module_t> r(name); }

#endif

/* EOF */
