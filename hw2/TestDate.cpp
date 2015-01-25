/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming32, Section ID 105730, Ray Mitchell III
 * January 11, 2015
 * TestDate.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * Tests a custom Date class by calling all public methods on it.
 */

#include <iostream>
#include "Date.h"

using std::cout;

using ChrisMcCann::Date;

int main()
{
   // Test default constructor
   cout << "Testing default constructor:\n";
   Date defaultDate;
   defaultDate.display();
   cout << "\n\n";

   // Test custom constructor with valid date
   cout << "Testing custom constructor with valid date:\n";
   Date validCustomDate(1, 13, 2015);
   validCustomDate.display();
   cout << "\n\n";

   // Test custom constructor with invalid month
   cout << "Testing custom constructor with invalid month:\n";
   Date invalidMonthDate(13, 13, 2015);
   cout << "\n\n";

   // Test custom constructor with invalid day
   cout << "Testing custom constructor with invalid day:\n";
   Date invalidDayDate(1, 32, 2015);
   cout << "\n\n";

   // Test custom constructor with invalid day in non-leap year
   cout << "Testing custom constructor with invalid day non-leap year:\n";
   Date invalidNonLeapYearDate(2, 29, 2015);
   cout << "\n\n";

   // Test custom constructor with day only valid in leap year
   cout << "Testing custom constructor with day valid only in leap year:\n";
   Date validLeapYearDate(2, 29, 2016);
   validLeapYearDate.display();
   cout << "\n\n";

   // Test custom constructor with invalid year
   cout << "Testing custom constructor with invalid year:\n";
   Date invalidYearDate(6, 6, -2000);
   cout << "\n\n";

   // Test accessors on valid date
   cout << "Testing accessor functions:\n";
   cout << "Creating custom date of 6/13/2005.\n";
   Date validDateForAccessors(6, 13, 2005);
   int month = validDateForAccessors.getMonth();
   int day = validDateForAccessors.getDay();
   int year = validDateForAccessors.getYear();

   cout << "The date's month, day, and year are: "
      << month << ", " << day << ", and " << year << "\n";
   cout << "\n\n";
}