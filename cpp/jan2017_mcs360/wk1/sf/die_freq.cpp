// L-2 MCS 360 Wed 30 Aug 2017 : die_freq.cpp

/* We use the C library to generate pseudorandom numbers,
   simulating the rolling of a die a given number of times.
   In a for loop we count the frequencies of the outcomes,
   storing the counts in a C array.

Observe the following features in the code below:

(1) srand(time(0)) initializes the random number generator
    with the current time so different sequences of numbers
    are produced each time we run the program.

(2) We simulate a 6-sided die.  The rand() function returns
    a positive integer in the range 0..RAND_MAX.
    Via "% 6" we compute the remainder after division by 6.
    
(3) A C array of length 6 stores the frequency counts,
    initialized to zero and updated after each roll.

(4) Because the number of rolls n is fixed at the start,
    a for loop is appropriate.  The loop counter i is locally
    declared in the loop at the initialization.

(5) The first loop is executed n times, so the stop condition
    is "i < n".  In the second loop we put "i < 6", as printing 
    the frequency table happens in 6 steps. */

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
      int d = std::rand() % 6;
      // std::cout << " " << d;
      freq[d] = freq[d] + 1;
   }
   std::cout << "\nFrequency Table"
             << " of " << n << " times rolling a die :\n";
   
   for(int i=0; i<6; i++)
      std::cout << "  #" << i << " : " << freq[i] << "\n";

   return 0;
}
