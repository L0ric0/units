#ifndef BOOST_UNITS_AU_ABSORBED_DOSE_HPP
#define BOOST_UNITS_AU_ABSORBED_DOSE_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/absorbed_dose.hpp>

namespace boost {
    namespace units {
        namespace au {
            typedef unit<absorbed_dose_dimension, au::system> absorbed_dose;

            BOOST_UNITS_STATIC_CONSTANT(gray, absorbed_dose);
            BOOST_UNITS_STATIC_CONSTANT(grays, absorbed_dose);
        }
    }
}

#endif //BOOST_UNITS_AU_ABSORBED_DOSE_HPP
