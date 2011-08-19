/**
 * Extension framework test
 */
#include "ModuleRegister.h"     // for Modular::ModuleRegister::*
#include <dlfcn.h>              // for dlopen

/** Constructor */
Modular::ModuleRegister::HandshakeRegister::HandshakeRegister() : m_handshake(0) {}

/** Destructor */
Modular::ModuleRegister::HandshakeRegister::~HandshakeRegister() {}

/** */
Modular::ModuleRegister::HandshakeRegister& Modular::ModuleRegister::HandshakeRegister::self() {
	static HandshakeRegister reg;
	return reg;
}

/** */
Modular::ModuleRegister::Handshake* Modular::ModuleRegister::HandshakeRegister::receiveHandshake() {
	if(m_handshake == 0) throw std::runtime_error("Handshake process has not been initiated!");
	return m_handshake;
}

/** */
void Modular::ModuleRegister::HandshakeRegister::initiateHandshake(Handshake* h) {
	if(m_handshake != 0) throw std::runtime_error("Handshake process already initiated!");
	m_handshake = h;
}

/** */
void Modular::ModuleRegister::HandshakeRegister::clear() {
	m_handshake = 0;
}


/** Constructor */
Modular::ModuleRegister::ModuleRegister() : m_next_id(0) {}

/** Destructor */
Modular::ModuleRegister::~ModuleRegister() {
	clear();
}

/** Get name of the module */
Modular::RegisteredModule* Modular::ModuleRegister::load(const std::string& file) {
	
	RegisteredModule* mod = new RegisteredModule();
	
	mod->id(idGenerator());
	
	if(!mod) throw std::runtime_error("Could not create new registered module!");
	m_modules.push_back(mod);
	
	Handshake h;
	
	void* dl = dlopen(file.c_str(), RTLD_LAZY | RTLD_GLOBAL);
	if(!dl) throw std::runtime_error(dlerror());
	mod->dynamicLibrary(dl);
	h.dynamicLibrary(dl);
	
	h.finish();
	mod->module(h.module());
	return mod;
}

/** Unload modules and free memory in reverse order */
void Modular::ModuleRegister::clear() {
	for(ModuleVector::reverse_iterator i = m_modules.rbegin(); i!=m_modules.rend(); i++) {
		Modular::RegisteredModule* mod = *i;
		if(mod) {
			if(mod->module()) {
				delete mod->module();
				mod->module(0);
			}
			
			if(mod->dynamicLibrary()) {
				dlclose(mod->dynamicLibrary());
				mod->dynamicLibrary(0);
			}
			
			delete mod;
			*i = 0;
		}
	}
}

/** Generate new unique ID for a module */
std::size_t Modular::ModuleRegister::idGenerator() {
	return m_next_id++;
}

/** */
Modular::RegisteredModule::RegisteredModule() : m_id(0), m_dl(0), m_module(0) {
}

/** */
Modular::RegisteredModule::~RegisteredModule() {
}

/** */
std::size_t Modular::RegisteredModule::id() const {
	return m_id;
}

/** */
Modular::Module* Modular::RegisteredModule::module() const {
	return m_module;
}

void Modular::RegisteredModule::id(const std::size_t a_id) {
	m_id = a_id;
}

/** */
void Modular::RegisteredModule::module(Module* mod) {
	m_module = mod;
}

/** */
void* Modular::RegisteredModule::dynamicLibrary() const {
	return m_dl;
}

/** */
void Modular::RegisteredModule::dynamicLibrary(void* dl) {
	m_dl = dl;
}


/** */
Modular::ModuleRegister::Handshake::Handshake() : m_module(0), m_dl(0) {
	HandshakeRegister::self().initiateHandshake(this);
}

/** */
Modular::ModuleRegister::Handshake::~Handshake() {
	HandshakeRegister::self().clear();
}

/** */
Modular::Module* Modular::ModuleRegister::Handshake::module() const {
	return m_module;
}

/** */
void Modular::ModuleRegister::Handshake::module(Module* mod) {
	m_module = mod;
}

/** */
void* Modular::ModuleRegister::Handshake::dynamicLibrary() const {
	return m_dl;
}

/** */
void Modular::ModuleRegister::Handshake::dynamicLibrary(void* dl) {
	m_dl = dl;
}

/** */
void Modular::ModuleRegister::Handshake::finish() {
	if(m_dl == 0) throw std::runtime_error("No dynamic library!");
	if(m_module == 0) throw std::runtime_error("Module has not been negotiated!");
}

/* EOF */
