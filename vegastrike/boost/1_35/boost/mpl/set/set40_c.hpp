
#ifndef BOOST_MPL_SET_SET40_C_HPP_INCLUDED
#define BOOST_MPL_SET_SET40_C_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2000-2004
// Copyright David Abrahams 2003-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Source$
// $Date: 2004-11-28 02:58:27 +0100 (dim., 28 nov. 2004) $
// $Revision: 26325 $

#if !defined(BOOST_MPL_PREPROCESSING_MODE)
#   include <boost/mpl/set/set30_c.hpp>
#   include <boost/mpl/set/set40.hpp>
#endif

#include <boost/mpl/aux_/config/use_preprocessed.hpp>

#if !defined(BOOST_MPL_CFG_NO_PREPROCESSED_HEADERS) \
    && !defined(BOOST_MPL_PREPROCESSING_MODE)

#   define BOOST_MPL_PREPROCESSED_HEADER set40_c.hpp
#   include <boost/mpl/set/aux_/include_preprocessed.hpp>

#else

#   include <boost/preprocessor/iterate.hpp>

namespace boost { namespace mpl {

#   define BOOST_PP_ITERATION_PARAMS_1 \
    (3,(31, 40, <boost/mpl/set/aux_/numbered_c.hpp>))
#   include BOOST_PP_ITERATE()

}}

#endif // BOOST_MPL_CFG_NO_PREPROCESSED_HEADERS

#endif // BOOST_MPL_SET_SET40_C_HPP_INCLUDED
