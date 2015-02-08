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

#include "ConstantSignal.h"
#include "Signal.h"
#include "Time.h"

using Project2::Time;

Project2::ConstantSignal::ConstantSignal(
   double valueOffset,
   Time timeOffset)
   : Signal(valueOffset, timeOffset)
{

}

double
Project2::ConstantSignal::getVoltageAtTime(Time t) const
{
   return getVoltageOffset();
}
