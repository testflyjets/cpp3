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
   //       A vibration sensor measures the physical vibration of an object
   //       such as a wing, an equipment rack, or an engine.
   //
   //       It converts a signal voltage into a vibration measured in Hertz.
   //
   // RESOURCES
   //       The vibration sensor owns no resources.
   //=========================================================================
   class VibrationSensor : public Sensor
   {
   public:
      VibrationSensor(std::string name, Signal &source);

   protected:
      virtual string getUnits() const;
   };
}

#endif
