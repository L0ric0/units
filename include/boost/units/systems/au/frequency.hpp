#ifndef BOOST_UNITS_AU_FREQUENCY_HPP
#define BOOST_UNITS_AU_FREQUENCY_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/frequency.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<frequency_dimension, au::system> frequency;

            BOOST_UNITS_STATIC_CONSTANT(hertz, frequency);

        }
    }
}

#endif // BOOST_UNITS_AU_FREQUENCY_HPP
