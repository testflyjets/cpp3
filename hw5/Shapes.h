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
   // An abstract Shape class
   class Shape
   {
   public:
      Shape();

      // a pure virtual method that subclasses
      // must implement
      virtual void display() const = 0;
   };

   // An abstract 2D shape class
   class TwoDimensionalShape : public Shape
   {
   public:
      TwoDimensionalShape();

      // a pure virtual method that subclasses
      // must implement
      virtual double getArea() const = 0;
   };

   class Circle : public TwoDimensionalShape
   {
   public:
      Circle(double radius);

      virtual void display() const;
      virtual double getArea() const;

   private:
      double radius;
   };

   class Square : public TwoDimensionalShape
   {
   public:
      Square(double lengthOfSide);

      virtual void display() const;
      virtual double getArea() const;

   private:
      double lengthOfSide;
   };

   // An abstract 3D shape class
   class ThreeDimensionalShape : public Shape
   {
   public:
      ThreeDimensionalShape();

      // a pure virtual method that subclasses
      // must implement
      virtual double getSurfaceArea() const = 0;
      virtual double getVolume() const = 0;
   };

   class Sphere : public ThreeDimensionalShape
   {
   public:
      Sphere(double radius);

      virtual void display() const;
      virtual double getSurfaceArea() const;
      virtual double getVolume() const;

   private:
      double radius;
   };

   class Cube : public ThreeDimensionalShape
   {
   public:
      Cube(double lengthOfSide);

      virtual void display() const;
      virtual double getSurfaceArea() const;
      virtual double getVolume() const;

   private:
      double lengthOfSide;
   };
}

#endif
