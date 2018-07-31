// L-4 MCS 360 Wed 6 Aug 2017 : time_with_clock.cpp

#include<iostream>
#include "a_class_clock.h"

using namespace std;

int main()
{
   Clock c;

   cout << "The current time is "
        << c << "." << endl;

   cout << " N " << endl;

   cout << "The current time is "
        << c << "." << endl;
   cout << " N " << endl;
  
   Clock d;

   d.set_clock(16,52,3);

   bool test_eq = (c == d);

   cout << c << " == " << d << " is "
        << test_eq << endl; 

   d.update();

    test_eq = (c == d);

   cout << c << " == " << d << " is "
        << test_eq << endl; 

   return 0;
}
