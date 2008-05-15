// Boost.Units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2003-2008 Matthias Christian Schabel
// Copyright (C) 2007-2008 Steven Watanabe
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNIT_SYSTEMS_OTHER_FERMI_HPP_INCLUDED
#define BOOST_UNIT_SYSTEMS_OTHER_FERMI_HPP_INCLUDED

#include <boost/units/scaled_base_unit.hpp>
#include <boost/units/static_rational.hpp>
#include <boost/units/scale.hpp>
#include <boost/units/systems/base_units/meter.hpp>

namespace boost {
namespace units {
namespace metric {

typedef scaled_base_unit<meter_base_unit, scale<10, static_rational<-15> > > fermi_base_unit;

}

template<>
struct base_unit_info<metric::fermi_base_unit> {
    static const char* name()   { return("fermi"); }
    static const char* symbol() { return("fm"); }
};
}
}

#endif
