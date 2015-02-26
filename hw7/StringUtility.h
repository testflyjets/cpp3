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
 * A header file for a utility class that provides several
 * useful functions for maninuplating vectors of strings.
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
      // Joins the strings contained in the vector +strings+ into
      // a single string, separated internally by +delimeter+
      static string join(const vector<string> &strings, char delimiter);

      // Reverses the strings in +strings+, both in their location in 
      // the vector and the characters in each string.  Returns the 
      // vector of reversed strings.
      static vector<string> reverse(const vector<string> &strings);

      // Combines each of the strings in vector +left+ with each of the strings in
      // vector +right+ into strings in the returned vector.  
      static vector<string> combine(const vector<string> &left, const vector<string> &right);

      // Left-pads all of the strings in vector +strings+ using the character
      // +pad+, returning the padded strings in a new vector.
      static vector<string> leftPad(const vector<string> &strings, char pad);
   };
}

#endif