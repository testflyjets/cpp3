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

const double DOUBLE_TOLERANCE = 0.0001;

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

TEST(ConstructorWithParams)
{
   Complex complex(3, -4);
}

TEST(DefaultConstructor)
{
   // the expected output
   std::ostringstream output;
   output << "0+0i";

   // create a buffer to redirect cerr so we can capture it
   std::stringstream buffer;
   struct coutRedirect redirect(buffer.rdbuf());

   Complex complex;
   cout << complex;

   CHECK_CLOSE(0, complex.getReal(), DOUBLE_TOLERANCE);
   CHECK_CLOSE(0, complex.getImaginary(), DOUBLE_TOLERANCE);
   CHECK_EQUAL(buffer.str(), output.str());
}

TEST(CustomConstructor)
{
   // test values for constructing a complex
   double real = 2;
   double imaginary = 3;

   // the expected output
   std::ostringstream output;
   output << real << "+" << imaginary << "i";

   // create a buffer to redirect cerr so we can capture it
   std::stringstream buffer;
   struct coutRedirect redirect(buffer.rdbuf());

   Complex complex(real, imaginary);
   cout << complex;

   CHECK_CLOSE(real, complex.getReal(), DOUBLE_TOLERANCE);
   CHECK_CLOSE(imaginary, complex.getImaginary(), DOUBLE_TOLERANCE);
   CHECK_EQUAL(buffer.str(), output.str());
}

TEST(OutputComplexNegativeReal)
{
    // test values for constructing a complex
   double real = -2;
   double imaginary = 3;

   // the expected output
   std::ostringstream output;
   output << real << "+" << imaginary << "i";

   // create a buffer to redirect cerr so we can capture it
   std::stringstream buffer;
   struct coutRedirect redirect(buffer.rdbuf());

   Complex complex(real, imaginary);
   cout << complex;

   CHECK_CLOSE(real, complex.getReal(), DOUBLE_TOLERANCE);
   CHECK_CLOSE(imaginary, complex.getImaginary(), DOUBLE_TOLERANCE);
   CHECK_EQUAL(buffer.str(), output.str());
}

TEST(OutputComplexNegativeImaginary)
{
   // test values for constructing a complex
   double real = 1;
   double imaginary = -5;

   // the expected output
   std::ostringstream output;
   output << real << imaginary << "i";

   // create a buffer to redirect cerr so we can capture it
   std::stringstream buffer;
   struct coutRedirect redirect(buffer.rdbuf());

   Complex complex(real, imaginary);
   cout << complex;

   CHECK_CLOSE(real, complex.getReal(), DOUBLE_TOLERANCE);
   CHECK_CLOSE(imaginary, complex.getImaginary(), DOUBLE_TOLERANCE);
   CHECK_EQUAL(buffer.str(), output.str());
}

TEST(InputDefaultComplex)
{
   // test values for constructing a complex
   double real = 0;
   double imaginary = 0;

   // create a stream we can use to simulate cin
   std::stringstream buffer;
   buffer << real << "+" << imaginary << "i";

   Complex complex;
   buffer >> complex;

   CHECK_CLOSE(real, complex.getReal(), DOUBLE_TOLERANCE);
   CHECK_CLOSE(imaginary, complex.getImaginary(), DOUBLE_TOLERANCE);
}

TEST(InputComplexNegativeReal)
{
   // test values for constructing a complex
   double real = -2;
   double imaginary = 5;

   // create a stream we can use to simulate cin
   std::stringstream buffer;
   buffer << real << "+" << imaginary << "i";

   Complex complex;
   buffer >> complex;

   CHECK_CLOSE(real, complex.getReal(), DOUBLE_TOLERANCE);
   CHECK_CLOSE(imaginary, complex.getImaginary(), DOUBLE_TOLERANCE);
}

TEST(InputComplexNegativeImaginary)
{
   // test values for constructing a complex
   double real = 3;
   double imaginary = -4;

   // create a stream we can use to simulate cin
   std::stringstream buffer;
   buffer << real << imaginary << "i";

   Complex complex;
   buffer >> complex;

   CHECK_CLOSE(real, complex.getReal(), DOUBLE_TOLERANCE);
   CHECK_CLOSE(imaginary, complex.getImaginary(), DOUBLE_TOLERANCE);
}

int main() {
   return UnitTest::RunAllTests();
}