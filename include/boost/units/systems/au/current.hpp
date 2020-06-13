#ifndef BOOST_UNITS_AU_CURRENT_HPP
#define BOOST_UNITS_AU_CURRENT_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/current.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<current_dimension, au::system> current;

            BOOST_UNITS_STATIC_CONSTANT(ampere, current);
            BOOST_UNITS_STATIC_CONSTANT(amperes, current);

        }
    }
}

#endif // BOOST_UNITS_AU_CURRENT_HPP
