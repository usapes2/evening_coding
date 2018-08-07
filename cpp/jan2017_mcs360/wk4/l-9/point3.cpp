// L-9 MCS 360 Mon 18 Sep 2017 : point3.cpp

/* This file contains the definition of the member operations
   of the class Point. */

#include "point3.h"
#include <sstream>

using namespace D3;

Point::Point(int a, int b, int c)
{
   x = a;
   y = b;
   z = c;
}

int Point::get_x() const
{
   return x;
}

int Point::get_y() const
{
   return y;
}

int Point::get_z() const
{
   return z;
}

std::string Point::to_string() const
{
   std::ostringstream s;
   s << '(' << x << ',' << y << ',' << z << ')';
   return s.str();
}
