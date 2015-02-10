/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 9, 2015
 * Shapes.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * A shape class hierarchy implementation
 *
 */
#include <iostream>
using std::cout;

#include "Shapes.h"

using ChrisMcCann::Circle;

ChrisMcCann::Circle::Circle(double radius) :
radius(radius)
{
}

void
ChrisMcCann::Circle::display() const
{
   cout << "Circle with radius " << radius
      << " has area " << getArea() << "\n";
}

ChrisMcCann::Square::Square(double lengthOfSide) :
lengthOfSide(lengthOfSide)
{
}

void
ChrisMcCann::Square::display() const
{
   cout << "Square with length of side " << lengthOfSide
      << " has area " << getArea() << "\n";
}

ChrisMcCann::Sphere::Sphere(double radius) :
radius(radius)
{
}

void
ChrisMcCann::Sphere::display() const
{
   cout << "Sphere with radius " << radius
      << " has surface area " << getSurfaceArea() 
      << " and volume " << getVolume() << "\n";
}

ChrisMcCann::Cube::Cube(double lengthOfSide) :
lengthOfSide(lengthOfSide)
{
}

void
ChrisMcCann::Cube::display() const
{
   cout << "Cube with length of side " << lengthOfSide
      << " has surface area " << getSurfaceArea() 
      << " and volume " << getVolume() << "\n";
}