#ifndef BOOST_UNITS_AU_ILLUMINANCE_HPP
#define BOOST_UNITS_AU_ILLUMINANCE_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/illuminance.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<illuminance_dimension, au::system> illuminance;

            BOOST_UNITS_STATIC_CONSTANT(lux, illuminance); 

        }
    }
}

#endif // BOOST_UNITS_AU_ILLUMINANCE_HPP
