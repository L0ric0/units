// Boost.Units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2018 Sebastian Weber
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_AU_CURRENT_BASE_UNIT_HPP
#define BOOST_UNITS_AU_CURRENT_BASE_UNIT_HPP

#include <string>

#include <boost/units/config.hpp>
#include <boost/units/base_unit.hpp>
#include <boost/units/physical_dimensions/current.hpp>
#include <boost/units/base_units/si/ampere.hpp>
#include <boost/units/conversion.hpp>


BOOST_UNITS_DEFINE_BASE_UNIT_WITH_CONVERSIONS(au, current, "current", "cur", 6.623618237510e-3, si::ampere_base_unit, 302);

#if BOOST_UNITS_HAS_BOOST_TYPEOF

#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

BOOST_TYPEOF_REGISTER_TYPE(boost::units::au::current_base_unit)

#endif

#endif // BOOST_UNITS_AU_CURRENT_BASE_UNIT_HPP
