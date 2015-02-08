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
   //
   // RESOURCES
   //      
   //=========================================================================
   class PeriodicSignal : public Signal
   {
   public:
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
      PeriodicSignal(double voltageOffset, Time timeOffset, 
         double minVoltage, double maxVoltage, Time period);

      //---------------------------------------------------------------------
      // SUMMARY
      //      Returns the value of the coin in cents.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      None
      //
      // RETURNS
      //      The value of the coin in cents.
      //---------------------------------------------------------------------
      virtual double getVoltageAtTime(Time t) const = 0;

   protected:
      double getMinVoltage() const;
      double getMaxVoltage() const;
      Time getPeriod() const;

   private:
      double minVoltage;
      double maxVoltage;
      Time period;
   };
}

#endif
