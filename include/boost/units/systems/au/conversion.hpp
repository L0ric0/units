#ifndef BOOST_UNITS_AU_CONVERSION_HPP
#define BOOST_UNITS_AU_CONVERSION_HPP

#include <boost/units/conversion.hpp>

#include "boost/units/systems/au.hpp"

#include <boost/units/systems/si.hpp>
#include <boost/units/systems/si/codata_constants.hpp>

#include <cmath>

namespace boost {
    namespace units {

        BOOST_UNITS_DEFINE_CONVERSION_FACTOR(au::length, si::length, double, 5.29177210903e-11);
        BOOST_UNITS_DEFINE_CONVERSION_FACTOR(au::mass, si::mass, double, 9.1093837015e-31);
        BOOST_UNITS_DEFINE_CONVERSION_FACTOR(au::energy, si::energy, double, 4.3597447222071e-18);
        BOOST_UNITS_DEFINE_CONVERSION_FACTOR(au::time, si::time, double, 2.4188843265857e-17);
        BOOST_UNITS_DEFINE_CONVERSION_FACTOR(au::temperature, si::temperature, double, 3.1578e5);

        BOOST_UNITS_DEFINE_CONVERSION_FACTOR(au::volume, si::volume, double, std::pow(5.29177210903e-11, 3));


        BOOST_UNITS_DEFINE_CONVERSION_FACTOR(au::magnetic_flux_density, si::magnetic_flux_density, double, 2.35051756758e5);

        BOOST_UNITS_DEFINE_CONVERSION_FACTOR(au::frequency, si::frequency, double, 4.1341e16);
        BOOST_UNITS_DEFINE_CONVERSION_FACTOR(au::wavenumber, si::wavenumber, double, 1.8898e10);


        BOOST_UNITS_DEFINE_CONVERSION_FACTOR(au::action, si::action, double, 1.054571817e-34);
        BOOST_UNITS_DEFINE_CONVERSION_FACTOR(au::electric_charge, si::electric_charge, double, 1.602176634e-19);
        BOOST_UNITS_DEFINE_CONVERSION_FACTOR(au::current, si::current, double, 6.623618237510e-3);
        BOOST_UNITS_DEFINE_CONVERSION_FACTOR(au::electric_potential, si::electric_potential, double, 27.211386245988);
        BOOST_UNITS_DEFINE_CONVERSION_FACTOR(au::force, si::force, double, 8.2387234983e-8);
        BOOST_UNITS_DEFINE_CONVERSION_FACTOR(au::momentum, si::momentum, double, 1.99285191410e-24);
        BOOST_UNITS_DEFINE_CONVERSION_FACTOR(au::permittivity, si::permittivity, double, 1.11265005545e-10);
        BOOST_UNITS_DEFINE_CONVERSION_FACTOR(au::velocity, si::velocity, double, 2.18769126364e6);

    }
}

#endif //BOOST_UNITS_AU_CONVERSION_HPP
