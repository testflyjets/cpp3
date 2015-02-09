/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 8, 2015
 * VibrationSensor.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * Represents a sensor that measures changes in vibration.
 *
 */
#include<string>
using std::string;

#include "Sensor.h"

#include "Signal.h"
using Project2::Signal;

#include "VibrationSensor.h"

Project2::VibrationSensor::VibrationSensor(string name, Signal &source) :
Sensor(name, source)
{
}

string
Project2::VibrationSensor::getUnits() const
{
   return "Hertz (Hz)";
}
