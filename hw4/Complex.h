#ifndef CHRIS_MCCANN_COMPLEX_H
#define CHRIS_MCCANN_COMPLEX_H
/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * January 31, 2015
 * Complex.h
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * Defines the interface for a Complex number class
 *
 */

#include <iostream>
using std::istream;
using std::ostream;

namespace ChrisMcCann
{
   //=========================================================================
   // SUMMARY
   //      A complex number class that represents numbers in the form of 
   //      a + bi where a and b are real numbers and i is an imaginary unit
   //      satisfying i*i = -1.
   //
   //      (reference: http://en.wikipedia.org/wiki/Complex_number)
   // 
   // RESOURCES
   //      A complex number does not own any resources.
   //=========================================================================
   class Complex
   {
      //---------------------------------------------------------------------
      // SUMMARY
      //      A friend function overload of the stream extraction operator.
      //
      // PARAMETERS
      //      in
      //          An istream from which the complex number can be extracted.
      //      value
      //          Complex object where the value that the extracted characters 
      //          represent is stored.
      //
      // RETURNS
      //      The istream object.
      //---------------------------------------------------------------------
      friend istream &operator>>(istream &in, Complex &value);

      //---------------------------------------------------------------------
      // SUMMARY
      //      A friend function overload of the stream insertion operator.
      //
      // PARAMETERS
      //      out
      //          An ostream into which the formatted complex number will be
      //          inserted.
      //      value
      //          Complex object to be formatted and inserted into the 
      //          stream.
      //
      // RETURNS
      //      The ostream object.
      //---------------------------------------------------------------------
      friend ostream &operator<<(ostream &out, const Complex &value);

   public:
      //---------------------------------------------------------------------
      // SUMMARY
      //      Constructor.  Creates a complex number initializing the real and
      //      complex parts by default to 0, or to the given parameters.
      //
      // RESOURCES
      //      The complex number will be initialized to not own any resources.
      //
      // PARAMETERS
      //      real
      //          The double value representing the number's real part.
      //      imaginary
      //          The double value representing the number's imaginary part.
      //
      // RETURNS
      //      Nothing
      //---------------------------------------------------------------------
      Complex(double real = 0.0, double imaginary = 0.0);

      // overload of operator+ to allow adding two Complex objects
      Complex operator+(const Complex &other) const;

      // overload of operator- to allow subtracting two Complex objects
      Complex operator-(const Complex &other) const;

      // overload of operator== to check equality between two Complex objects
      bool operator==(const Complex &other) const;
      // overload of operator!= to check inequality between two Complex objects
      bool operator!=(const Complex &other) const;

      // getter for real component of complex number
      double getReal() const;
      // getter for imaginary component of complex number
      double getImaginary() const;

   private:
      double real;
      double imaginary;
   };
}

#endif
