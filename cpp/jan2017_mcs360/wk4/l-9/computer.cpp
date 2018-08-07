// L-9 MCS 360 Mon 18 Sep 2017 : computer.cpp

/* This file contains the definition of the member operations
   of the class computer. */

#include <sstream>
#include "computer.h"

std::string Computer::to_string() const
{
   std::ostringstream s;

   s << "  Processor : " << Processor::to_string();
   s << std::endl;
   s << "     Memory : " << Memory::to_string();

   return s.str();
}
