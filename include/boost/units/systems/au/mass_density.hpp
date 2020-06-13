#ifndef BOOST_UNITS_AU_MASS_DENSITY_HPP
#define BOOST_UNITS_AU_MASS_DENSITY_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/mass_density.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<mass_density_dimension, au::system> mass_density;

            BOOST_UNITS_STATIC_CONSTANT(electron_mass_per_cubic_bohr, mass_density);
            BOOST_UNITS_STATIC_CONSTANT(m_e_per_cubic_bohr, mass_density);

        }
    }
}

#endif // BOOST_UNITS_AU_MASS_DENSITY_HPP
