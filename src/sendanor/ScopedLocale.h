/*
 * libsendanor-base -- Scoped Locale
 * Copyright 2007 Sendanor <info@sendanor.fi>
 * $Id: ScopedLocale.h 6214 2008-09-18 15:26:31Z jheusala $
 */

#ifndef SENDANOR_LOCALE_SCOPEDLOCALE_H
#define SENDANOR_LOCALE_SCOPEDLOCALE_H 1

#include <locale>
#include <boost/utility.hpp>

namespace sendanor {
    
    /** Simple class to change global locale temporary. Destructor will change the global locale back to original. */
    class ScopedLocale : boost::noncopyable {
    public:
        
        /** Constructor */
        inline ScopedLocale(const std::locale& loc);
        
        /** Destructor */
        inline ~ScopedLocale();
        
        /** Get current locale */
        inline std::locale current() const { return m_current; }
        
        /** Get original locale */
        inline std::locale original() const { return m_original; }
        
    private:
        
        /** Original global locale */
        std::locale m_original;
        
        /** Current global locale */
        std::locale m_current;
        
    };
    
} // namespace


/* The Source Implementation */

//#include <boost/lexical_cast.hpp>                       // for boost::lexical_cast
//#include <Sendanor/System/slog.h>

/* Constructor */
inline sendanor::ScopedLocale::ScopedLocale(const std::locale& loc)
    : m_original()
    , m_current(loc) {
    //WRITE_LOG_CONSTRUCTOR
    //Locale::slog.write( std::string(__FILE__) + ": Constructor (" + boost::lexical_cast<std::string>(this) + ")" );
    std::locale::global(m_current);
}

/* Destructor */
inline sendanor::ScopedLocale::~ScopedLocale() {
    //WRITE_LOG_DESTRUCTOR
    //Locale::slog.write( std::string(__FILE__) + ": Destructor (" + boost::lexical_cast<std::string>(this) + ")" );
    std::locale::global(m_original);
}

#endif
/* EOF */
