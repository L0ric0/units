#ifndef BOOST_UNITS_AU_AMOUNT_HPP
#define BOOST_UNITS_AU_AMOUNT_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/amount.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<amount_dimension, au::system> amount;

            BOOST_UNITS_STATIC_CONSTANT(mole, amount);
            BOOST_UNITS_STATIC_CONSTANT(moles, amount);

        }
    }
}

#endif // BOOST_UNITS_AU_AMOUNT_HPP
