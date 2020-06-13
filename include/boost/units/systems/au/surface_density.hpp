#ifndef BOOST_UNITS_AU_SURFACE_DENSITY_HPP
#define BOOST_UNITS_AU_SURFACE_DENSITY_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/surface_density.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<surface_density_dimension, au::system> surface_density;

            BOOST_UNITS_STATIC_CONSTANT(electron_mass_per_square_bohr, surface_density);
            BOOST_UNITS_STATIC_CONSTANT(m_e_per_square_bohr, surface_density);

        }
    }
}

#endif // BOOST_UNITS_AU_SURFACE_DENSITY_HPP
