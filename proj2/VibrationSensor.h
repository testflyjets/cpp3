/*
 * Airplane Monitoring System Project
 *
 * Chris McCann - C/C++ 3 - CSE-40477
 *
 * VibrationSensor.h
 *
 */
#ifndef PROJECT2_VIBRATIONSENSOR_H
#define PROJECT2_VIBRATIONSENSOR_H

#include<string>

#include "Sensor.h"

namespace Project2
{
   //=========================================================================
   // SUMMARY
   //
   // RESOURCES
   //      
   //=========================================================================
   class VibrationSensor : public Sensor
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
      VibrationSensor(std::string name, Signal &source);

   protected:
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
      virtual string getUnits() const;
   };
}

#endif
