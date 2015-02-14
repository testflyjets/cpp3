/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 13, 2015
 * hw6.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * A test program for a template class of arrays
 */

#include <iostream>
using std::cout;

#include <stdexcept>
using std::invalid_argument;

#include "UnitTest++.h"

#include "Array.h"

using ChrisMcCann::Array;

TEST(DefaultConstructor)
{
   const int intSize = 5;
   Array<int, intSize> intArray;

   // set values
   for (int i = 0; i < intArray.size(); ++i)
   {
      intArray[i] = i + 1;
   }

   // output values
   for (int i = 0; i < intArray.size(); ++i)
   {
      cout << intArray[i] << "\n";
   }
}

TEST(CopyConstructor)
{

}

TEST(AccessSubscriptLessThanZero)
{
   Array<int, 3> intArray;

   CHECK_THROW(intArray[-1], std::invalid_argument);
}

TEST(AccessSubscriptGreaterThanOrEqualToSize)
{
   Array<int, 3> intArray;

   CHECK_THROW(intArray[3], std::invalid_argument);
   CHECK_THROW(intArray[4], std::invalid_argument);
}

int main() {
   return UnitTest::RunAllTests();
}
