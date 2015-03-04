/*
 * Airplane Monitoring System Project
 *
 * Chris McCann - C/C++ 3 - CSE-40477
 *
 * DataRecorder.h
 *
 */
#ifndef PROJECT2_DATARECORDER_H
#define PROJECT2_DATARECORDER_H

#include<iostream>
using std::ostream;

#include<string>
using std::string;

#include "Time.h"

namespace Project2
{
   //=========================================================================
   // SUMMARY
   //    Logs readings from sensors.
   // RESOURCES
   //    None.
   //=========================================================================
   class DataRecorder
   {
   public:
      //---------------------------------------------------------------------
      // SUMMARY
      //      Constructor.  Initializes the output stream to which the data
      //      recorder writes its readings.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      out
      //          The data recorder's output stream.
      //
      // RETURNS
      //      Nothing
      //---------------------------------------------------------------------
      DataRecorder(ostream &out);

      //---------------------------------------------------------------------
      // SUMMARY
      //      Logs a reading from a sensor at the given time with the given
      //      voltage and units.
      //
      // RESOURCES
      //      None
      //
      // PARAMETERS
      //      timestamp
      //          The time at which the sensor took its reading.
      //      sensorName
      //          The name of the sensor whose reading is being recorded.
      //      sensorVoltage
      //          The voltage read by the sensor.
      //      sensorUnits
      //          The units of the sensor's reading.
      //
      // RETURNS
      //      Nothing.
      //---------------------------------------------------------------------
      void log(Time timestamp,
         string sensorName,
         double sensorVoltage,
         string sensorUnits);

   private:
      ostream &out;
   };
}

#endif