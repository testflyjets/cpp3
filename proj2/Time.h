/*
 * Airplane Monitoring System Project
 *
 * Chris McCann - C/C++ 3 - CSE-40477
 *
 * Time.h
 *
 */
#ifndef PROJECT2_TIME_H
#define PROJECT2_TIME_H

#include <iostream>
using std::ostream;

namespace Project2
{
   //=========================================================================
   // SUMMARY
   //
   // RESOURCES
   //      
   //=========================================================================
   class Time
   {
      //---------------------------------------------------------------------
      // SUMMARY
      //      A friend function overload of the stream insertion operator.
      //
      // PARAMETERS
      //      out
      //          An ostream into which the formatted time will be
      //          inserted.
      //      value
      //          Time object to be formatted and inserted into the 
      //          stream.
      //
      // RETURNS
      //      The ostream object.
      //---------------------------------------------------------------------
      friend ostream &operator<<(ostream &out, const Time &value);

   public:
      Time &operator+=(const Time &rhs);

      //---------------------------------------------------------------------
      // SUMMARY
      //      Constructor.  Initializes the coin's denomination to the given
      //      type.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      denomination
      //          The coin's denomination.
      //
      // RETURNS
      //      Nothing
      //---------------------------------------------------------------------
      Time(int hours, int minutes, int seconds);

      //---------------------------------------------------------------------
      // SUMMARY
      //      Returns the type of this coin.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      None
      //
      // RETURNS
      //      The type of this coin.
      //---------------------------------------------------------------------
      int getTotalTimeAsSeconds();

   private:
      int seconds;
      int minutes;
      int hours;
   };
}

#endif
