#ifndef BOOST_UNITS_AU_LUMINOUS_FLUX_HPP
#define BOOST_UNITS_AU_LUMINOUS_FLUX_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/luminous_flux.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<luminous_flux_dimension, au::system> luminous_flux;

            BOOST_UNITS_STATIC_CONSTANT(lumen, luminous_flux);
            BOOST_UNITS_STATIC_CONSTANT(lumens, luminous_flux); 

        }
    }
}

#endif // BOOST_UNITS_AU_LUMINOUS_FLUX_HPP
