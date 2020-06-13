#ifndef BOOST_UNITS_AU_ANGULAR_VELOCITY_HPP
#define BOOST_UNITS_AU_ANGULAR_VELOCITY_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/angular_velocity.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<angular_velocity_dimension, au::system> angular_velocity;

            BOOST_UNITS_STATIC_CONSTANT(radian_per_time, angular_velocity);
            BOOST_UNITS_STATIC_CONSTANT(radians_per_time, angular_velocity);

        }
    }
}

#endif // BOOST_UNITS_AU_ANGULAR_VELOCITY_HPP
