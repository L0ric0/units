#ifndef BOOST_UNITS_AU_CONDUCTANCE_HPP
#define BOOST_UNITS_AU_CONDUCTANCE_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/conductance.hpp>

namespace boost {
    namespace units { 
        namespace au {

            typedef unit<conductance_dimension, au::system> conductance;

            BOOST_UNITS_STATIC_CONSTANT(siemen, conductance);
            BOOST_UNITS_STATIC_CONSTANT(siemens, conductance);
            BOOST_UNITS_STATIC_CONSTANT(mho, conductance);
            BOOST_UNITS_STATIC_CONSTANT(mhos, conductance);

        }
    }
}

#endif // BOOST_UNITS_AU_CONDUCTANCE_HPP
