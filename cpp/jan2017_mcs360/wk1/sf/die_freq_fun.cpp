// L-2 MCS 360 Wed 30 Aug 2017 : die_freq_fun.cpp

/* We use the C library to generate pseudorandom numbers,
   simulating the rolling of a die a given number of times.
   In a for loop we count the frequencies of the outcomes,
   storing the counts in a C array.

This is a modification of die_freq.cpp using functions. */

int die ( int d );
// returns a value in the range 0..d-1

void update ( int *t, int d );
// updates the table t with the die value d

#include<cstdlib>
#include<ctime>
#include<iostream>

int main()
{
   int n;

   std::cout << "Simulating the rolling of a die...\n";
   std::cout << "  give a positive integer : ";
   std::cin >> n;

   std::srand(time(0));  // set seed to time

   int freq[6] = {0, 0, 0, 0, 0, 0};

   for(int i=0; i<n; i++)
   {
      int d = die(6);
      // std::cout << " " << d;
      update(freq,d);
   }
   std::cout << "\nFrequency Table"
             << " of " << n << " times rolling a die :\n";
   
   for(int i=0; i<6; i++)
      std::cout << "  #" << i << " : " << freq[i] << "\n";

   return 0;
}

int die ( int d )
{
   int roll = rand() % d;
   return roll;
}

void update ( int *t, int d )
{
   t[d] = t[d] + 1;
}
