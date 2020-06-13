// Boost.Units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2018 Sebastian Weber
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_AU_HBAR_BASE_UNIT_HPP
#define BOOST_UNITS_AU_HBAR_BASE_UNIT_HPP

#include <string>

#include <boost/units/config.hpp>
#include <boost/units/base_unit.hpp>
#include <boost/units/physical_dimensions/action.hpp>

namespace boost {

namespace units {

namespace au {

struct hbar_base_unit : public base_unit<hbar_base_unit, action_dimension, 304>
{
    static std::string name()    { return("hbar"); }
    static std::string symbol() { return("\u0127"); }
};

} // namespace au

} // namespace units

} // namespace boost

#if BOOST_UNITS_HAS_BOOST_TYPEOF

#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

BOOST_TYPEOF_REGISTER_TYPE(boost::units::au::hbar_base_unit)

#endif

//#include <boost/units/base_units/detail/conversions.hpp>

#endif // BOOST_UNITS_AU_HBAR_BASE_UNIT_HPP
