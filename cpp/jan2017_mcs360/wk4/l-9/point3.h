// L-9 MCS 360 Mon 18 Sep 2017 : point3.h

/* This file contains the header file with the prototypes
   of the member functions and data to store a point in 3-space. */

#ifndef POINT3_H
#define POINT3_H

#include <string>

namespace D3 {

   class Point
   {
       public:

          Point(int a, int b, int c);
          /* creates a point with coordinates a, b, and c */
 
          int get_x() const;
          /* returns the x-coordinate */

          int get_y() const;
          /* returns the y-coordinate */

          int get_z() const;
          /* returns the z-coordinate */

          std::string to_string() const;
          /* returns the string representation of a point */

      private:

         int x; /* x-coordinate of the point */
         int y; /* y-coordinate of the point */
         int z; /* z-coordinate of the point */

   }; // end of class definition

}; // end of namespace

#endif
