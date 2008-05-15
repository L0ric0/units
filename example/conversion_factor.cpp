// Boost.Units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2003-2008 Matthias Christian Schabel
// Copyright (C) 2008 Steven Watanabe
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

/** 
\file
    
\brief conversion_factor.cpp

\detailed An example of using conversion_factor.

Output:
@verbatim

//[conversion_factor_output
1e-005
100
1e-005
100
0.01
//]

@endverbatim
**/

#include <iostream>

#include <boost/units/cmath.hpp>
#include <boost/units/io.hpp>
#include <boost/units/quantity.hpp>
#include <boost/units/systems/cgs/acceleration.hpp>
#include <boost/units/systems/si/acceleration.hpp>
#include <boost/units/systems/si/force.hpp>
#include <boost/units/systems/cgs/force.hpp>
#include <boost/units/systems/si/mass.hpp>
#include <boost/units/systems/cgs/mass.hpp>
#include <boost/units/systems/si/momentum.hpp>
#include <boost/units/systems/cgs/momentum.hpp>

int main()
{
    using namespace boost;
    using namespace boost::units;

    //[conversion_factor_snippet_1
    
    double dyne_to_newton =
        conversion_factor(CGS::dyne,SI::newton);
    std::cout << dyne_to_newton << std::endl;

    double force_over_mass_conversion =
        conversion_factor(SI::newton/SI::kilogram,CGS::dyne/CGS::gram);
    std::cout << force_over_mass_conversion << std::endl;

    double momentum_conversion =
        conversion_factor(CGS::momentum(),SI::momentum());
    std::cout << momentum_conversion << std::endl;

    double momentum_over_mass_conversion =
        conversion_factor(SI::momentum()/SI::mass(),CGS::momentum()/CGS::gram);
    std::cout << momentum_over_mass_conversion << std::endl;

    double acceleration_conversion =
        conversion_factor(CGS::gal,SI::meter_per_second_squared);
    std::cout << acceleration_conversion << std::endl;
    
    //]

    return 0;
}
