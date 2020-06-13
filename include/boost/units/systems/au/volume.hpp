#ifndef BOOST_UNITS_AU_VOLUME_HPP
#define BOOST_UNITS_AU_VOLUME_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/volume.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<volume_dimension, au::system> volume;

            BOOST_UNITS_STATIC_CONSTANT(cubic_bohr, volume);
            BOOST_UNITS_STATIC_CONSTANT(cubic_bohrs, volume);

        }
    }
}

#endif // BOOST_UNITS_AU_VOLUME_HPP
