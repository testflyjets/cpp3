/*
 * Airplane Monitoring System Project
 *
 * Chris McCann - C/C++ 3 - CSE-40477
 *
 * AngularSensor.h
 *
 */
#ifndef PROJECT2_ANGULARSENSOR_H
#define PROJECT2_ANGULARSENSOR_H

#include<string>

#include "Sensor.h"

namespace Project2
{
   //=========================================================================
   // SUMMARY
   //       An angular sensor measures a change in angle between two objects.  
   //       It converts a signal voltage into a measured angle in Radians.
   //
   // RESOURCES
   //       The angular sensor owns no resources.
   //=========================================================================
   class AngularSensor : public Sensor
   {
   public:
      AngularSensor(std::string name, Signal &source);

   protected:
      virtual string getUnits() const;
   };
}

#endif
