#ifndef BOOST_UNITS_AU_LUMINOUS_INTENSITY_HPP
#define BOOST_UNITS_AU_LUMINOUS_INTENSITY_HPP

#include <boost/units/systems/au/base.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<luminous_intensity_dimension, au::system> luminous_intensity;

            BOOST_UNITS_STATIC_CONSTANT(candela, luminous_intensity);
            BOOST_UNITS_STATIC_CONSTANT(candelas, luminous_intensity);

        }
    }
}

#endif // BOOST_UNITS_AU_LUMINOUS_INTENSITY_HPP
