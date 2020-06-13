#ifndef BOOST_UNITS_AU_PRESSURE_HPP
#define BOOST_UNITS_AU_PRESSURE_HPP

#include <boost/units/systems/au/base.hpp>
#include <boost/units/physical_dimensions/pressure.hpp>

namespace boost {
    namespace units {
        namespace au {

            typedef unit<pressure_dimension, au::system> pressure;

            // windef.h #defines pascal on Metrowerks compilers
            #if defined(__MWERKS__)
               #if !__option(only_std_keywords)
                   #define BOOST_UNITS_NO_PASCAL 1
               #elif defined(pascal)
                   #define BOOST_UNITS_NO_PASCAL 1
               #endif
            #elif defined(pascal)
               #define BOOST_UNITS_NO_PASCAL 1
            #elif BOOST_MSVC
               #define BOOST_UNITS_NO_PASCAL 1
            #endif

        }
    }
}

#endif // BOOST_UNITS_AU_PRESSURE_HPP
