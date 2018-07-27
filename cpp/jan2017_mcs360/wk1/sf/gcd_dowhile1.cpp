// L-1 MCS 360 Mon 28 Aug 2017 : gcd_dowhile1.cpp

/* The code below computes the greatest common divisor of two positive
   integers entered by the user.  We want to illustrate several points:

(1) The use of the standard input stream to enter integer numbers.
    Note that the program provides no safeguards for when the user
    does enter floating-point numbers or other character sequences.

(2) Similar to writing to standard output we can write to a string,
    using the class ostream and an ostringstream object.  In this
    way we store current values of the numbers of later output.

(3) The loop test is on the remainder which must be computed first
    and repeatedly in the body of the loop.  Therefore, a do-while
    loop seems most appropriate.

(4) To see the evoluation of the algorithm, additional output is printed.  */

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
   int x,y;

   cout << "Welcome to our Greatest Common Divisor\n";
   cout << "  give a positive integer x : "; cin >> x;
   cout << "  give a positive integer y : "; cin >> y;
   cout << "computing the gcd of "
        << x << " and " << y << " ...\n";

   ostringstream s;
   s << "gcd(" << x << "," << y << ") = ";  // store for output
 
   int r;

   do
   {
       r = x % y;          // remainder calculation
       cout << "  x = " << x << "  y = " << y << "  r = " << r << endl;
       x = y;
       y = r;
   } while (r != 0);       // stop test

   cout << s.str() << x << "\n";

   return 0;
}
