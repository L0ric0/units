#ifndef BOOST_UNITS_AU_WAVENUMBER_HPP
#define BOOST_UNITS_AU_WAVENUMBER_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/wavenumber.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<wavenumber_dimension, au::system> wavenumber;

            BOOST_UNITS_STATIC_CONSTANT(reciprocal_bohr, wavenumber);
            BOOST_UNITS_STATIC_CONSTANT(reciprocal_bohrs, wavenumber);

        }
    }
}

#endif // BOOST_UNITS_AU_WAVENUMBER_HPP
