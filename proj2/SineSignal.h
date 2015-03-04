/*
 * Airplane Monitoring System Project
 *
 * Chris McCann - C/C++ 3 - CSE-40477
 *
 * AngularSensor.h
 *
 */
#ifndef PROJECT2_SINESIGNAL_H
#define PROJECT2_SINESIGNAL_H

namespace Project2
{
   //=========================================================================
   // SUMMARY
   //    SineSignal is a concrete implementation of PeriodicSignal that 
   //    varies between a minimum and maximum value according to the sine 
   //    function.
   //
   // RESOURCES
   //      None.
   //=========================================================================
   class SineSignal : public PeriodicSignal
   {
   public:
      SineSignal(double voltageOffset, 
         Time timeOffset, 
         double minVoltage, 
         double maxVoltage, 
         Time period);

      virtual double getVoltageAtTime(Time t) const;
   };
}

#endif
