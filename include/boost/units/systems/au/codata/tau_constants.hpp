#ifndef BOOST_UNITS_CODATA_TAU_CONSTANTS_HPP
#define BOOST_UNITS_CODATA_TAU_CONSTANTS_HPP

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
                    
                    /// tau mass
                    BOOST_UNITS_PHYSICAL_CONSTANT(m_tau, quantity<mass>, 3.16777e-27*kilograms, 5.2e-31*kilograms);
                    /// tau-electron mass ratio
                    BOOST_UNITS_PHYSICAL_CONSTANT(m_tau_over_m_e, quantity<dimensionless>, 3477.48*dimensionless(), 5.7e-1*dimensionless());
                    /// tau-muon mass ratio
                    BOOST_UNITS_PHYSICAL_CONSTANT(m_tau_over_m_mu, quantity<dimensionless>, 16.8183*dimensionless(), 2.7e-3*dimensionless());
                    /// tau-proton mass ratio
                    BOOST_UNITS_PHYSICAL_CONSTANT(m_tau_over_m_p, quantity<dimensionless>, 1.89390*dimensionless(), 3.1e-4*dimensionless());
                    /// tau-neutron mass ratio
                    BOOST_UNITS_PHYSICAL_CONSTANT(m_tau_over_m_n, quantity<dimensionless>, 1.89129*dimensionless(), 3.1e-4*dimensionless());
                    /// tau molar mass
                    BOOST_UNITS_PHYSICAL_CONSTANT(M_tau, quantity<mass_over_amount>, 1.90768e-3*kilograms/mole, 3.1e-7*kilograms/mole);
                    /// tau Compton wavelength
                    BOOST_UNITS_PHYSICAL_CONSTANT(lambda_C_tau, quantity<length>, 0.69772e-15*meters, 1.1e-19*meters);

                }
            }
        }
    }
}

#endif // BOOST_UNITS_CODATA_TAU_CONSTANTS_HPP
