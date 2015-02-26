/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 23, 2015 
 * hw8.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * A test program for a Person class
 */

#include <iostream>
using std::cout;
using std::ostringstream;

#include "UnitTest++.h"

#include "Person.h"

TEST(StreamInsertionOperator)
{
   std::ostringstream output;

   Person person;
}

int main() {
   return UnitTest::RunAllTests();
}