// L-3 MCS 360 Fri 1 Sep 2017 : use_getline.cpp

/* We illustrate the use of getline to read strings
   from the console input. 

One could see this example as an extension of the hello_there.cpp
from the first lecture.  Now we ask the user for a given name and
a family name.  The program assumes the user holds a PhD, greets
accordingly, swapping family name with first name.

We start out very clean and then get more technical.

Instead of reading two strings (separated by a space),
we read an entire line.  But we must first ignore the
unprocessed newline symbol from the previous input statement.

Then we use string operations to split the line on the space
that separates first and last name.  */

#include <iostream>
#include <string>

#include <limits>
using namespace std;

int main()
{
   string given_name, family_name;

   cout << "Enter your full name : ";

   cin >> given_name >> family_name;

   cout << "Hello Dr. " << family_name 
        << ", may I call you " << given_name
        << "?" << endl;

   cout << "That was fun, let us try it again!" << endl;

   string full_name;
  
   cout << "Enter your full name : ";

   // we must first skip the unprocessed \n symbol
   // ignoring unlimited number of characters
   cin.ignore(numeric_limits<int>::max(),'\n');

   getline(cin,full_name,'\n');  // read till \n

   cout << "you entered " << full_name << endl;

   {
      size_t L = full_name.length();
      size_t p = full_name.find(" ");
      string first = full_name.substr(0,p);
      string second = full_name.substr(p+1,L-1);

      cout << "Hello Dr. " << first 
           << ", may I call you " << second
           << "?" << endl; 
   }

   return 0;
}
