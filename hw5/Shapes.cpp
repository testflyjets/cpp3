/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 9, 2015
 * Shapes.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * An implementation of a shape class hierarchy
 *
 */
#include <cmath>
using std::pow;

#include <iostream>
using std::cout;

#include "Shapes.h"

using ChrisMcCann::PI;

ChrisMcCann::Circle::Circle(double radius) :
radius(radius)
{
}

ChrisMcCann::Circle::~Circle()
{
}

void
ChrisMcCann::Circle::display() const
{
   cout << "Circle with radius " << radius
      << " has area " << getArea() << "\n";
}

double
ChrisMcCann::Circle::getArea() const
{
   return ChrisMcCann::PI * std::pow(radius, 2);
}

ChrisMcCann::Square::Square(double lengthOfSide) :
lengthOfSide(lengthOfSide)
{
}

ChrisMcCann::Square::~Square()
{
}

void
ChrisMcCann::Square::display() const
{
   cout << "Square with length of side " << lengthOfSide
      << " has area " << getArea() << "\n";
}

double
ChrisMcCann::Square::getArea() const
{
   return std::pow(lengthOfSide, 2);
}

ChrisMcCann::Sphere::Sphere(double radius) :
radius(radius)
{
}

ChrisMcCann::Sphere::~Sphere()
{
}

void
ChrisMcCann::Sphere::display() const
{
   cout << "Sphere with radius " << radius
      << " has surface area " << getSurfaceArea() 
      << " and volume " << getVolume() << "\n";
}

double 
ChrisMcCann::Sphere::getSurfaceArea() const
{
   return 4.0 * PI * std::pow(radius, 2);
}

double 
ChrisMcCann::Sphere::getVolume() const
{
   return (4.0/3.0) * PI * std::pow(radius, 3);
}

ChrisMcCann::Cube::Cube(double lengthOfSide) :
lengthOfSide(lengthOfSide)
{
}

ChrisMcCann::Cube::~Cube()
{
}

void
ChrisMcCann::Cube::display() const
{
   cout << "Cube with length of side " << lengthOfSide
      << " has surface area " << getSurfaceArea() 
      << " and volume " << getVolume() << "\n";
}

double
ChrisMcCann::Cube::getSurfaceArea() const
{
   return 6 * std::pow(lengthOfSide, 2);
}

double 
ChrisMcCann::Cube::getVolume() const
{
   return std::pow(lengthOfSide, 3);
}