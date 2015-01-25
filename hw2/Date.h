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
   // define min and max month values
   const int JANUARY  =  1;
   const int DECEMBER = 12;

   class Date
   {
   public:
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

      bool validateMonth(int month);
      bool validateDay(int month, int day, int year);
      bool validateYear(int year);

      int daysInMonth(int month, int year);

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
