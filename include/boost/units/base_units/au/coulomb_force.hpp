// Boost.Units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2018 Sebastian Weber
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_AU_COULOMB_FORCE_BASE_UNIT_HPP
#define BOOST_UNITS_AU_COULOMB_FORCE_BASE_UNIT_HPP

#include <string>

#include <boost/units/config.hpp>
#include <boost/units/base_unit.hpp>
#include <boost/units/physical_dimensions/inverse_permittivity.hpp>
#include <boost/units/physical_dimensions/length.hpp>

namespace boost {

namespace units {

namespace au {

struct coulomb_force_base_unit : public base_unit<coulomb_force_base_unit, inverse_permittivity_dimension, 301>
{
    static std::string name()    { return("coulomb_force"); }
    static std::string symbol() { return("k_e"); }
};

} // namespace au

} // namespace units

} // namespace boost

#if BOOST_UNITS_HAS_BOOST_TYPEOF

#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

BOOST_TYPEOF_REGISTER_TYPE(boost::units::au::coulomb_force_base_unit)

#endif

//#include <boost/units/base_units/detail/conversions.hpp>

#endif // BOOST_UNITS_AU_COULOMB_FORCE_BASE_UNIT_HPP
