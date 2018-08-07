// L-9 MCS 360 Mon 18 Sep 2017 : processor.cpp

/* This file contains the definition of the member operations
   of the class Processor. */

#include "processor.h"
#include <sstream>
#include <iostream>
#include <iomanip>

Processor::Processor(double s, int c)
{
   speed = s; cores = c;
}

double Processor::get_speed() const
{
   return speed;
}

int Processor::get_cores() const
{
   return cores;
}

std::string Processor::to_string() const
{
   std::ostringstream s;

   s << std::setprecision(3);
   s << speed << " Ghz, ";
   s << cores << " cores";
   return s.str();
}
