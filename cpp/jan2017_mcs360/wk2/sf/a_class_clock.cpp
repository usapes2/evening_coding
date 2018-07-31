// L-4 MCS 360 Wed 6 Sep 2017 : a_class_clock.cpp

/* This file contains the definition of the member operations
   of the class Clock. 

To compile this file, at the command prompt type
g++ -c a_class_clock.cpp */

#include<ctime>
#include<iomanip>
#include "a_class_clock.h"

Clock::Clock()
{
   long int now = time(0);
   struct tm *tm_ptr;

   tm_ptr = localtime(&now);
   hours = tm_ptr -> tm_hour;
   minutes = tm_ptr -> tm_min;
   seconds = tm_ptr -> tm_sec;
}

void Clock::set_clock(int h, int m, int s)
{
   hours = h;
   minutes = m;
   seconds = s;
}

int Clock::get_hours() const
{
   return hours;
}

int Clock::get_minutes() const
{
   return minutes;
}

int Clock::get_seconds() const
{
   return seconds;
}

void Clock::update() {
   long int now = time(0);
   struct tm *tm_ptr;

   tm_ptr = localtime(&now);
   hours = tm_ptr -> tm_hour;
   minutes = tm_ptr -> tm_min;
   seconds = tm_ptr -> tm_sec;

}

std::ostream& operator<<(std::ostream& os, const Clock& c)
{
   os << std::setfill('0')
      << std::setw(2) << c.get_hours() << ":"
      << std::setw(2) << c.get_minutes() << ":"
      << std::setw(2) << c.get_seconds();
   return os;
}

bool Clock::operator==(const Clock& c) const
{
   if((this->hours == c.hours)
     && (this->minutes == c.minutes)
     && (this->seconds == c.seconds))
      return true;
   else
      return false;
}
