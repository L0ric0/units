#ifndef BOOST_UNIT_AU_CANDELA_BASE_UNIT_HPP
#define BOOST_UNIT_AU_CANDELA_BASE_UNIT_HPP

#include <string>

#include <boost/units/config.hpp>
#include <boost/units/base_unit.hpp>
#include <boost/units/physical_dimensions/luminous_intensity.hpp>
#include <boost/units/base_units/si/candela.hpp>
#include <boost/units/conversion.hpp>

BOOST_UNITS_DEFINE_BASE_UNIT_WITH_CONVERSIONS(au, candela, "candela", "cd", 1, si::candela_base_unit, 306); // exact conversion

#if BOOST_UNITS_HAS_BOOST_TYPEOF

#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

BOOST_TYPEOF_REGISTER_TYPE(boost::units::au::candela_base_unit)

#endif

#endif // BOOST_UNIT_AU_CANDELA_BASE_UNIT_HPP
