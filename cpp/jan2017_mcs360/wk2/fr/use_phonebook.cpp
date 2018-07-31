// L-5 MCS 360 Fri 8 Sep 2017 : use_phonebook.cpp

/* This program uses a command line argument to switch between
   normal reader mode (without argument) and administrator mode,
   using any argument. 

   For this program to execute properly, the file phonebook_data.txt
   must be in the same folder as the executable.

   An example of typical content for the file phonebook_data.txt is
   in the three lines below (exclude the blank line):

   2
   111-222-4444 Elliot Koffman
   333-666-9999 Paul Wolfgang

*/

#include <iostream>
#include "phonebook.h"

using namespace std;

int main ( int argc, char* argv[] )
{
   PhoneBook b;
   int n = b.length();

   cout << "number of entries : " << n << endl;
   if(argc == 1)
      for(int k=0; k<n; k++)
         cout << "  entry " << k << " : " 
              << b[k] << endl;
   else
   {
      string new_entry;

      cout << "give new entry : ";
      getline(cin,new_entry);

      b.add(new_entry);
   }

   return 0;
}
