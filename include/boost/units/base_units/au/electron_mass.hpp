// Boost.Units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2018 Sebastian Weber
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_AU_ELECTRON_MASS_BASE_UNIT_HPP
#define BOOST_UNITS_AU_ELECTRON_MASS_BASE_UNIT_HPP

#include <string>

#include <boost/units/config.hpp>
#include <boost/units/base_unit.hpp>
#include <boost/units/physical_dimensions/mass.hpp>
#include <boost/units/base_units/cgs/gram.hpp>
#include <boost/units/conversion.hpp>

//e-28 as we convert from gram and not kilogram
BOOST_UNITS_DEFINE_BASE_UNIT_WITH_CONVERSIONS(au, electron_mass, "electron_mass", "m_e", 9.1093837015e-28, cgs::gram_base_unit, 303);

#if BOOST_UNITS_HAS_BOOST_TYPEOF

#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

BOOST_TYPEOF_REGISTER_TYPE(boost::units::au::electron_mass_base_unit)

#endif

#endif // BOOST_UNITS_AU_ELECTRON_MASS_BASE_UNIT_HPP
