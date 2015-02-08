/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 6, 2015
 * Signal.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * An abstract class that represents the base signal coming
 * from a sensor.  All concrete implementations of signal
 * inherit from Signal.
 *
 */

#include "Signal.h"

#include "Time.h"

using Project2::Time;

Project2::Signal::Signal(
   double valueOffset,
   Time timeOffset) :
   voltageOffset(valueOffset),
   timeOffset(timeOffset)
{

}

Project2::Time
Project2::Signal::getTimeOffset() const
{
   return timeOffset;
}

double
Project2::Signal::getVoltageOffset() const
{
   return voltageOffset;
}
