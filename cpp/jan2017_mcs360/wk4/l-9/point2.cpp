// L-9 MCS 360 Mon 18 Sep 2017 : point2.cpp

/* This file contains the definition of the member operations
   of the class Point. */

#include "point2.h"
#include <sstream>

using namespace D2;

Point::Point(int a, int b)
{
   x = a;
   y = b;
}

int Point::get_x() const
{
   return x;
}

int Point::get_y() const
{
   return y;
}

std::string Point::to_string() const
{
   std::ostringstream s;
   s << '(' << x << ',' << y << ')';
   return s.str();
}
