// L-9 MCS Mon 18 Sep 2017 : computer.h

/* To illustrate multiple inheritance, we show below how an object
   of the class computer inherits from processor and memory. */

#ifndef COMPUTER_H
#define COMPUTER_H

#include "processor.h"
#include "memory.h"
#include <string>

class Computer : public Processor, public Memory
{
   public:

      Computer(double ps, int pc, int ms, int mc) :
         Processor(ps,pc), Memory(ms,mc) {}

      std::string to_string() const;
      /* returns a string representation of a computer */

};

#endif
