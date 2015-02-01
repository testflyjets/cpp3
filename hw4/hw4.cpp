/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * January 31, 2015
 * hw4.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * A unit test class for ChrisMcCann::Complex 
 *
 */

#include <iostream>
using std::cout;
using std::cin;

#include "UnitTest++.h"

#include "Complex.h"
namespace cm = ChrisMcCann;
using cm::Complex;

int main() {
   return UnitTest::RunAllTests();
}