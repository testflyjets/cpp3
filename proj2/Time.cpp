/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 6, 2015
 * Time.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * 
 *
 */

#include <cstdlib>
using std::div;
using std::div_t;

#include <iostream>
using std::cout;
using std::ostream;

#include "Time.h"
using Project2::Time;

const int SECONDS_PER_MINUTE = 60;
const int SECONDS_PER_HOUR = 3600;

Project2::Time::Time(
   int hours, 
   int minutes, 
   int seconds) :
   hours(hours), 
   minutes(minutes), 
   seconds(seconds)
{

}

Time
&Project2::Time::operator+=(const Time &rhs)
{
   int sumSeconds = this->seconds + rhs.seconds;
   div_t timeDiv = div(sumSeconds, 60);
   this->seconds = timeDiv.rem;

   int sumMinutes = this->minutes + rhs.minutes + timeDiv.quot;
   timeDiv = div(sumMinutes, 60);
   this->minutes = timeDiv.rem;

   this->hours = this->hours + rhs.hours + timeDiv.quot;

   return *this;
}

ostream 
&Project2::operator<<(ostream &out, const Time &value)
{
   out << value.hours << "h:"
      << value.minutes << "m:"
      << value.seconds << "s";

   return out;
}

int
Project2::Time::getTotalTimeAsSeconds()
{
   return seconds + 
      minutes * SECONDS_PER_MINUTE + 
      hours * SECONDS_PER_HOUR;
}
