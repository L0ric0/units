// Boost.Units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2020 Lorenz Steinert
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_AU_ELECTRIC_CHARGE_HPP
#define BOOST_UNITS_AU_ELECTRIC_CHARGE_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/electric_charge.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<electric_charge_dimension, au::system> electric_charge;

            BOOST_UNITS_STATIC_CONSTANT(charge, electric_charge);

        }
    }
}

#endif // BOOST_UNITS_AU_ELECTRIC_CHARGE_HPP
