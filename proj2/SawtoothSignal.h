/*
 * Airplane Monitoring System Project
 *
 * Chris McCann - C/C++ 3 - CSE-40477
 *
 * SawtoothSignal.h
 *
 */
#ifndef PROJECT2_SAWTOOTHSIGNAL_H
#define PROJECT2_SAWTOOTHSIGNAL_H

#include "PeriodicSignal.h"
#include "Time.h"

namespace Project2
{
   //=========================================================================
   // SUMMARY
   //
   // RESOURCES
   //      
   //=========================================================================
   class SawtoothSignal : public PeriodicSignal
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
      SawtoothSignal(double voltageOffset, Time timeOffset, 
         double minVoltage, double maxVoltage, Time period);
      
      virtual double getVoltageAtTime(Time t) const;
   };
}

#endif
