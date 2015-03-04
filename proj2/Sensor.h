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
   //    An abstract class that represents a sensor on an aircraft.
   //
   // RESOURCES
   //    None.
   //      
   //=========================================================================
   class Sensor
   {
   public:
      //---------------------------------------------------------------------
      // SUMMARY
      //      Constructor.  Initializes the sensor's name and source signal
      //      to the given values.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      name
      //          The sensor's name
      //      source
      //          The signal that the sensor reads
      //
      // RETURNS
      //      Nothing
      //---------------------------------------------------------------------
      Sensor(string name, Signal &source);

      //---------------------------------------------------------------------
      // SUMMARY
      //      Takes a reading from the sensor and records it using
      //      the data recorder.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      t
      //          The time the sensor reading was taken.
      //      recorder
      //          The DataRecorder instance that records the sensor reading.
      //
      // RETURNS
      //      Nothing
      //---------------------------------------------------------------------
      void takeReading(Time t, DataRecorder &recorder) const;

   protected:
      //---------------------------------------------------------------------
      // SUMMARY
      //      Returns the sensor's units
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      None
      //
      // RETURNS
      //      Units of the returned sensor reading
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
      //      Returns the sensor's name
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      None
      //
      // RETURNS
      //      The name of the sensor.
      //---------------------------------------------------------------------
      string getName() const;

   private:
      Signal &source;
      string name;
   };
}

#endif