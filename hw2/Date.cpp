/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming32, Section ID 105730, Ray Mitchell III
 * January 11, 2015
 * Date.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * A class that represents a calendar date, specified
 * by a numerical day, month, and year.
 *
 */

#include <ctime>
#include <iostream>
using std::cout;
using std::cerr;

#include "Date.h"

const int MONTH_OFFSET = 1;
const int YEAR_OFFSET = 1990;

/*
 * Default constructor, sets month, day and year
 * to the current values.
 */
ChrisMcCann::Date::Date()
{
   time_t tm = time(0);
   struct tm *now = localtime(&tm);

   setMonth(now->tm_mon + MONTH_OFFSET);
   setDay(now->tm_mday);
   setYear(now->tm_year + YEAR_OFFSET);
}

/*
 * Date constructor that sets the month, day, and year.  
 * Includes validation for all three values, displaying an 
 * error message in case of validation failure.
 */
ChrisMcCann::Date::Date(int month, 
                        int day, 
                        int year)
{
   // validate the input values
   if (validateDay(month, day, year) && validateMonth(month) && validateYear(year))
   {
      setMonth(month);
      setDay(day);
      setYear(year);
   }
}

// Accessors / mutators
void 
ChrisMcCann::Date::setMonth(int month)
{
   this->month = month;
}

void 
ChrisMcCann::Date::setDay(int day)
{
   this->day = day;
}

void 
ChrisMcCann::Date::setYear(int year)
{
   this->year = year;
}

// writes to stdout the date in the format mm/dd/yyyy
void 
ChrisMcCann::Date::display() const
{
   cout << getMonth() << "/" << getDay() << "/" << getYear() << "\n";
}

bool 
ChrisMcCann::Date::validateMonth(int month)
{
   if (month < JANUARY || month > DECEMBER)
   {
      cerr << "Invalid month value [" << month << "] given."
         << " Must be between " << JANUARY << " and " << DECEMBER
         << ".\n";
      return false;
   }
   else
      return true;
}

/*
 * Validates the day of the month for the given month and year.
 */
bool 
ChrisMcCann::Date::validateDay(int month, 
                               int day, 
                               int year)
{
   int monthDays = daysInMonth(month, year);
   if (day < 1 || day > monthDays)
   {
      cerr << "Invalid day of month [" << day << "] given. "
         << " Days in " << month << "/" << year 
         << " must be between 1 and " << monthDays << ".\n";
      return false;
   }
   else
      return true;
}

/*
 * Calculates days in a given month.  Code taken from:
 * http://www.codecodex.com/wiki/Calculate_the_number_of_days_in_a_month
 */
int 
ChrisMcCann::Date::daysInMonth(int month, 
                               int year)
{
   int numberOfDays;

   if (month == 4 || month == 6 || month == 9 || month == 11)
      numberOfDays = 30;
   else if (month == 2)
   {
      bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
      if (isLeapYear)
         numberOfDays = 29;
      else
         numberOfDays = 28;
   }
   else
      numberOfDays = 31;

   return numberOfDays;
}

bool 
ChrisMcCann::Date::validateYear(int year)
{
   if (year < 0)
   {
      cerr << "Invalid year [" << year << "] given, must be greater than zero.\n";
      return false;
   }
   else
      return true;
}
