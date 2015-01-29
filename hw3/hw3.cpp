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
namespace cm = ChrisMcCann;
using cm::SavingsAccount;

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

TEST(SetValidAnnualInterestRate)
{
   // create a buffer to redirect cerr so we can capture it
   std::stringstream buffer;
   struct cerrRedirect redirect(buffer.rdbuf());

   double annualInterestRate(0.05);
   cm::SavingsAccount::setAnnualInterestRate(annualInterestRate);

   CHECK_EQUAL(buffer.str(), "");
}

TEST(SetInvalidAnnualInterestRate)
{
   double invalidInterestRate(-0.05);

   // build a display string for current date
   std::ostringstream errorMessage;
   errorMessage << "Invalid annual interest rate ["
      << invalidInterestRate 
      << "] given -- setting interest rate to 0.0\n";

   // create a buffer to redirect cerr so we can capture it
   std::stringstream buffer;
   struct cerrRedirect redirect(buffer.rdbuf());

   cm::SavingsAccount::setAnnualInterestRate(invalidInterestRate);

   CHECK_EQUAL(buffer.str(), errorMessage.str());
}

TEST(ApplyMonthlyInterestRateZero)
{
   double initialBalance(100.0);
   SavingsAccount account(initialBalance);

   // default annual interest rate is zero, so we
   // shouldn't see any change in the savings balance
   account.applyMonthlyInterest();

   CHECK_CLOSE(initialBalance, account.getSavingsBalance(), TEST_TOLERANCE);
}

TEST(ApplyMonthlyInterestRateNonZero)
{
   double initialBalance(100.0);
   SavingsAccount account(initialBalance);

   double interestRate(0.12);
   cm::SavingsAccount::setAnnualInterestRate(interestRate);
   account.applyMonthlyInterest();

   // 12% annual interest = 1% monthly, 1% of $100 is $1.00
   double expectedBalance = 101.0;

   CHECK_CLOSE(expectedBalance, account.getSavingsBalance(), TEST_TOLERANCE);
}

int main() {
   return UnitTest::RunAllTests();
}