#ifndef BOOST_UNITS_AU_ACTIVITY_HPP
#define BOOST_UNITS_AU_ACTIVITY_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/activity.hpp>

namespace boost {
    namespace units { 
        namespace au {

            typedef unit<activity_dimension, au::system> activity;

            BOOST_UNITS_STATIC_CONSTANT(becquerel, activity);
            BOOST_UNITS_STATIC_CONSTANT(becquerels, activity);

        }
    }
}

#endif // BOOST_UNITS_AU_ACTIVITY_HPP
