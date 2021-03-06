// Boost.Units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2020 Lorenz Steinert
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_AU_ACTION_HPP
#define BOOST_UNITS_AU_ACTION_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/action.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<action_dimension,au::system> action;

            BOOST_UNITS_STATIC_CONSTANT(hbar, action);

        }
    }
}

#endif // BOOST_UNITS_AU_ACTION_HPP
