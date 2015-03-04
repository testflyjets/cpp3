/*
 * Airplane Monitoring System Project
 * 
 * Chris McCann - C/C++ 3 - CSE-40477
 *
 * AngularSensor.h
 *
 */
#ifndef PROJECT2_TEMPERATURESENSOR_H
#define PROJECT2_TEMPERATURESENSOR_H

#include<string>

#include "Sensor.h"

namespace Project2
{
   //=========================================================================
   // SUMMARY
   //       A temperature sensor measures the temperature of an object such as 
   //       an engine, a liquid, or the surrounding air.
   //
   //       It converts a signal voltage into a temperature.
   //
   // RESOURCES
   //       The temperature sensor owns no resources.
   //=========================================================================
   class TemperatureSensor : public Sensor
   {
   public:
      TemperatureSensor(std::string name, Signal &source);

   protected:
      virtual string getUnits() const;
   };
}

#endif
