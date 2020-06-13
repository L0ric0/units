// Boost.Units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2003-2008 Matthias Christian Schabel
// Copyright (C) 2008 Steven Watanabe
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_AU_BASE_HPP
#define BOOST_UNITS_AU_BASE_HPP

#include <string>

#include <boost/units/static_constant.hpp>
#include <boost/units/unit.hpp>
#include <boost/units/make_system.hpp>

#include <boost/units/base_units/au/bohr.hpp>
#include <boost/units/base_units/au/boltzmann.hpp>
#include <boost/units/base_units/au/candela.hpp>
#include <boost/units/base_units/au/current.hpp>
#include <boost/units/base_units/au/electron_mass.hpp>
#include <boost/units/base_units/au/mole.hpp>
#include <boost/units/base_units/au/time.hpp>
#include <boost/units/base_units/angle/radian.hpp>
#include <boost/units/base_units/angle/steradian.hpp>

namespace boost {
    namespace units {
        namespace au {

            /// placeholder class defining au unit system
            typedef make_system<
                bohr_base_unit,
                boltzmann_base_unit,
                candela_base_unit,
                current_base_unit,
                electron_mass_base_unit,	
                mole_base_unit,
                time_base_unit,
                angle::radian_base_unit,
                angle::steradian_base_unit,
            >::type system;

            /// dimensionless au unit
            typedef unit<dimensionless_type,system> dimensionless;

        }
    }
}

#endif // BOOST_UNITS_AU_BASE_HPP
