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

namespace ChrisMcCann
{
   ostream &operator<<(ostream &out, const Complex &value)
   {
      out << value.real;

      return out;
   }
}

