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
   //    SawtoothSignal is a concrete implementation of PeriodicSignal that 
   //    varies between a minimum and maximum value, climbing from the minimum 
   //    to the maximum value at a constant rate then falling immediately back 
   //    to the minimum value upon reaching the maximum value.
   //
   // RESOURCES
   //      None.
   //=========================================================================
   class SawtoothSignal : public PeriodicSignal
   {
   public:
      SawtoothSignal(double voltageOffset, 
         Time timeOffset, 
         double minVoltage, 
         double maxVoltage, 
         Time period);
      
      virtual double getVoltageAtTime(Time t) const;
   };
}

#endif
