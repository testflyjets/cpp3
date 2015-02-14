#ifndef CHRIS_MCCANN_ARRAY_H
#define CHRIS_MCCANN_ARRAY_H

/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * Feb 13, 2015
 * Array.h
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * A class template for handling arrays of various types of elements
 *
 */

namespace ChrisMcCann
{
   template <typename ElemType, int SIZE>
   class Array
   {
   public:
      Array()
      {
         
      }

      //Array(Array<ElemType, SIZE> source)
      //{

      //}

      // subscript operator (l-value version)
      ElemType &operator[](int index)
      {
         return elements[index];
      }

      // subscript operator (r-value version)
      ElemType &operator[](int index) const
      {
         return elements[index];
      }

      int size()
      {
         return SIZE;
      }

   private:
      ElemType elements[SIZE];
   };
}

#endif