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
   //       An angular sensor measures a change in angle between two objects.  It 
   //       converts a signal voltage into a measured angle in Radians.
   //
   // RESOURCES
   //       The angular sensor owns no resources.
   //=========================================================================
   class AngularSensor : public Sensor
   {
   public:
      //---------------------------------------------------------------------
      // SUMMARY
      //       Constructor.  Initializes the angular sensor with a descriptive
      //       name and a reference to the Signal that is the source of the 
      //       voltage the sensor measures.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      name
      //          The angular sensor's name.
      //      source
      //          The Signal that provides the voltage this sensor measures.
      //
      // RETURNS
      //      Nothing
      //---------------------------------------------------------------------
      AngularSensor(std::string name, Signal &source);

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
