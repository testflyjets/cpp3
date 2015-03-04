/*
 * Airplane Monitoring System Project
 *
 * Chris McCann - C/C++ 3 - CSE-40477
 *
 * PressureSensor.h
 *
 */
#ifndef PROJECT2_PRESSURESENSOR_H
#define PROJECT2_PRESSURESENSOR_H

#include<string>

#include "Sensor.h"

namespace Project2
{
   //=========================================================================
   // SUMMARY
   //       A pressure sensor measures the pressure inside an object such as 
   //       a pump, tank, or tubing.
   //
   //       It converts a signal voltage into a pressure.
   //
   // RESOURCES
   //       The angular sensor owns no resources.
   //=========================================================================
   class PressureSensor : public Sensor
   {
   public:
      PressureSensor(std::string name, Signal &source);

   protected:
      virtual string getUnits() const;
   };
}

#endif