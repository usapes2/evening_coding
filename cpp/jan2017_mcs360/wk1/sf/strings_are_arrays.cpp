// L-3 MCS 360 Fri 1 Aug 2017 : strings_are_arrays.cpp

/* Strings are sequences of characters.  The program below 
   prompts the user for a string and inserts one space between
   every two consecutive characters in the given string. 

   The result is a C string: an array of characters.
   Characters in the output string at odd positions are spaces,
   the character at position 2*k in the output string
   is the character at position k in the given string. */

#include <iostream>
#include <string>

using namespace std;

int main()
{
   cout << "give a string : ";
   string s; cin >> s;

   int n = s.length();

   cout << "received " << n 
        << " characters" << endl;

   char ss[2*n];

   ss[0] = s[0];
   for(int i=1; i<n; i++)
   {
      ss[2*i-1] = ' ';
      ss[2*i] = s[i];
   }
   ss[2*n-1] = '\0'; // end of string symbol
  
   cout << "stretched string : " 
        << ss << endl;

   return 0;
}
