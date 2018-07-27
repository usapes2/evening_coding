// L-2 MCS 360 Wed 30 Aug 2017 : grading_scale.cpp

/* The purpose of this program is to illustrate 
   the if-else statement and the switch.

The user is prompted to enter a score, assumed a percentage.
The program returns a letter grade according to the course
grading scale:

90 -- 100\% = A, 80 -- 89\% = B, 70 -- 79\% = C, 60 -- 69\% = D,
  0 -- 59\% = F.

To illustrate the switch, a comment on the letter grade is printed,
referring to the grading scale. 

We use the function "ceil" from the math library
to convert a double to the smallest integer value
that is not less than the given percentage.  */

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
   double input;

   cout << "Enter a percentage : ";
   cin >> input;

   int score = ceil(input);    // smallest largest integer
                               // not less than input
   char grade;

   if(score >= 90)             // apply the grading scale
      grade = 'A';
   else if(score >= 80)
      grade = 'B';
   else if(score >= 70)
      grade = 'C';
   else if(score >= 60)
      grade = 'D';
   else
      grade = 'F';

   cout << "Score " << score
        << " equals the grade " 
        << grade << ", as ";   // justification follows ...

   switch(grade)
   {
      case 'A': cout << score << " >= 90%"; break;
      case 'B': cout << "80% <= "
                     << score << " <= 89%"; break;
      case 'C': cout << "70% <= " 
                     << score << " <= 79%"; break;
      case 'D': cout << "60% <= "
                     << score << " <= 69%"; break;
      default : cout << score << " <= 59%"; break;
   }
   cout << "." << endl;

   return 0;
}
