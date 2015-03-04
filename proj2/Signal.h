/*
 * Airplane Monitoring System Project
 *
 * Chris McCann - C/C++ 3 - CSE-40477
 *
 * Signal.h
 *
 */
#ifndef PROJECT2_SIGNAL_H
#define PROJECT2_SIGNAL_H

#include "Time.h"

namespace Project2
{
   //=========================================================================
   // SUMMARY
   //    Signal is an abstract class that represents a voltage that varies 
   //    with time. Each concrete Signal is of a specific type.  The Signal’s 
   //    type determines the equation that will be used to produce a Voltage 
   //    at a given time.
   //
   // RESOURCES
   //      None.
   //=========================================================================
   class Signal
   {
   public:
      //---------------------------------------------------------------------
      // SUMMARY
      //      Constructor.  Initializes the signal's value and time offsets.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      valueOffset
      //          The offset from zero of the signals value.
      //      timeOffset
      //          The offset from time zero when the signal was created.
      //
      // RETURNS
      //      Nothing
      //---------------------------------------------------------------------
      Signal(double valueOffset, Time timeOffset);

      //---------------------------------------------------------------------
      // SUMMARY
      //      Returns the signal's voltage at the given time.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      t
      //          The time at which the signal is generated.
      //
      // RETURNS
      //      The voltage of the signal.
      //---------------------------------------------------------------------
      virtual double getVoltageAtTime(Time t) const = 0;

   protected:
      //---------------------------------------------------------------------
      // SUMMARY
      //      Returns the signal's time offset.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      None
      //
      // RETURNS
      //      The time offset of this signal.
      //---------------------------------------------------------------------
      Time getTimeOffset() const;

      //---------------------------------------------------------------------
      // SUMMARY
      //      Returns the signal's voltage offset.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      None
      //
      // RETURNS
      //      The value of voltage offset.
      //---------------------------------------------------------------------
      virtual double getVoltageOffset() const;

   private:
      double voltageOffset;
      Time timeOffset;
   };
}

#endif