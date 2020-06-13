// Boost.Units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2003-2008 Matthias Christian Schabel
// Copyright (C) 2008 Steven Watanabe
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_AU_IO_HPP
#define BOOST_UNITS_AU_IO_HPP

#include <boost/units/io.hpp>
#include <boost/units/reduce_unit.hpp>

#include <boost/units/systems/au.hpp>

namespace boost {

namespace units { 

inline std::string name_string(const reduce_unit<au::energy>::type&) { return "hartree"; }
inline std::string symbol_string(const reduce_unit<au::energy>::type&) { return "E_h"; }

inline std::string name_string(const reduce_unit<au::length>::type&) { return "bohr"; }
inline std::string symbol_string(const reduce_unit<au::length>::type&) { return "a_0"; }

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_AU_IO_HPP
