/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming32, Section ID 105730, Ray Mitchell III
 * January 11, 2015
 * Date.h
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * The header for a custom Date class
 *
 */

#ifndef DATE_H
#define DATE_H

namespace ChrisMcCann
{
   class Date
   {
   public:
      // month and year offsets
      static const int MONTH_OFFSET = 1;
      static const int YEAR_OFFSET = 1990;

      // define min and max month values
      static const int JANUARY  =  1;
      static const int DECEMBER = 12;

      // Constructors
      Date();
      Date(int month, int day, int year);

      // Accessors / mutators
      inline int getMonth() const;
      inline int getDay() const;
      inline int getYear() const;

      // Utility functions
      void display() const;

   private:
      void setMonth(int month);
      void setDay(int day);
      void setYear(int year);

      bool validateMonth(int month) const;
      bool validateDay(int month, int day, int year) const;
      bool validateYear(int year) const;

      int daysInMonth(int month, int year) const;

      int month, day, year;
   };

   int ChrisMcCann::Date::getMonth() const
   {
      return month;
   }

   int ChrisMcCann::Date::getDay() const
   {
      return day;
   }

   int ChrisMcCann::Date::getYear() const
   {
      return year;
   }
}

#endif
