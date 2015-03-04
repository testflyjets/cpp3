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
   //    A representation of a specific instance in time.
   //
   // RESOURCES
   //    None.
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
      //---------------------------------------------------------------------
      // SUMMARY
      //      An overload of the addition assignment operator.
      //
      // PARAMETERS
      //      rhs
      //          An r-value Time instance to be added to this instance.
      //
      // RETURNS
      //      The Time object.
      //---------------------------------------------------------------------
      Time &operator+=(const Time &rhs);

      //---------------------------------------------------------------------
      // SUMMARY
      //      Constructor.  Initializes the time's hours, minutes, and
      //      seconds.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      hours
      //          The time's hours.
      //      minutes
      //          The time's minutes.
      //      seconds
      //          The time's seconds.
      //
      // RETURNS
      //      Nothing
      //---------------------------------------------------------------------
      Time(int hours, int minutes, int seconds);

      //---------------------------------------------------------------------
      // SUMMARY
      //      Returns the time as a number of seconds after some arbitrary
      //      zero time.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      None
      //
      // RETURNS
      //      The number of seconds represented by this time instance.
      //---------------------------------------------------------------------
      int getTotalTimeAsSeconds();

   private:
      int seconds;
      int minutes;
      int hours;
   };
}

#endif
