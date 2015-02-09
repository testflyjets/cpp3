/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 6, 2015
 * Sensor.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * Represents a generic sensor object.
 *
 */

#include "Sensor.h"
#include "Signal.h"
using Project2::Signal;

Project2::Sensor::Sensor(string name, Signal &source) :
name(name),
source(source)
{
}

void 
Project2::Sensor::takeReading(Time t, DataRecorder &recorder) const
{
   recorder.log(t, getName(), getSource().getVoltageAtTime(t), getUnits());
}

string 
Project2::Sensor::getName() const
{
   return name;
}

Signal
&Project2::Sensor::getSource() const
{
   return source;
}
