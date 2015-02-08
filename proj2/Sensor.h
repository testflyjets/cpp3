/*
 * Airplane Monitoring System Project
 *
 * Chris McCann - C/C++ 3 - CSE-40477
 *
 * Sensor.h
 *
 */
#ifndef PROJECT2_SENSOR_H
#define PROJECT2_SENSOR_H

#include<string>
using std::string;

#include "DataRecorder.h"
#include "Signal.h"

namespace Project2
{
   //=========================================================================
   // SUMMARY
   //
   // RESOURCES
   //      
   //=========================================================================
   class Sensor
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
      Sensor(string name, Signal &source);

      void takeReading(Time t, DataRecorder &recorder) const;

   protected:
      //---------------------------------------------------------------------
      // SUMMARY
      //      Returns the type of this coin.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      None
      //
      // RETURNS
      //      The type of this coin.
      //---------------------------------------------------------------------
      virtual string getUnits() const = 0;

      //---------------------------------------------------------------------
      // SUMMARY
      //      Returns the singal that is the source for the sensor
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
      Signal &getSource() const;

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
      string getName() const;

   private:
      Signal &source;
      string name;
   };
}

#endif