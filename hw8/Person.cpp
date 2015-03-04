/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 23, 2015
 * Person.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * A person class implementation
 *
 */

#include <iomanip>
using std::fixed;
using std::setprecision;

#include <iostream>
using std::istream;
using std::ostream;

#include "Person.h"

ostream 
&ChrisMcCann::operator<<(ostream &out, const Person &value)
{
   out << fixed << setprecision(2)
      << value.firstName    << " " 
      << value.lastName     << " " 
      << value.ageYears     << " "
      << value.heightInches << " "
      << value.weightPounds;

   return out;
}

istream 
&ChrisMcCann::operator>>(istream &in, Person &value)
{
   in >> value.firstName
      >> value.lastName
      >> value.ageYears
      >> value.heightInches
      >> value.weightPounds;

   return in;
}
