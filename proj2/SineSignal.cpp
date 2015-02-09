/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 6, 2015
 * SineSignal.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * Represents a sine wave signal from a sensor.
 *
 */

#include <cmath>

#include "PeriodicSignal.h"
#include "SineSignal.h"
#include "Time.h"

using Project2::Time;

const double PI = 3.14159265358979323846;

Project2::SineSignal::SineSignal(
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
Project2::SineSignal::getVoltageAtTime(Time t) const
{
   double voltageDelta = getMaxVoltage() - getMinVoltage();

   t += getTimeOffset();
   int periodInSeconds = getPeriod().getTotalTimeAsSeconds();

   return getVoltageOffset() + getMinVoltage() + (voltageDelta) / 2
      + std::sin((t.getTotalTimeAsSeconds()) * 2 * PI / periodInSeconds) * (voltageDelta) / 2;
}
