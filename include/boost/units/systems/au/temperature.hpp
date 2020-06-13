#ifndef BOOST_UNITS_AU_TEMPERATURE_HPP
#define BOOST_UNITS_AU_TEMPERATURE_HPP

#include <boost/units/systems/au/base.hpp>

namespace boost {
	namespace units {
		namespace au {

			typedef unit<temperature_dimension, au::system> temperature;
    
			BOOST_UNITS_STATIC_CONSTANT(boltzmann, temperature);
			BOOST_UNITS_STATIC_CONSTANT(k_b, temperature);

		}
	}
}

#endif // BOOST_UNITS_AU_TEMPERATURE_HPP
