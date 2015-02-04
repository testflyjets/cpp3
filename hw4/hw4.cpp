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

/*
 * A test fixture that redirects std::cout for test purposes
 */
struct coutRedirect {
   coutRedirect(std::streambuf *new_buffer)
   : old(std::cout.rdbuf(new_buffer))
   { }

   ~coutRedirect() {
      std::cout.rdbuf(old);
   }

private:
   std::streambuf *old;
};

TEST(DefaultConstructor)
{
   Complex complex;
   
}

TEST(ConstructorWithParams)
{
   Complex complex(3, -4);
}

TEST(OutputComplex)
{
   // the expected output
   std::ostringstream output;
   output << "0+0i";

   // create a buffer to redirect cerr so we can capture it
   std::stringstream buffer;
   struct coutRedirect redirect(buffer.rdbuf());

   Complex complex;
   cout << complex;

   CHECK_EQUAL(buffer.str(), output.str());
}

TEST(OutputComplexNegativeReal)
{
   // the expected output
   std::ostringstream output;
   output << "-2+3i";

   // create a buffer to redirect cerr so we can capture it
   std::stringstream buffer;
   struct coutRedirect redirect(buffer.rdbuf());

   Complex complex(-2, 3);
   cout << complex;

   CHECK_EQUAL(buffer.str(), output.str());
}

TEST(OutputComplexNegativeImaginary)
{
   // the expected output
   std::ostringstream output;
   output << "1-5i";

   // create a buffer to redirect cerr so we can capture it
   std::stringstream buffer;
   struct coutRedirect redirect(buffer.rdbuf());

   Complex complex(1, -5);
   cout << complex;

   CHECK_EQUAL(buffer.str(), output.str());
}

int main() {
   return UnitTest::RunAllTests();
}