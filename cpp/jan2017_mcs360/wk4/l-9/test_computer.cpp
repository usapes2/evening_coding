// L-9 MCS 360 Mon 18 Sep 2017 : test_computer.cpp

#include "computer.h"
#include <iostream>

using namespace std;

int main()
{
   Computer c(2.26,2,1067,2);

   cout << "your computer is " << endl;
   cout << c.to_string() << endl;

   return 0;
}
