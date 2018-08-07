// L-9 MCS Mon 18 Sep 2017 : rectangle.h

/* The class Rectangle inherits from the abstract class Shape,
   providing definitions for the virtual members of the Shape class. 

The data attributes of the Rectangle class are declared as protected:
(1) client programs that use Rectangle objects have no access to
    the data attributes;
(2) classes that inherit from Rectangle have access to the data members.

We override the virtual members of the abstract class shape
and provide two constructors via overloading. */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
#include <string>

class Rectangle : public Shape
{
   protected:

      double width, height;

   public:

      Rectangle() : Shape("")
        { width = 0.0; height = 0.0; }

      Rectangle(std::string name, double w, double h) :
         Shape(name), width(w), height(h) {}

      double area() const;
      /* returns the area of a rectangle */

      void read();
      /* prompts the user for a rectangle */

      std::string to_string() const;
      /* returns a string representation of a rectangle */
};

#endif
