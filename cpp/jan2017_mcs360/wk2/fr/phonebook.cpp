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
