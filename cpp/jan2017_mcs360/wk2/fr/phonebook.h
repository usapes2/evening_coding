// L-5 MCS 360 Fri 8 Sep 2017 : phonebook.h

/* This file contains the header file with the prototypes
   of the member functions and data of the class PhoneBook. */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include<string>

class PhoneBook
{
   public:

      PhoneBook();
      /* reads entries from file */

      PhoneBook(std::string s);
      /* reads entries from file */
      /*exercise 3 wk2 fr */

      ~PhoneBook();
      /* deallocates memory */

      int length() const;
      /* returns the number of entries */

      std::string operator[](size_t k) const;
      /* returns the k-th entry */

      void add(const std::string s);
      /* adds a new entry */

   private:

      int number;          // number of entries
      std::string *data;   // array of strings
};

#endif
