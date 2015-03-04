#ifndef CHRIS_MCCANN_PERSON_H
#define CHRIS_MCCANN_PERSON_H

/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * Feb 23, 2015
 * Person.h
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * A header file for a Person class whose attributes
 * can be set via stream extraction and output via
 * stream insertion.
 *
 */

#include <iostream>
using std::istream;
using std::ostream;

#include <string>
using std::string;

namespace ChrisMcCann
{
   class Person
   {
      // stream extraction operator overload
      //
      // can load Person attributes in the following format:
      //
      //    firstName lastName ageYears heightInches weightPounds
      //
      // Example input:
      //
      //    John Smith 37 72.25 189.37
      //
      friend istream &operator>>(istream &in, Person &value);

      // stream insertion operator overload
      //
      // outputs a Person object in the following format:
      //
      //    firstName lastName ageYears heightInches weightPounds
      //
      // Example output:
      //
      //    John Smith 37 72.25 189.37
      //
      // non-integer numeric values are fixed to two decimal places
      //
      friend ostream &operator<<(ostream &out, const Person &value);

   private:
      // Person attributes
      string firstName;
      string lastName;

      int ageYears;

      double heightInches;
      double weightPounds;
   };
}

#endif