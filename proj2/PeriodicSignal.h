/*
 * Airplane Monitoring System Project
 *
 * Chris McCann - C/C++ 3 - CSE-40477
 *
 * PeriodicSignal.h
 *
 */
#ifndef PROJECT2_PERIODICSIGNAL_H
#define PROJECT2_PERIODICSIGNAL_H

#include "Signal.h"
#include "Time.h"

namespace Project2
{
   //=========================================================================
   // SUMMARY
   //    PeriodicSignal is an abstract implementation of Signal whose signal
   //    changes with time.  Concrete classes that inherit from PeriodicSignal
   //    will provide an implementation that generates a varying signal.
   //
   // RESOURCES
   //      None.
   //=========================================================================
   class PeriodicSignal : public Signal
   {
   public:
      //---------------------------------------------------------------------
      // SUMMARY
      //      Constructor.  Initializes the periodic signal's voltage offset,
      //      time offset, min and max voltages, and period.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      voltageOffset
      //          The signal's voltage offset.
      //      timeOffset
      //          The signal's time offset.
      //      minVoltage
      //          The voltage when the signal is at minimum amplitude.
      //      maxVoltage
      //          The voltage when the signal is at maximum amplitude.
      //
      // RETURNS
      //      Nothing
      //---------------------------------------------------------------------
      PeriodicSignal(double voltageOffset,
         Time timeOffset,
         double minVoltage,
         double maxVoltage,
         Time period);

      virtual double getVoltageAtTime(Time t) const = 0;

   protected:
      // accessor for minVoltage
      double getMinVoltage() const;
      // accessor for maxVoltage
      double getMaxVoltage() const;
      // accessor for period
      Time getPeriod() const;

   private:
      double minVoltage;
      double maxVoltage;
      Time period;
   };
}

#endif
