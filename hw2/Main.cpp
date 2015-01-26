/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming32, Section ID 105730, Ray Mitchell III
 * January 11, 2015
 * Main.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * A main() implementation that executes a suite
 * of UnitTest++ tests to validate the custom ChrisMcCann::Date
 * class.
 *
 */

#include <ctime>
#include <iostream>
using std::cout;

#include "UnitTest++.h"
using UnitTest::MemoryOutStream;

#include "Date.h"
using ChrisMcCann::Date;
using ChrisMcCann::MONTH_OFFSET;
using ChrisMcCann::YEAR_OFFSET;

static int day_;
static int month_;
static int year_;

/*
 * A helper method to set the current date for tests
 */
void currentDate()
{
   // get the current date
   time_t tm = time(0);
   struct tm *now = localtime(&tm);

   // set static date values
   month_ = now->tm_mon + MONTH_OFFSET;
   day_   = now->tm_mday;
   year_  = now->tm_year + YEAR_OFFSET;
}

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
   // get the current date
   currentDate();

   // create a new Date using the default constructor
   Date defaultDate;
   CHECK(defaultDate.getDay() == day_);
   CHECK(defaultDate.getMonth() == month_);
   CHECK(defaultDate.getYear() == year_);
}

TEST(DisplayDefaultDate)
{
   // get the current date
   currentDate();

   // build a display string for current date
   std::ostringstream currentDisplay;
   currentDisplay << month_ << "/" << day_ << "/" << year_ << "\n";

   // create a buffer to redirect cout so we can capture 
   // it for testing
   std::stringstream buffer;
   struct coutRedirect redirect(buffer.rdbuf());

   // create a new default Date and display it
   Date defaultDate;
   defaultDate.display();
   
   CHECK_EQUAL(buffer.str(), currentDisplay.str());
}

TEST(CustomConstructorValidDate)
{
   Date validCustomDate(1, 13, 2015);

   CHECK(validCustomDate.getMonth() == 1);
   CHECK(validCustomDate.getDay()   == 13);
   CHECK(validCustomDate.getYear()  == 2015);
}

TEST(CustomConstructorInvalidMonth)
{
   // build a display string for the error message
   std::ostringstream errMessage;
   errMessage << "Invalid month value [13] given. " 
      << "Must be between 1 and 12.\n";

   // create a buffer to redirect cerr so we can capture 
   // it for testing
   std::stringstream buffer;
   struct cerrRedirect redirect(buffer.rdbuf());

   Date invalidDate(13, 13, 2015);

   CHECK_EQUAL(buffer.str(), errMessage.str());
}

TEST(CustomConstructorInvalidDayOfMonth)
{
   // build a display string for the error message
   std::ostringstream errMessage;
   errMessage << "Invalid day of month [32] given. "
      "Days in 1/2015 must be between 1 and 31.\n";

   // create a buffer to redirect cerr so we 
   // can capture it for testing
   std::stringstream buffer;
   struct cerrRedirect redirect(buffer.rdbuf());

   Date invalidDate(1, 32, 2015);

   CHECK_EQUAL(buffer.str(), errMessage.str());
}

TEST(CustomConstructorInvalidLeapDay)
{
   // build a display string for the error message
   std::ostringstream errMessage;
   errMessage << "Invalid day of month [29] given. "
      "Days in 2/2015 must be between 1 and 28.\n";

   // create a buffer to redirect cerr so we 
   // can capture it for testing
   std::stringstream buffer;
   struct cerrRedirect redirect(buffer.rdbuf());

   Date invalidDate(2, 29, 2015);

   CHECK_EQUAL(buffer.str(), errMessage.str());
}

TEST(CustomConstructorValidLeapDay)
{
   Date leapDate(2, 29, 2016);

   CHECK(leapDate.getMonth() == 2);
   CHECK(leapDate.getDay()   == 29);
   CHECK(leapDate.getYear()  == 2016);
}

TEST(CustomConstructorInvalidYear)
{
   // build a display string for the error message
   std::ostringstream errMessage;
   errMessage << "Invalid year [-2000] given, "
      "must be greater than zero.\n";

   // create a buffer to redirect cerr so we 
   // can capture it for testing
   std::stringstream buffer;
   struct cerrRedirect redirect(buffer.rdbuf());

   Date invalidDate(6, 6, -2000);

   CHECK_EQUAL(buffer.str(), errMessage.str());
}

TEST(AccessorsOnValidDate)
{
   Date validDate(6, 13, 2005);

   CHECK_EQUAL(6, validDate.getMonth());
   CHECK_EQUAL(13, validDate.getDay());
   CHECK_EQUAL(2005, validDate.getYear());
}

int main() {
   return UnitTest::RunAllTests();
}
