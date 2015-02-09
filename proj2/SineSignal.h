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
   //
   // RESOURCES
   //      
   //=========================================================================
   class SineSignal : public PeriodicSignal
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
      SineSignal(double voltageOffset, Time timeOffset, 
         double minVoltage, double maxVoltage, Time period);

      virtual double getVoltageAtTime(Time t) const;
   };
}

#endif
