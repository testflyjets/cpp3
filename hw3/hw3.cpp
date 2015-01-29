/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * January 26, 2015
 * hw3.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * A main() implementation that executes a suite
 * of UnitTest++ tests to validate the custom 
 * ChrisMcCann::SavingsAccount class.
 */

#include <iostream>
using std::cout;
using std::cin;

#include "UnitTest++.h"
using UnitTest::MemoryOutStream;

#include "SavingsAccount.h"
using ChrisMcCann::SavingsAccount;

// the allowable difference between double values
// when checking equality in unit tests
double const TEST_TOLERANCE = 0.01;

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

/*
* A test fixture that redirects std::cerr for test purposes
*/
struct cerrRedirect {
   cerrRedirect(std::streambuf *new_buffer)
   : old(std::cerr.rdbuf(new_buffer))
   { }

   ~cerrRedirect() {
      std::cerr.rdbuf(old);
   }

private:
   std::streambuf *old;
};

TEST(DefaultConstructor)
{
   double initialBalance(100.0);

   SavingsAccount savingsAccount(initialBalance);

   CHECK_CLOSE(savingsAccount.getSavingsBalance(), initialBalance, TEST_TOLERANCE);
}

TEST(DefaultContstructorInvalidInitialBalance)
{
   // build a display string for current date
   std::ostringstream errorMessage;
   errorMessage << "Invalid initial balance given [$-10] -- setting balance to $0.00\n";

   // create a buffer to redirect cerr so we can capture it
   std::stringstream buffer;
   struct cerrRedirect redirect(buffer.rdbuf());
   
   double invalidBalance = -10.0;
   SavingsAccount invalidBalanceAccount(invalidBalance);

   CHECK_EQUAL(buffer.str(), errorMessage.str());
}

int main() {
   return UnitTest::RunAllTests();
}