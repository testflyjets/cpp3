/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 6, 2015
 * DataRecorder.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * The datarecorder logs its inputs by writing them out to a stream
 *
 */

#include <iostream>
using std::cout;
using std::fixed;
using std::ostream;

#include "DataRecorder.h"

#include "Time.h"
using Project2::Time;

const int DECIMAL_PLACES = 2;

Project2::DataRecorder::DataRecorder(ostream &out) :
   out(out)
{
   out.precision(DECIMAL_PLACES);
}

void 
Project2::DataRecorder::log(Time timestamp, 
   string sensorName, 
   double sensorVoltage, 
   string sensorUnits)
{
   out << timestamp 
      << " - " 
      << sensorName 
      << " - " 
      << fixed
      << sensorVoltage 
      << " " 
      << sensorUnits 
      << "\n";
}
