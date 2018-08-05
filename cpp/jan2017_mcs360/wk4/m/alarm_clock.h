// L-8 MCS Fri 15 Sep 2017 : alarm_clock.h

/* We inherit from the clock class to make an alarm clock. */

#ifndef ALARM_CLOCK_H
#define ALARM_CLOCK_H

#include <ostream>
#include <string>
#include "clock.h"

class Alarm_Clock : public Clock
{
   public:

      Alarm_Clock(int h, int m, int s) : Clock(), 
         hours(h), minutes(m), seconds(s) {}
      /* sets the alarm clock to the time h:m:s */

      int get_alarm_hours() const;
      /* returns the value of hours */

      int get_alarm_minutes() const;
      /* returns the value of minutes */

      int get_alarm_seconds() const;
      /* returns the value of seconds */

      std::string to_string() const;
      /* returns a string representation of an alarm clock */

   private:

      int hours;   /* hours in 24 hour format
                      integer in the range 0..23 */
      int minutes; /* minutes in range 0..59 */
      int seconds; /* integers in range 0..61
                      allowing for leap second */
};

#endif
