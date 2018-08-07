// L-8 MCS 360 Fri 15 Sep 2017 : test_alarm_clock.cpp

#include <iostream>
#include "clock.h"
#include "alarm_clock.h"

using namespace std;

int main()
{
   Clock c;

   cout << "The current time is "
        << c << "." << endl;

   Alarm_Clock a(21,11,8);

   cout << "The alarm is "
        << a << "." << endl;

   cout << a.to_string() << endl;

   Clock *d;

   d = new Alarm_Clock(12,50,0);

   cout << "to_string on Clock : "
        << d->Clock::to_string() << endl;
   cout << "to_string on Alarm_Clock : "
        << d->to_string() << endl;

   return 0;
}
