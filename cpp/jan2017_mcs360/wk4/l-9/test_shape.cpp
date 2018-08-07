// L-9 MCS 360 Mon 18 Sep 2017 : test_shape.cpp

/* We demonstrate the two different constructors for a rectangle
   and show how with a pointer to Shape, we can access with the
   same variable once a rectangle, and once a circle. */

#include <iomanip>
#include <iostream>
#include "rectangle.h"
#include "circle.h"

using namespace std;

int main()
{
   Rectangle r("A",2,1.23);

   cout << r.to_string() << endl;
   cout << "area of " << r.get_name()
        << " is " << r.area() << endl;

   Rectangle *t;
   t = new Rectangle();
   cout << "reading second rectangle ..."
        << endl;
   t->read();
   cout << "area of " << t->get_name()
        << " is " << t->area() << endl;

   Shape *s; // cannot allocate
   // s = new Shape("some shape); 

   s = t;
   cout << "second rectangle again..."
        << endl;
   cout << s->to_string() << endl;

   Circle *c;

   c = new Circle("C",1.0);
   cout << c->to_string() << endl;
   cout << "area of " << c->get_name()
        << setprecision(17)
        << " is " << c->area() << endl;

   s = c;
   cout << "getting circle again..."
        << endl;
   cout << s->to_string() << endl;

   return 0;
}
