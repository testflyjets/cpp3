/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming s3, Section ID 105730, Ray Mitchell III
 * January 26, 2015
 * SavingsAccount.h
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * The header for a Savings Account class
 *
 */

#ifndef CHRIS_MCCANN_SAVINGS_ACCOUNT_H
#define CHRIS_MCCANN_SAVINGS_ACCOUNT_H

namespace ChrisMcCann
{
   class SavingsAccount
   {
   public:
      SavingsAccount(double initialBalance);

      double getSavingsBalance() const;
      void applyMonthlyInterest();

      static void setAnnualInterestRate(double newInterestRate);
      static const int MONTHS_IN_YEAR = 12;

   private:
      double savingsBalance;
      static double annualInterestRate;
   };
}

#endif