// L-2 MCS 360 Wed 30 Aug 2017 : work_pointers.cpp

/* We illustrate working with pointers and references:
   (1) modifing a number through a pointer;
   (2) pointer aritmetic to run through an array;
   (3) a reference is just another name for a variable;
   (4) function to swap doubles. */

#include<iostream>

using namespace std;

void swap ( double &a, double &b )
{
   double c = a;
   a = b; b = c;
}

int main()
{
   double x = 1.234;
   double *p = &x;  // address of x

   cout << "x = " << x << ", via p : " << *p << endl;
    
   double *q;
   q = &x;
   *q = *q + 1;
   cout << "x = " << x << ", via p : " << *p 
                       << ", via q : " << *q << endl;

   double a[3] = {1.23, 2.34, 3.45};

   for(int i=0; i<3; i++) cout << " " << a[i];
   cout << endl;

   p = a;
   for(int i=0; i<3; i++) cout << " " << *(p++);
   cout << endl;

   double y = 5.678;
   double &z = y;

   cout << "y = " << y << ", z = " << z << endl;
   z = z + 1;
   cout << "y = " << y << ", z = " << z << endl;

   swap(x,y);

   cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

   return 0;
}
