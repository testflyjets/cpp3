/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 9, 2015
 * hw5.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * A test program for a class hierarchy of shapes
 */

#include "Shapes.h"

using ChrisMcCann::Shape;
using ChrisMcCann::Circle;
using ChrisMcCann::Square;
using ChrisMcCann::Sphere;
using ChrisMcCann::Cube;

const int SHAPE_COUNT = 4;

int main() {
   Shape *shapes[SHAPE_COUNT] = {new Circle(2), new Square(3), new Sphere(4), new Cube(5)};

   for (Shape **shape = shapes; shape < shapes + SHAPE_COUNT; shape++)
   {
      (*shape)->display();
      delete (*shape);
   }
}
