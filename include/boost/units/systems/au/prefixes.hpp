#ifndef BOOST_UNITS_AU_PREFIXES_HPP
#define BOOST_UNITS_AU_PREFIXES_HPP

#include <boost/units/static_constant.hpp>

#include <boost/units/make_scaled_unit.hpp>
#include <boost/units/systems/au/dimensionless.hpp>

namespace boost {
    namespace units {
        namespace au {

            #define BOOST_UNITS_METRIC_PREFIX(exponent, name)                                                       \
                typedef make_scaled_unit<dimensionless, scale<10, static_rational<exponent> > >::type name ## _type;\
                BOOST_UNITS_STATIC_CONSTANT(name, name ## _type)

            BOOST_UNITS_METRIC_PREFIX(-24, yocto);
            BOOST_UNITS_METRIC_PREFIX(-21, zepto);
            BOOST_UNITS_METRIC_PREFIX(-18, atto);
            BOOST_UNITS_METRIC_PREFIX(-15, femto);
            BOOST_UNITS_METRIC_PREFIX(-12, pico);
            BOOST_UNITS_METRIC_PREFIX(-9, nano);
            BOOST_UNITS_METRIC_PREFIX(-6, micro);
            BOOST_UNITS_METRIC_PREFIX(-3, milli);
            BOOST_UNITS_METRIC_PREFIX(-2, centi);
            BOOST_UNITS_METRIC_PREFIX(-1, deci);
            BOOST_UNITS_METRIC_PREFIX(1, deka);
            BOOST_UNITS_METRIC_PREFIX(2, hecto);
            BOOST_UNITS_METRIC_PREFIX(3, kilo);
            BOOST_UNITS_METRIC_PREFIX(6, mega);
            BOOST_UNITS_METRIC_PREFIX(9, giga);
            BOOST_UNITS_METRIC_PREFIX(12, tera);
            BOOST_UNITS_METRIC_PREFIX(15, peta);
            BOOST_UNITS_METRIC_PREFIX(18, exa);
            BOOST_UNITS_METRIC_PREFIX(21, zetta);
            BOOST_UNITS_METRIC_PREFIX(24, yotta);

        }
    }
}

#endif // BOOST_UNITS_AU_PREFIXES_HPP
