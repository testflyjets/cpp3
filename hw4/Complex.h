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

namespace ChrisMcCann
{
   class Complex
   {
   public:
      Complex(double real, double imaginary);

   private:
      double real;
      double imaginary;
   };
}

#endif
