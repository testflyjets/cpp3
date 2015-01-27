/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * January 26, 2015
 * SavingsAccount.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * A class that represents a savings account at a bank.
 */

#include <ctime>
#include <iostream>
using std::cout;
using std::cerr;

#include "SavingsAccount.h"

double ChrisMcCann::SavingsAccount::annualInterestRate;

ChrisMcCann::SavingsAccount::SavingsAccount(double initialBalance)
{
   if (initialBalance < 0.0)
   {
      cerr << "Invalid initial balance given [$" << initialBalance
         << "] -- setting balance to $0.00\n";
      savingsBalance = 0.0;
   }
   else
   {
      savingsBalance = initialBalance;
   }
}

double 
ChrisMcCann::SavingsAccount::getSavingsBalance() const
{
   return savingsBalance;
}

void 
ChrisMcCann::SavingsAccount::applyMonthlyInterest()
{
   savingsBalance *= annualInterestRate / MONTHS_IN_YEAR;
}

void
ChrisMcCann::SavingsAccount::setAnnualInterestRate(double newInterestRate)
{
   if (newInterestRate < 0.0)
   {
      cerr << "Invalid annual interest rate [" << newInterestRate
         << "] given -- setting interest rate to 0.0\n";
      annualInterestRate = 0.0;
   }
   else
   {
      annualInterestRate = newInterestRate;
   }
}
