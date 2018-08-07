// L-9 MCS 360 Mon 18 Sep 2017 : test_point2.cpp

#include <iostream>
#include "point2.h"

using namespace std;
// using namespace D2;

int main()
{
   D2::Point p(2,3);

   cout << "A point with coordinates " 
        << p.to_string() << endl;

   return 0;
}
