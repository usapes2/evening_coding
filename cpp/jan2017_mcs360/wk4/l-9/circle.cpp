// L-9 MCS 360 Mon 18 Sep 2017 : circle.cpp

/* This file contains the definition of the member operations
   of the class Circle.

Observe the use of the mathematical constant PI of the GNU C mathematical
library and the power function. */

#include "circle.h"
#include <sstream>
#include <iostream>
#include <cmath>

double Circle::area() const
{
   return M_PI*pow(radius,2.0);
}

void Circle::read()
{
   using namespace std; // using declaration
   using std::string;   // using directive

   string name; // if no directive, std::string

   cout << "  give name : "; cin >> name;
   this->relabel(name);
   cout << "give radius : "; cin >> radius;
}

std::string Circle::to_string() const
{
   std::ostringstream s;

   s << "circle " << this->get_name()
     << " has radius " << radius;

   return s.str();
}
