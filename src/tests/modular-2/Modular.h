/**
 * Modular Library -- Header file
 */

#ifndef SENDANOR_XSP_TESTS_MODULAR_MODULAR_H
#define SENDANOR_XSP_TESTS_MODULAR_MODULAR_H 1

#include <vector>    // for std::vector
#include <string>    // for std::string
#include <stdexcept> // for std::runtime_error
#include <dlfcn.h>   // for dlopen

namespace Modular {
	
	// Predeclare
	template<class BaseModuleType>
	class ModuleRegister;
	
	/** Registered module */
	template<class BaseModuleType>
	class LoadedModule {
	public:
		virtual ~LoadedModule();
		std::size_t id() const;
		BaseModuleType* module() const;
		void* dynamicLibrary() const;
		const typename BaseModuleType::Settings& settings() const;
		
	protected:
		void id(const std::size_t);
		void module(BaseModuleType*);
		void dynamicLibrary(void*);
		void settings(const typename BaseModuleType::Settings&);
		LoadedModule();
		LoadedModule(const LoadedModule&);
		
	private:
		std::size_t m_id;
		void* m_dl;
		BaseModuleType* m_module;
		typename BaseModuleType::Settings m_settings;
		
		// Friends
		friend class ModuleRegister<BaseModuleType>;
		
	};
	
	// Predeclare
	template<class BaseModuleType>
	class Handshake;
	
	/** Global register for handshakes */
	template<class BaseModuleType>
	class HandshakeRegister {
	public:
		
		// Members
		virtual ~HandshakeRegister();
		
		static HandshakeRegister& self();
		void initiateHandshake(Handshake<BaseModuleType>*);
		Handshake<BaseModuleType>* receiveHandshake();
		void clear();
		
	private:
		
		// Private Members
		HandshakeRegister(const HandshakeRegister&);
		HandshakeRegister();
		
		// Private Data Members
		Handshake<BaseModuleType>* m_handshake;
		
	}; // end of HandshakeRegister
	
	/** Handshake */
	template<class BaseModuleType>
	class Handshake {
	public:
		Handshake();
		virtual ~Handshake();
		
		BaseModuleType* module() const;
		void module(BaseModuleType*);
		
		void* dynamicLibrary() const;
		void dynamicLibrary(void*);
		
		const typename BaseModuleType::Settings& settings() const;
		void settings(const typename BaseModuleType::Settings&);
		
		void finish();
		
	private:
		Handshake(const Handshake&);
		BaseModuleType* m_module;
		void* m_dl;
		typename BaseModuleType::Settings m_settings;
	}; // end of Handshake
	
	/** DLHandshake */
	template<class ModuleType>
	class DLHandshake {
	public:
		DLHandshake();
		virtual ~DLHandshake();
	private:
		DLHandshake(const DLHandshake&); // Never implemented
	}; // end of DLHandshake
	
	/** */
	template<class BaseModuleType> 
	class ModuleRegister {
	public:
		
		// Typedefs
		typedef std::vector< LoadedModule<BaseModuleType>* > ModuleVector;
		typedef typename ModuleVector::const_iterator const_iterator;
		typedef typename ModuleVector::const_reverse_iterator const_reverse_iterator;
		
		// Public Members
		ModuleRegister();
		virtual ~ModuleRegister();
		LoadedModule<BaseModuleType>* load(const std::string& file, const typename BaseModuleType::Settings& a_settings);
		const const_iterator begin() { return m_modules.begin(); }
		const const_iterator end() { return m_modules.end(); }
		const const_reverse_iterator rbegin() { return m_modules.rbegin(); }
		const const_reverse_iterator rend() { return m_modules.rend(); }
		void clear();
		
	protected:
		
		// Protected Members
		std::size_t idGenerator();
		
	private:
		
		// Private Members
		ModuleRegister(const ModuleRegister&);
		
		// Private Data Members
		ModuleVector m_modules;
		std::size_t m_next_id;
		
		
	}; // end of ModuleRegister
	
}; // end of Modular

// Macros
#define REGISTER_DL_MODULE(ModuleType) namespace { Modular::DLHandshake<ModuleType> r; }

#endif

/* EOF */
