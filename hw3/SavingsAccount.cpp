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

#include <iostream>
using std::cout;
using std::cerr;

#include "SavingsAccount.h"

double ChrisMcCann::SavingsAccount::annualInterestRate;

const int ChrisMcCann::SavingsAccount::MONTHS_IN_YEAR = 12;

/*
 * Initializes a SavingsAccount object with an initial balance.
 * If the initial balance is less than 0 an error message is displayed
 * and the balance is set to 0.
 */
ChrisMcCann::SavingsAccount::SavingsAccount(double initialBalance)
{
   if (initialBalance < 0.0)
   {
      cerr << "Invalid initial balance given [$" << initialBalance
         << "] -- setting balance to $0.00\n";
      this->savingsBalance = 0.0;
   }
   else
   {
      this->savingsBalance = initialBalance;
   }
}

/*
 * Gets the current savings account balance.
 */
double 
ChrisMcCann::SavingsAccount::getSavingsBalance() const
{
   return this->savingsBalance;
}

/*
 * Applies monthly interest to the account.
 */
void 
ChrisMcCann::SavingsAccount::applyMonthlyInterest()
{
   double interestRate = 1.0 + ChrisMcCann::SavingsAccount::annualInterestRate / MONTHS_IN_YEAR;
   savingsBalance *= interestRate;
}

/*
 * Sets the annual interest rate for savings accounts.  Expected input is 
 * a decimal representation of the interest rate, for example, 5% interest
 * should be entered as 0.05.
 */
void
ChrisMcCann::SavingsAccount::setAnnualInterestRate(double newInterestRate)
{
   if (newInterestRate < 0.0)
   {
      cerr << "Invalid annual interest rate [" << newInterestRate
         << "] given -- setting interest rate to 0.0\n";
      ChrisMcCann::SavingsAccount::annualInterestRate = 0.0;
   }
   else
   {
      ChrisMcCann::SavingsAccount::annualInterestRate = newInterestRate;
   }
}
