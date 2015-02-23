/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 22, 2015 
 * hw7.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * A test program for a string utility class
 */

#include <iostream>
using std::cout;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "UnitTest++.h"

#include "StringUtility.h"

using ChrisMcCann::StringUtility;

const vector<string> testVector = { "The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog" };

StringUtility utility;

TEST(JoinStrings)
{
   string expected = "The,quick,brown,fox,jumps,over,the,lazy,dog";
   
   string actual = utility.join(testVector, ',');
   cout << "Joined vector:\n" << actual << "\n\n";

   CHECK_EQUAL(expected, actual);
}

TEST(ReverseStringVectors)
{
   vector<string> expected = { "god", "yzal", "eht", "revo", "spmuj", "xof", "nworb", "kciuq", "ehT" };
   
   vector<string> reversed = utility.reverse(testVector);

   cout << "Reversed vector:\n";
   for (size_t i = 0; i < reversed.size(); ++i)
   {
      cout << reversed[i] << " ";
   }
   cout << "\n\n";
}

TEST(CombineStringVectors)
{
   vector<string> left = {"Mr.", "Mrs."};
   vector<string> right = {"Jones", "Smith", "Williams"};

   vector<string> combined = utility.combine(left, right);

   cout << "Combined vector:\n";
   for (size_t i = 0; i < combined.size(); ++i)
   {
      cout << combined[i] << " ";
   }
   cout << "\n\n";
}

TEST(LeftPadStringVector)
{
   vector<string> padded = utility.leftPad(testVector, '*');

   cout << "Left-padded vector:\n";
   for (size_t i = 0; i < padded.size(); ++i)
   {
      cout << padded[i] << " ";
   }
   cout << "\n\n";
}

int main() {
   return UnitTest::RunAllTests();
}