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

#include <stdexcept>
using std::invalid_argument;

namespace ChrisMcCann
{
   template <typename ElemType, int SIZE>
   class Array
   {
   public:
      Array()
      {
         
      }

      Array(const Array &source)
      {
         for (int i = 0; i <= SIZE; ++i)
         {
            this->elements[i] = source[i];
         }
      }

      bool operator==(const Array &other) const
      {
         bool equal = true;
         for (int i = 0; i < SIZE; ++i)
         {
            if (elements[i] != other[i])
            {
               equal = false;
               break;
            }
         }

         return equal;
      }

      bool operator!=(const Array &other) const
      {
         return !((*this) == other);
      }

      // subscript operator (l-value version)
      ElemType &operator[](int index)
      {
         if (index < 0 || index >= SIZE)
         {
            throw invalid_argument("subscript index out of range");
         }
         return elements[index];
      }

      // subscript operator (r-value version)
      ElemType operator[](int index) const
      {
         if (index < 0 || index >= SIZE)
         {
            throw invalid_argument("subscript index out of range");
         }
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