#ifndef BOOST_UNITS_CODATA_ALPHA_CONSTANTS_HPP
#define BOOST_UNITS_CODATA_ALPHA_CONSTANTS_HPP

#include <boost/units/quantity.hpp>
#include <boost/units/static_constant.hpp>

#include <boost/units/systems/detail/constants.hpp>
#include <boost/units/systems/au/amount.hpp>
#include <boost/units/systems/au/area.hpp>
#include <boost/units/systems/au/electric_charge.hpp>
#include <boost/units/systems/au/energy.hpp>
#include <boost/units/systems/au/frequency.hpp>
#include <boost/units/systems/au/length.hpp>
#include <boost/units/systems/au/mass.hpp>
#include <boost/units/systems/au/magnetic_flux_density.hpp>
#include <boost/units/systems/au/time.hpp>
#include <boost/units/systems/au/wavenumber.hpp>

#include <boost/units/systems/au/codata/typedefs.hpp>

/// \file
/// CODATA recommended values of fundamental atomic and nuclear constants
/// CODATA 2006 values as of 2007/03/30

namespace boost {
    namespace units {
        namespace au {
            namespace constants {
                namespace codata {

                    /// CODATA recommended values of the fundamental physical constants: NIST SP 961

                    /// alpha particle mass
                    BOOST_UNITS_PHYSICAL_CONSTANT(m_alpha, quantity<mass>, 6.64465620e-27*kilograms, 3.3e-34*kilograms);
                    /// alpha-electron mass ratio
                    BOOST_UNITS_PHYSICAL_CONSTANT(m_alpha_over_m_e, quantity<dimensionless>, 7294.2995365*dimensionless(), 3.1e-6*dimensionless());
                    /// alpha-proton mass ratio
                    BOOST_UNITS_PHYSICAL_CONSTANT(m_alpha_over_m_p, quantity<dimensionless>, 3.97259968951*dimensionless(), 4.1e-10*dimensionless());
                    /// alpha molar mass
                    BOOST_UNITS_PHYSICAL_CONSTANT(M_alpha, quantity<mass_over_amount>, 4.001506179127e-3*kilograms/mole, 6.2e-14*kilograms/mole);
                }
            }
        }
    }
}

#endif // BOOST_UNITS_CODATA_ALPHA_CONSTANTS_HPP
