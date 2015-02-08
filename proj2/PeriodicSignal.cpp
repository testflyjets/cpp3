/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 6, 2015
 * Signal.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * Represents a constant signal from a sensor.
 *
 */

#include "PeriodicSignal.h"
#include "Time.h"

using Project2::Time;

Project2::PeriodicSignal::PeriodicSignal(
   double voltageOffset,
   Time timeOffset,
   double minVoltage,
   double maxVoltage,
   Time period)
   : Signal(voltageOffset, timeOffset),
   minVoltage(minVoltage),
   maxVoltage(maxVoltage),
   period(period)
{

}

double
Project2::PeriodicSignal::getMinVoltage() const
{
   return minVoltage;
}

double 
Project2::PeriodicSignal::getMaxVoltage() const
{
   return maxVoltage;
}

Time
Project2::PeriodicSignal::getPeriod() const
{
   return period;
}
