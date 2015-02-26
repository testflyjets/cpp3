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
 * A header file for a Person class
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
      friend istream &operator>>(istream &in, Person &value);
      friend ostream &operator<<(ostream &out, const Person &value);

   private:
      string firstName;
      string lastName;

      int ageYears;

      double heightInches;
      double weightPounds;
   };
}

#endif