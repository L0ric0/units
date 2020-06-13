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

namespace boost {

namespace units {

namespace au {

struct electron_mass_base_unit : public base_unit<electron_mass_base_unit, mass_dimension, 303>
{
    static std::string name()    { return("electron_mass"); }
    static std::string symbol() { return("m_e"); }
};

} // namespace au

} // namespace units

} // namespace boost

#if BOOST_UNITS_HAS_BOOST_TYPEOF

#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

BOOST_TYPEOF_REGISTER_TYPE(boost::units::au::electron_mass_base_unit)

#endif

//#include <boost/units/base_units/detail/conversions.hpp>

#endif // BOOST_UNITS_AU_ELECTRON_MASS_BASE_UNIT_HPP
