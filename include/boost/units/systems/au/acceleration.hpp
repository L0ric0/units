#ifndef BOOST_UNITS_AU_ACCELERATION_HPP
#define BOOST_UNITS_AU_ACCELERATION_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/acceleration.hpp>

namespace boost {
    namespace units { 
        namespace au {

            typedef unit<acceleration_dimension, au::system> acceleration;

            BOOST_UNITS_STATIC_CONSTANT(bohr_per_time_squared, acceleration);
        }
    }
}

#endif // BOOST_UNITS_AU_ACCELERATION_HPP
