// L-5 MCS 360 Fri 8 Sep 2017 : phonebook.cpp

/* This file contains the definition of the member operations
   of the class PhoneBook.  

It assumes the data is in the file phonebook_data.txt.

To compile this file, at the command prompt type
g++ -c phonebook.cpp */

#include <fstream>
#include <limits>
#include "phonebook.h"

PhoneBook::PhoneBook()
{
   std::ifstream ins("phonebook_data.txt");

   ins >> number;
   data = new std::string[number];
   ins.ignore(std::numeric_limits<int>::max(),'\n');
   for(int k=0; k<number; k++)
      getline(ins,data[k],'\n');

   ins.close();
}

PhoneBook::PhoneBook(std::string s)
{
   int n = s.length();
   char ss[n-1];
   ss[0] = s[0];

   for(int i=1; i<n; i++)
   {
      ss[i] = s[i];
   }
  
   std::ifstream ins(ss);

   ins >> number;
   data = new std::string[number];
   ins.ignore(std::numeric_limits<int>::max(),'\n');
   for(int k=0; k<number; k++)
      getline(ins,data[k],'\n');

   ins.close();
}


PhoneBook::~PhoneBook()
{
   delete[] data;
}

int PhoneBook::length() const
{
   return number;
}

std::string PhoneBook::operator[](size_t k) const
{
   return data[k];
}

void PhoneBook::add(const std::string s)
{
   std::ofstream outs("phonebook_data.txt");
   
   number = number + 1;
   outs << number << std::endl;
   for(int k=0; k<number-1; k++) 
      outs << data[k] << std::endl;

   outs << s << std::endl;

   outs.close();
}
void PhoneBook::del(size_t k) {

	for ( int i = k ; i < number - 1; i ++ ) {
		data[i] = data [ i +1 ]; }
	number = number -1;
}
