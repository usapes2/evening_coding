// L-9 MCS 360 Mon 18 Sep 2017 : point2.h

/* This file contains the header file with the prototypes
   of the member functions and data to store a point in the plane. */

#ifndef POINT2_H
#define POINT2_H

#include <string>

namespace D2 {

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
          /* returns the string representation of a point */

      private:

         int x; /* x-coordinate of the point */
         int y; /* y-coordinate of the point */

   }; // end of class definition

}; // end of namespace

#endif
