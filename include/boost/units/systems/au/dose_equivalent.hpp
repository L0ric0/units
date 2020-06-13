#ifndef BOOST_UNITS_AU_DOSE_EQUIVALENT_HPP
#define BOOST_UNITS_AU_DOSE_EQUIVALENT_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/dose_equivalent.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<dose_equivalent_dimension, au::system> dose_equivalent;

            BOOST_UNITS_STATIC_CONSTANT(sievert, dose_equivalent);  
            BOOST_UNITS_STATIC_CONSTANT(sieverts, dose_equivalent); 

        }
    }
}

#endif // BOOST_UNITS_AU_DOSE_EQUIVALENT_HPP
