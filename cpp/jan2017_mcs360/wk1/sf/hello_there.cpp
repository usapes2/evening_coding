// L-1 MCS 360 Mon 28 Aug 2017 : hello_there.cpp

/* Our first interactive C++ program prompts the user for a name
   and then confirms the entered name in a greeting.

We illustrate several aspects in this simple program:
(1) the include directives for the preprocessor
(2) using the standard (std) namespace of C++
(3) writing strings to standard output
(4) reading one line from standard input into a string  

To run the program, save the code in a file with name "hello_there.cpp" 
and type at the command prompt $ in a Terminal window:

$ g++ -o /tmp/hello_there hello_there.cpp

which invokes the C++ compiler in gcc, sending the output 
executable file into the /tmp folder with name "hello_there".
Typing /tmp/hello_there at the prompt will then run the program.  */

#include <iostream>
#include <string>

using namespace std;

int main()
{
   string name;

   cout << "Who is there ? "; // insertion operator
   cin >> name;               // extraction operator
   cout << "Hello " << name << "!" << endl;

   return 0;
}
