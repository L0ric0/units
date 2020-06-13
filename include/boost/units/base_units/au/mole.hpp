#ifndef BOOST_UNIT_AU_MOLE_BASE_UNIT_HPP
#define BOOST_UNIT_AU_MOLE_BASE_UNIT_HPP

#include <string>

#include <boost/units/config.hpp>
#include <boost/units/base_unit.hpp>
#include <boost/units/physical_dimensions/amount.hpp>
#include <boost/units/base_units/si/mole.hpp>
#include <boost/units/conversion.hpp>

BOOST_UNITS_DEFINE_BASE_UNIT_WITH_CONVERSIONS(au, mole, "mole", "mol", 1, si::mole_base_unit, 305);

#if BOOST_UNITS_HAS_BOOST_TYPEOF

#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

BOOST_TYPEOF_REGISTER_TYPE(boost::units::au::mole_base_unit)

#endif

#endif // BOOST_UNIT_AU_MOLE_BASE_UNIT_HPP
