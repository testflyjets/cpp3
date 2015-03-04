/* Christopher C. McCann, U05484743
 * testflyjets@gmail.com
 * C/C++ Programming 3, Section ID 105730, Ray Mitchell III
 * February 23, 2015 
 * hw8.cpp
 * Windows 8.1 Enterprise 64-bit
 * Microsoft Visual Studio 2013 Express for Desktop
 * 
 * A test program for a Person class
 */
#include <fstream>
using std::ifstream;
using std::ios;

#include <iostream>
using std::cerr;
using std::cout;
using std::ostringstream;

#include <sstream>
using std::stringstream;

#include "UnitTest++.h"

#include "Person.h"
using ChrisMcCann::Person;

TEST(StreamExtractionFromFile)
{
   ifstream in("..\\Debug\\hw8-input.txt", ios::in);
   if (!in)
   {
      cerr << "Error opening input file\n";
      exit(1);
   }

   ostringstream outstream;

   Person person;
   while (in >> person)
   {
      outstream << person << "\n";
   }

   cout << outstream.str() << "\n";
}

int main() {
   return UnitTest::RunAllTests();
}