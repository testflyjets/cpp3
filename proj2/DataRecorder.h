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
   //
   // RESOURCES
   //      
   //=========================================================================
   class DataRecorder
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
      DataRecorder(ostream &out);

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
      void log(Time timestamp, string sensorName, double sensorVoltage, string sensorUnits);

   private:
      ostream &out;
   };
}

#endif