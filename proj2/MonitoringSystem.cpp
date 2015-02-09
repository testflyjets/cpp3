/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 8, 2015
 * MonitoringSystem.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * Represents a system on an aircraft that monitors multiple
 * sensors and logs the data from those sensors.
 *
 */

#include <iostream>
using std::ostream;

#include "DataRecorder.h"
using Project2::DataRecorder;

#include "MonitoringSystem.h"

#include "Sensor.h"
using Project2::Sensor;

#include "Time.h"
using Project2::Time;

Project2::MonitoringSystem::MonitoringSystem(ostream &out) :
recorder(out)
{
}

Project2::MonitoringSystem::~MonitoringSystem()
{
}

void
Project2::MonitoringSystem::addSensor(Sensor *sensor)
{

}