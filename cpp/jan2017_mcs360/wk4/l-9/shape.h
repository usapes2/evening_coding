// L-9 MCS Mon 18 Sep 2017 : shape.h

/* This is an abstract class to store a planar shape.
   Every shape has a name, stored as a string label.

There are three pure virtual functions: to compute the area,
to read a shape and to make a string representation. */

#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
   private:

      std::string label;

   public:

      Shape(std::string name) 
         { label = name; }

      std::string get_name() const
         { return label; }

      void relabel(std::string name)
         { label = name; }

      virtual double area() const = 0;
      virtual void read() = 0;
      virtual std::string to_string() const = 0;
};

#endif
