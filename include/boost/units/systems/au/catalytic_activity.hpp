#ifndef BOOST_UNITS_AU_CATALYTIC_ACTIVITY_HPP
#define BOOST_UNITS_AU_CATALYTIC_ACTIVITY_HPP

#include <boost/units/derived_dimension.hpp>
#include <boost/units/systems/au/base.hpp>

namespace boost {
    namespace units {
        namespace au {

            /// catalytic activity : T^-1 A^1
            typedef derived_dimension<time_base_dimension, -1, amount_base_dimension, 1>::type catalytic_activity_dim;    

            typedef unit<au::catalytic_activity_dim, au::system> catalytic_activity;

            BOOST_UNITS_STATIC_CONSTANT(katal, catalytic_activity);
            BOOST_UNITS_STATIC_CONSTANT(katals, catalytic_activity);

        }
    }
}

#endif // BOOST_UNITS_AU_CATALYTIC_ACTIVITY_HPP
