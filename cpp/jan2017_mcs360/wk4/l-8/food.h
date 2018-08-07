// L-8 MCS Fri 9 Sep 2010 : food.h

/* This is an abstract class. */

#ifndef FOOD_H
#define FOOD_H

class Food
{
   private:

      double calories;

   public:

      double get_calories() const
         { return calories; }

      virtual double pct_carbohydrates() const = 0;
      virtual double pct_protein() const = 0;
      virtual double pct_fat() const = 0;
};

#endif
