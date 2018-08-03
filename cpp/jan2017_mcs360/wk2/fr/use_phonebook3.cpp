//Test of the constructor with the arguments
#include <iostream>
#include "phonebook.h"
#include <string>

using namespace std;

int main ( int argc, char* argv[] )
{

   string s("data");
   cout << s<< endl;
   PhoneBook *b;

   cout << "welcome to our phone book" << endl;
   cout << "reading data from file ..." << endl;

   b = new PhoneBook(s);

   int n = b->length();

   cout << "number of entries : " << n << endl;
   if(argc == 1)
      for(int k=0; k<n; k++)
         cout << "  entry " << k << " : " 
              << (*b)[k] << endl;
   else
   {
      string new_entry;

      cout << "give new entry : ";
      getline(cin,new_entry);

      b->add(new_entry);
   }

   for ( int  i = 0 ; i < n ; i++ )
	   cout << (*b)[i] << endl;
   b->del(1);
   cout << " \n _______________________________________ " << endl;
   for ( int  i = 0 ; i < b->length() ; i++ )
	   cout << (*b)[i] << endl;

	   
   b->~PhoneBook();

   return 0;
}
