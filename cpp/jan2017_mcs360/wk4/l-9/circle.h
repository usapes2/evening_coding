// L-9 MCS Mon 18 Sep 2017 : circle.h

/* The class Circle is similar to the class Rectangle,
   see rectangle.h for comments. */

#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include <string>

class Circle : public Shape
{
   protected:

      double radius;

   public:

      Circle() : Shape("") { radius = 0.0; }

      Circle(std::string name, double r) :
         Shape(name), radius(r) {}

      double area() const;
      /* returns the area of a circle */

      void read();
      /* prompts the user for a circle */

      std::string to_string() const;
      /* returns a string representation of a circle */
};

#endif
