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

#ifndef CHRIS_MCCANN_COMPLEX_H
#define CHRIS_MCCANN_COMPLEX_H

#include <iostream>
using std::istream;
using std::ostream;

namespace ChrisMcCann
{
   class Complex
   {
      friend istream &operator>>(istream &in, Complex &value);
      friend ostream &operator<<(ostream &out, const Complex &value);

   public:
      Complex(double real = 0.0, double imaginary = 0.0);

      Complex operator+(const Complex &other) const;
      Complex operator-(const Complex &other) const;

      bool operator==(const Complex &other) const;
      bool operator!=(const Complex &other) const;

      double getReal() const;
      double getImaginary() const;

   private:
      double real;
      double imaginary;
   };
}

#endif
