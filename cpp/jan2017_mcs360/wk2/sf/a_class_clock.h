// L-4 MCS 360 Wed 6 Sep 2017 : a_class_clock.h

/* This file contains the header file with the prototypes
   of the member functions and data of the class Clock.

Note that it is natural to give the set the name of the header file
to the name of the class, but this is not required. */

#ifndef A_CLASS_CLOCK_H
#define A_CLASS_CLOCK_H

#include<iostream>

class Clock 
{
   public:

      Clock();
      /* sets the clock to the current time */

      void set_clock(int h, int m, int s);
      /* sets clock to hour given in h,
         minutes to m, and seconds to s. */

      int get_hours() const;
      /* returns the value of hours */

      int get_minutes() const;
      /* returns the value of minutes */

      int get_seconds() const;
      /* returns the value of seconds */
      
      void update() ;

      friend std::ostream& operator<<(std::ostream& os, const Clock& c);
      /* defines output of an object clock */

      bool operator==(const Clock& c) const;
      /* returns true if the time stored at the clock
         equals the time stored at c */

   private:

      int hours;   /** hours in 24 hour format
                       integer in the range 0..23 */
      int minutes; /** minutes in range 0..59 */
      int seconds; /** integers in range 0..61
                       allowing for leap second */
};

#endif
