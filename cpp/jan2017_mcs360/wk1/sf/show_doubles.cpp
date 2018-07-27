// L-2 MCS 360 Wed 30 Aug 2017 : show_doubles.cpp

/* Illustration of i/o manipulators to display doubles
   in various formats: general, fixed, and scientific. */

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
   const double x = 1.2345e+9;
   const double y = 456.789;
 
   cout << "general x = " << x << ", y = " << y << endl;
   cout << fixed << setprecision(2)
        << "fixed x = " << x << ", y = " << y << endl;
   cout << scientific << setprecision(4)
        << "scientific x = " << x << ", y = " << y << endl;

   return 0;
}
