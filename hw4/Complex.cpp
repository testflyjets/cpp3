/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * January 31, 2015
 * Complex.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * A complex number implementation
 *
 */
#include <iostream>
using std::cout;
using std::cerr;
using std::ostream;

#include "Complex.h"

using ChrisMcCann::Complex;

ChrisMcCann::Complex::Complex(
   double real, 
   double imaginary) 
   : real(real), 
     imaginary(imaginary)
{

}

ChrisMcCann::Complex
ChrisMcCann::Complex::operator+(const Complex &other) const
{
   double real = this->real + other.real;
   double imaginary = this->imaginary + other.imaginary;

   return Complex(real, imaginary);
}

ChrisMcCann::Complex
ChrisMcCann::Complex::operator-(const Complex &other) const
{
   double real = this->real - other.real;
   double imaginary = this->imaginary - other.imaginary;

   return Complex(real, imaginary);
}

bool 
ChrisMcCann::Complex::operator==(const Complex &other) const
{
   return this->real == other.real && this->imaginary == other.imaginary;
}

bool 
ChrisMcCann::Complex::operator!=(const Complex &other) const
{
   return !(*this == other);
}

ostream 
&ChrisMcCann::operator<<(ostream &out, const Complex &value)
{
   out << value.real;
   if (value.imaginary >= 0)
      out << "+";
   out << value.imaginary;
   out << "i";

   return out;
}

istream 
&ChrisMcCann::operator>>(istream &in, Complex &value)
{
   double real;
   char iSign;
   double imaginary;
   char i;

   in >> real;
   in >> iSign;
   in >> imaginary;
   in >> i;          // we'll be discarding this

   value.real = real;
   value.imaginary = imaginary;
   if (iSign == '-')
   {
      value.imaginary = -value.imaginary;
   }

   return in;
}

double
ChrisMcCann::Complex::getReal() const
{
   return this->real;
}

double
ChrisMcCann::Complex::getImaginary() const
{
   return this->imaginary;
}
