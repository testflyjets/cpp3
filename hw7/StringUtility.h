#ifndef CHRIS_MCCANN_STRINGUTILITY_H
#define CHRIS_MCCANN_STRINGUTILITY_H

/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * Feb 22, 2015
 * StringUtility.h
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * A header file for a string utility class
 *
 */

#include <string>
using std::string;

#include <vector>
using std::vector;

namespace ChrisMcCann
{
   class StringUtility
   {
   public:
      string join(const vector<string> &strings, char delimiter);
      vector<string> reverse(const vector<string> &strings);
      vector<string> combine(const vector<string> &left, const vector<string> &right);
      vector<string> leftPad(const vector<string> &strings, char pad);
   };
}

#endif