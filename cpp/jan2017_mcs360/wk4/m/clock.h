// L-8 MCS Fri 15 Sep 2017 : clock.h

/* This is a modification of the class clock of Lecture 4,
   removed the "set_clock" method and added the virtual to_string(). 

Another addition is a virtual destructor,
as needed to deallocate dynamically allocated objects. */

#ifndef CLOCK_H
#define CLOCK_H

#include <ostream>
#include <string>

class Clock 
{
   public:

      Clock();
      /* sets the clock to the current time */

      int get_hours() const;
      /* returns the value of hours */

      int get_minutes() const;
      /* returns the value of minutes */

      int get_seconds() const;
      /* returns the value of seconds */

      virtual std::string to_string() const;
      /* returns a string representation of a clock,
         for polymorphism we declare as virtual */

      friend std::ostream& operator<<(std::ostream& os, const Clock& c);
      /* defines output of an object clock */

      bool operator==(const Clock& c) const;
      /* returns true if the time stored at the clock
         equals the time stored at c */

      virtual ~Clock() {}
      /* needed for delete in derived classes */

   private:

      int hours;   /* hours in 24 hour format
                      integer in the range 0..23 */
      int minutes; /* minutes in range 0..59 */
      int seconds; /* integers in range 0..61
                      allowing for leap second */
};

#endif
