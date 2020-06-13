#ifndef BOOST_UNITS_CODATA_ATOMIC_AND_NUCLEAR_CONSTANTS_HPP
#define BOOST_UNITS_CODATA_ATOMIC_AND_NUCLEAR_CONSTANTS_HPP

#include <boost/units/systems/au/codata/alpha_constants.hpp>
#include <boost/units/systems/au/codata/deuteron_constants.hpp>
#include <boost/units/systems/au/codata/electron_constants.hpp>
#include <boost/units/systems/au/codata/helion_constants.hpp>
#include <boost/units/systems/au/codata/muon_constants.hpp>
#include <boost/units/systems/au/codata/neutron_constants.hpp>
#include <boost/units/systems/au/codata/proton_constants.hpp>
#include <boost/units/systems/au/codata/tau_constants.hpp>
#include <boost/units/systems/au/codata/triton_constants.hpp>

namespace boost {
    namespace units {
        namespace au {                
            namespace constants {
                namespace codata {

                    /// CODATA recommended values of the fundamental physical constants: NIST SP 961

                    // ATOMIC AND NUCLEAR
                    /// fine structure constant
                    BOOST_UNITS_PHYSICAL_CONSTANT(alpha, quantity<dimensionless>, 7.2973525376e-3*dimensionless(), 5.0e-12*dimensionless());
                    /// Rydberg constant
                    BOOST_UNITS_PHYSICAL_CONSTANT(R_infinity, quantity<wavenumber>, 10973731.568527/meter, 7.3e-5/meter);
                    /// Bohr radius
                    BOOST_UNITS_PHYSICAL_CONSTANT(a_0, quantity<length>, 0.52917720859e-10*meters, 3.6e-20*meters);
                    /// Hartree energy
                    BOOST_UNITS_PHYSICAL_CONSTANT(E_h, quantity<energy>, 4.35974394e-18*joules, 2.2e-25*joules);
                }
            }
        }
    }
}

#endif // BOOST_UNITS_CODATA_ATOMIC_AND_NUCLEAR_CONSTANTS_HPP
