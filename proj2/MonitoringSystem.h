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
   //
   // RESOURCES
   //      
   //=========================================================================
   class MonitoringSystem
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
      MonitoringSystem(ostream &out);

      ~MonitoringSystem();

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
      void addSensor(Sensor *sensor);

      void takeReading(Time time);

   private:
      DataRecorder recorder;
      vector<Sensor> sensors;
   };
}

#endif
