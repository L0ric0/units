#ifndef BOOST_UNITS_AU_PLANE_ANGLE_HPP
#define BOOST_UNITS_AU_PLANE_ANGLE_HPP

#include <boost/units/systems/au/base.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<plane_angle_dimension, au::system> plane_angle;

            BOOST_UNITS_STATIC_CONSTANT(radian, plane_angle);
            BOOST_UNITS_STATIC_CONSTANT(radians, plane_angle);

        }
    }
}

#endif // BOOST_UNITS_AU_PLANE_ANGLE_HPP
