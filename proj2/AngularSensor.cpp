/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 8, 2015
 * AngularSensor.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * Represents a sensor that measures changes in angles.
 *
 */
#include<string>
using std::string;

#include "AngularSensor.h"
#include "Sensor.h"
#include "Signal.h"
using Project2::Signal;

Project2::AngularSensor::AngularSensor(string name, Signal &source) :
Sensor(name, source)
{
}

string
Project2::AngularSensor::getUnits() const
{
   return "Radians";
}
