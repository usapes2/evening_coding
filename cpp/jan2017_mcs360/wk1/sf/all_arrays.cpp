// L-3 MCS 360 Fri 1 Sep 2017 : all_arrays.cpp

/* We demonstrate how to allocate arrays. */

#include <iostream>

using namespace std;

int main()
{
   int n;

   cout << "give the dimension : ";
   cin >> n;

   cout << "allocating an array of length "
        << n << endl;
                 
   double a[n];
   for(int i=0; i<n; i++) a[i] = double(i);

   double *b;
   b = new double[n]; // dynamic allocation
   for(int i=0; i<n; i++) b[i] = a[i];

   for(int i=0; i<n; i++)
      cout << "  a[" << i << "] = " << a[i];
   cout << endl;
   for(int i=0; i<n; i++)
      cout << "  b[" << i << "] = " << b[i];
   cout << endl;

   delete[] b; // deallocation: release memory

   return 0;
}
