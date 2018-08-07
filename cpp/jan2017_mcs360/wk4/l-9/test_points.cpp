// L-9 MCS 360 Mon 18 Sep 2017 : test_points.cpp

#include <iostream>
#include "point2.h"
#include "point3.h"

using namespace std;
// using namespace D2;

int main()
{
   D2::Point p(2,3);
   D3::Point q(2,3,1);

   cout << "A point with coordinates " 
        << p.to_string() << endl;

   cout << "A point with coordinates " 
        << q.to_string() << endl;

   return 0;
}
