/*
 * Sendanor's extended unit test macros for Boost
 * Copyright 2007 Sendanor <info@sendanor.fi>
 * $Id: test.h 6237 2008-09-19 15:35:41Z jheusala $
 */

#ifndef SENDANOR_TEST_H
#define SENDANOR_TEST_H

#include <boost/test/unit_test.hpp>  // for Boost's UTF
#include "diff.h"                    // for sendanor::diff

#define BOOST_CHECK_EQUAL_DIFF(A, B) BOOST_CHECK_MESSAGE( A==B , sendanor::diff(B, A) )

#endif

/* EOF */
