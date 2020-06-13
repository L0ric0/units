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

#include <boost/units/base_units/au/boltzmann.hpp>
#include <boost/units/base_units/au/charge.hpp>
#include <boost/units/base_units/au/coulomb_force.hpp>
#include <boost/units/base_units/au/electron_mass.hpp>
#include <boost/units/base_units/au/hbar.hpp>

#include <boost/units/base_units/si/meter.hpp>


namespace boost {

namespace units { 

namespace au {

/// placeholder class defining au unit system
typedef make_system<
                    boltzmann_base_unit,
                    charge_base_unit,
		    coulomb_force_base_unit,
//		boost::units::si::meter_base_unit,	
                    electron_mass_base_unit,
		    hbar_base_unit
		    >::type system;

/// various unit typedefs for convenience
typedef unit<dimensionless_type,system>         dimensionless;

} // namespace au
                                                    
} // namespace units

} // namespace boost

#endif // BOOST_UNITS_AU_BASE_HPP
