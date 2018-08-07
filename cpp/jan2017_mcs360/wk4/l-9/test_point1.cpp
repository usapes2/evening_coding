// L-9 MCS 360 Mon 18 Sep 2017 : test_point1.cpp

#include "point1.h"
#include <iostream>

using namespace std;

int main()
{
   Point p(2,3);

   cout << "A point with coordinates " 
        << p.to_string() << "." << endl;
  
   return 0;
}
