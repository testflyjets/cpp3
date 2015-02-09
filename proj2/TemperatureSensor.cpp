/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 8, 2015
 * TemperatureSensor.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * Represents a sensor that measures changes in temperature.
 *
 */
#include<string>
using std::string;

#include "Sensor.h"

#include "Signal.h"
using Project2::Signal;

#include "TemperatureSensor.h"

Project2::TemperatureSensor::TemperatureSensor(string name, Signal &source) :
Sensor(name, source)
{
}

string
Project2::TemperatureSensor::getUnits() const
{
   return "Degrees Celsius";
}
