// L-9 MCS 360 Mon 18 Sep 2017 : rectangle.cpp

/* This file contains the definition of the member operations
   of the class Rectangle.

Observe the use of the pointer *this to access the name of the shape. */

#include "rectangle.h"
#include <sstream>
#include <iostream>

double Rectangle::area() const
{
   return width*height;
}

void Rectangle::read()
{
   using namespace std; // using declaration
   using std::string;   // using directive

   string name; // if no directive, std::string

   cout << "  give name : "; cin >> name;
   this->relabel(name);
   cout << " give width : "; cin >> width;
   cout << "give height : "; cin >> height;
}

std::string Rectangle::to_string() const
{
   std::ostringstream s;

   s << "rectangle " << this->get_name()
     << " has width " << width
     << " and height " << height;

   return s.str();
}
