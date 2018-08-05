// L-8 MCS 360 Fri 15 Sep 2017 : alarm_clock.cpp

/* This file contains the definition of the member operations
   of the class Alarm_Clock.

The overriding of the to_string() method has consequences
for the insertion operator<< applied to objects of the class
alarm clock. */

#include <iomanip>
#include <sstream>
#include "alarm_clock.h"

int Alarm_Clock::get_alarm_hours() const
{
   return hours;
}

int Alarm_Clock::get_alarm_minutes() const
{
   return minutes;
}

int Alarm_Clock::get_alarm_seconds() const
{
   return seconds;
}

std::string Alarm_Clock::to_string() const
{
   using std::ostringstream;
   ostringstream s;

   s << std::setfill('0')
     << std::setw(2) << hours << ":"
     << std::setw(2) << minutes << ":"
     << std::setw(2) << seconds
     << " set at " << Clock::to_string();

   return s.str();
}
