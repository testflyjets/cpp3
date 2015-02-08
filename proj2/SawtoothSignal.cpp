/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 6, 2015
 * SawtoothSignal.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * Represents a sawtooth signal from a sensor.
 *
 */

#include <cmath>

#include "PeriodicSignal.h"
#include "SawtoothSignal.h"
#include "Time.h"

using Project2::Time;

Project2::SawtoothSignal::SawtoothSignal(
   double voltageOffset,
   Time timeOffset,
   double minVoltage,
   double maxVoltage,
   Time period)
   : PeriodicSignal(
   voltageOffset, 
   timeOffset, 
   minVoltage,
   maxVoltage,
   period)
{

}

double
Project2::SawtoothSignal::getVoltageAtTime(Time t) const
{
   t += getTimeOffset();
   int periodInSeconds = getPeriod().getTotalTimeAsSeconds();

   return getVoltageOffset() + getMinVoltage() +
      std::fmod(t.getTotalTimeAsSeconds() * (getMaxVoltage() - getMinVoltage()) / periodInSeconds, 
         getMaxVoltage() - getMinVoltage());
}
