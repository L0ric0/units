#ifndef BOOST_UNITS_AU_TIME_BASE_UNIT_HPP
#define BOOST_UNITS_AU_TIME_BASE_UNIT_HPP

#include <string>

#include <boost/units/config.hpp>
#include <boost/units/base_unit.hpp>
#include <boost/units/physical_dimensions/time.hpp>
#include <boost/units/base_units/si/second.hpp>
#include <boost/units/conversion.hpp>

BOOST_UNITS_DEFINE_BASE_UNIT_WITH_CONVERSIONS(au, time, "time", "t", 2.4188843265857e-17, si::second_base_unit, 304);

#if BOOST_UNITS_HAS_BOOST_TYPEOF

#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

BOOST_TYPEOF_REGISTER_TYPE(boost::units::au::current_base_unit)

#endif

#endif // BOOST_UNITS_AU_TIME_BASE_UNIT_HPP
