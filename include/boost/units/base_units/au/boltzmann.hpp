// Boost.Units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2018 Sebastian Weber
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_AU_BOLTZMANN_BASE_UNIT_HPP
#define BOOST_UNITS_AU_BOLTZMANN_BASE_UNIT_HPP

#include <string>

#include <boost/units/config.hpp>
#include <boost/units/base_unit.hpp>
#include <boost/units/physical_dimensions/temperature.hpp>
#include <boost/units/base_units/si/kelvin.hpp>
#include <boost/units/conversion.hpp>

BOOST_UNITS_DEFINE_BASE_UNIT_WITH_CONVERSIONS(au, boltzmann, "boltzmann", "k_b", 1.380649e-23, si::kelvin_base_unit, 301); // exact conversion

#if BOOST_UNITS_HAS_BOOST_TYPEOF

#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

BOOST_TYPEOF_REGISTER_TYPE(boost::units::au::boltzmann_base_unit)

#endif

//#include <boost/units/base_units/detail/conversions.hpp>

#endif // BOOST_UNITS_AU_BOLTZMANN_BASE_UNIT_HPP
