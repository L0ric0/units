#ifndef BOOST_UNITS_AU_SOLID_ANGLE_HPP
#define BOOST_UNITS_AU_SOLID_ANGLE_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/solid_angle.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<solid_angle_dimension, au::system> solid_angle;

            BOOST_UNITS_STATIC_CONSTANT(steradian, solid_angle);
            BOOST_UNITS_STATIC_CONSTANT(steradians, solid_angle);

        }
    }
}

#endif // BOOST_UNITS_AU_SOLID_ANGLE_HPP
