#ifndef BOOST_UNITS_AU_VELOCITY_HPP
#define BOOST_UNITS_AU_VELOCITY_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/velocity.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<velocity_dimension, au::system> velocity;
    
            BOOST_UNITS_STATIC_CONSTANT(bohr_per_time, velocity); 
            BOOST_UNITS_STATIC_CONSTANT(bohrs_per_time, velocity);    

        }
    }
}

#endif // BOOST_UNITS_AU_VELOCITY_HPP
