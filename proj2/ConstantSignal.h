/*
 * Airplane Monitoring System Project
 *
 * Chris McCann - C/C++ 3 - CSE-40477
 *
 * ConstantSignal.h
 *
 */
#ifndef PROJECT2_CONSTANTSIGNAL_H
#define PROJECT2_CONSTANTSIGNAL_H

#include "Signal.h"
#include "Time.h"

namespace Project2
{
   //=========================================================================
   // SUMMARY
   //    ConstantSignal is a concrete implementation of Signal whose signal
   //    remains constant at all times.
   //
   // RESOURCES
   //      None.
   //=========================================================================
   class ConstantSignal : public Signal
   {
   public:
      ConstantSignal(double voltageOffset, Time timeOffset);

      virtual double getVoltageAtTime(Time t) const;
   };
}

#endif
