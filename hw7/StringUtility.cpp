/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 22, 2015
 * StringUtility.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * An implementation of a string utility class to join, reverse,
 * combine and left-pad vectors of strings.
 *
 */
#include <string>
using std::string;

#include <vector>
using std::vector;

#include "StringUtility.h"

using ChrisMcCann::StringUtility;

string 
StringUtility::join(
   const vector<string> &strings, 
   char delimiter)
{
   static string joined;
   size_t size = strings.size();
   for (size_t i = 0; i < size - 1; ++i)
   {
      joined += strings[i];
      joined += delimiter;
   }

   joined += strings[size - 1];

   return joined;
}

vector<string> 
StringUtility::reverse(
   const vector<string> &strings)
{
   static vector<string> reversed;

   for (int i = strings.size() - 1; i >= 0; --i)
   {
      string str;

      for (int j = strings[i].length() - 1; j >= 0; j--)
      {
         str += strings[i][j];
      }
         
      reversed.push_back(str);
   }

   return reversed;
}

vector<string> 
StringUtility::combine(
   const vector<string> &left, 
   const vector<string> &right)
{
   static vector<string> combined;

   for (size_t i = 0; i < left.size(); ++i)
   {
      for (size_t j = 0; j < right.size(); ++j)
      {
         combined.push_back(left[i] + right[j]);
      }
   }

   return combined;
}

vector<string> 
StringUtility::leftPad(
   const vector<string> &strings, 
   char pad)
{
   static vector<string> leftPadded;
   size_t longest = 0;

   // get the size of the longest string in the vector
   for (size_t i = 0; i < strings.size(); ++i)
   {
      if (strings[i].length() > longest)
         longest = strings[i].length();
   }

   // pad the strings and add them to the output vector
   for (size_t i = 0; i < strings.size(); ++i)
   {
      string padding;
      string padded;

      padding.append(longest - strings[i].length(), pad);
      padded.append(padding).append(strings[i]);
      leftPadded.push_back(padded);
   }

   return leftPadded;
}