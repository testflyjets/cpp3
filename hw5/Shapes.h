#ifndef CHRIS_MCCANN_SHAPE_H
#define CHRIS_MCCANN_SHAPE_H
/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * Feb 9, 2015
 * Shapes.h
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * A class hierarchy to model 2D and 3D shapes
 *
 */

namespace ChrisMcCann
{
   const double PI = 3.14159;

   // An abstract Shape class
   class Shape
   {
   public:
      virtual ~Shape() {};

      // a pure virtual method that subclasses
      // must implement; intended to display information
      // about the shape
      virtual void display() const = 0;
   };

   // An abstract 2D shape class
   class TwoDimensionalShape : public Shape
   {
   public:
      virtual ~TwoDimensionalShape() {};

      virtual void display() const = 0;

      // a pure virtual method that subclasses
      // must implement; returns the area of the shape
      virtual double getArea() const = 0;
   };

   // a concrete implementation of a circle
   class Circle : public TwoDimensionalShape
   {
   public:
      Circle(double radius);
      virtual ~Circle();

      virtual void display() const;
      virtual double getArea() const;

   private:
      // the radius of the circle
      double radius;
   };

   // a concrete implementation of a square
   class Square : public TwoDimensionalShape
   {
   public:
      Square(double lengthOfSide);
      virtual ~Square();

      virtual void display() const;
      virtual double getArea() const;

   private:
      // the length of a side of the square
      double lengthOfSide;
   };

   // An abstract 3D shape class
   class ThreeDimensionalShape : public Shape
   {
   public:
      virtual ~ThreeDimensionalShape() {};

      virtual void display() const = 0;

      // a pure virtual method that subclasses
      // must implement; returns the surface area of
      // the shape
      virtual double getSurfaceArea() const = 0;

      // a pure virtual method that subclasses
      // must implement; returns the volume of
      // the shape
      virtual double getVolume() const = 0;
   };

   // a concrete implementation of a sphere
   class Sphere : public ThreeDimensionalShape
   {
   public:
      Sphere(double radius);
      virtual ~Sphere();

      virtual void display() const;
      virtual double getSurfaceArea() const;
      virtual double getVolume() const;

   private:
      // the radius of the sphere
      double radius;
   };

   // a concrete implementation of a cube 
   class Cube : public ThreeDimensionalShape
   {
   public:
      Cube(double lengthOfSide);
      virtual ~Cube();

      virtual void display() const;
      virtual double getSurfaceArea() const;
      virtual double getVolume() const;

   private:
      // the length of a side of the cube
      double lengthOfSide;
   };
}

#endif
