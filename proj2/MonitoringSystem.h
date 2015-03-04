/*
 * Airplane Monitoring System Project
 *
 * Chris McCann - C/C++ 3 - CSE-40477
 *
 * MonitoringSystem.h
 *
 */
#ifndef PROJECT2_MONITORINGSYSTEM_H
#define PROJECT2_MONITORINGSYSTEM_H

#include <iostream>
using std::ostream;

#include <vector>
using std::vector;

#include "DataRecorder.h"
#include "Sensor.h"
#include "Time.h"

namespace Project2
{
   //=========================================================================
   // SUMMARY
   //    The MonitoringSystem tracks and logs changes to various
   //    phenomena present in an airplane. Examples of such phenomena are wing 
   //    vibration, engine temperature, and cabin pressure.
   //
   // RESOURCES
   //    None
   //=========================================================================
   class MonitoringSystem
   {
   public:
      //---------------------------------------------------------------------
      // SUMMARY
      //      Constructor.  Initializes the output stream to which the 
      //      monitoring system writes its sensor readings.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      out
      //          The ostream to which the sensor readings are written.
      //
      // RETURNS
      //      Nothing
      //---------------------------------------------------------------------
      MonitoringSystem(ostream &out);

      //---------------------------------------------------------------------
      // SUMMARY
      //      Destructor.  Destroys the object and any owned resources.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      None
      //
      // RETURNS
      //      Nothing
      //---------------------------------------------------------------------
      ~MonitoringSystem();

      //---------------------------------------------------------------------
      // SUMMARY
      //      Adds a sensor to the monitoring system.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      sensor
      //          A pointer to the sensor to add.
      //
      // RETURNS
      //      Nothing
      //---------------------------------------------------------------------
      void addSensor(Sensor *sensor);

      //---------------------------------------------------------------------
      // SUMMARY
      //      Takes a reading from all of the monitoring system's sensors
      //      at the given time.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      time
      //          The time at which all sensor readings are taken.
      //
      // RETURNS
      //      Nothing
      //---------------------------------------------------------------------
      void takeReading(Time time);

   private:
      DataRecorder recorder;
      vector<Sensor*> sensors;
   };
}

#endif
