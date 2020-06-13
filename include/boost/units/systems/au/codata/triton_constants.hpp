#ifndef BOOST_UNITS_CODATA_TRITON_CONSTANTS_HPP
#define BOOST_UNITS_CODATA_TRITON_CONSTANTS_HPP

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
                    
                    /// triton mass
                    BOOST_UNITS_PHYSICAL_CONSTANT(m_t, quantity<mass>, 5.00735588e-27*kilograms, 2.5e-34*kilograms);
                    /// triton-electron mass ratio
                    BOOST_UNITS_PHYSICAL_CONSTANT(m_t_over_m_e, quantity<dimensionless>, 5496.9215269*dimensionless(), 5.1e-6*dimensionless());
                    /// triton-proton mass ratio
                    BOOST_UNITS_PHYSICAL_CONSTANT(m_t_over_m_p, quantity<dimensionless>, 2.9937170309*dimensionless(), 2.5e-9*dimensionless());
                    /// triton molar mass
                    BOOST_UNITS_PHYSICAL_CONSTANT(M_t, quantity<mass_over_amount>, 3.0155007134e-3*kilograms/mole, 2.5e-12*kilograms/mole);
                    /// triton magnetic moment
                    BOOST_UNITS_PHYSICAL_CONSTANT(mu_t, quantity<energy_over_magnetic_flux_density>, 1.504609361e-26*joules/tesla, 4.2e-34*joules/tesla);
                    /// triton-Bohr magneton ratio
                    BOOST_UNITS_PHYSICAL_CONSTANT(mu_t_over_mu_B, quantity<dimensionless>, 1.622393657e-3*dimensionless(), 2.1e-11*dimensionless());
                    /// triton-nuclear magneton ratio
                    BOOST_UNITS_PHYSICAL_CONSTANT(mu_t_over_mu_N, quantity<dimensionless>, 2.978962448*dimensionless(), 3.8e-8*dimensionless());
                    /// triton g-factor
                    BOOST_UNITS_PHYSICAL_CONSTANT(g_t, quantity<dimensionless>, 5.957924896*dimensionless(), 7.6e-8*dimensionless());
                    /// triton-electron magnetic moment ratio
                    BOOST_UNITS_PHYSICAL_CONSTANT(mu_t_over_mu_e, quantity<dimensionless>, -1.620514423e-3*dimensionless(), 2.1e-11*dimensionless());
                    /// triton-proton magnetic moment ratio
                    BOOST_UNITS_PHYSICAL_CONSTANT(mu_t_over_mu_p, quantity<dimensionless>, 1.066639908*dimensionless(), 1.0e-8*dimensionless());
                    /// triton-neutron magnetic moment ratio
                    BOOST_UNITS_PHYSICAL_CONSTANT(mu_t_over_mu_n, quantity<dimensionless>, -1.55718553*dimensionless(), 3.7e-7*dimensionless());

                }
            }
        }
    }
}

#endif // BOOST_UNITS_CODATA_TRITON_CONSTANTS_HPP
