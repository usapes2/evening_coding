// L-9 MCS 360 Mon 18 Sep 2017 : processor.h

/* This file contains the header file with the prototypes
   of the member functions and data of the class Processor. */

#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <string>

class Processor
{
   public:

      Processor(double s, int c);
      /* creates a processor, given the frequency of
         its clock and the number of cores */

      double get_speed() const;
      /* returns the speed */

      int get_cores() const;
      /* returns the number of cores */

      std::string to_string() const;
      /* returns a string representation of a processor */

   private:

      double speed; /* clock frequency */
      int cores;    /* number of cores */
};

#endif
