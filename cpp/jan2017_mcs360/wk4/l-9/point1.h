// L-9 MCS 360 Mon 18 Sep 2017 : point1.h

/* This file contains the header file with the prototypes
   of the member functions and data of the class Point. */

#ifndef POINT1_H
#define POINT1_H

#include <string>

class Point
{
   public:

      Point(int a, int b);
      /* creates a point with coordinates a and b */

      int get_x() const;
      /* returns the x-coordinate */

      int get_y() const;
      /* returns the y-coordinate */

      std::string to_string() const;
      /* returns a string representation of a point */

   private:

      int x; /* x-coordinate of the point */
      int y; /* y-coordinate of the point */
};

#endif
