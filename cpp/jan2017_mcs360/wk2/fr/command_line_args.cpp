// L-5 MCS 360 Fri 8 Sep 2017 : command_line_args.cpp

/* The purpose of this program is to illustrate how to use
   command line arguments.

There are two optional arguments to the function main:
1. argc : the number of arguments, argc >= 1
   If there are no command line arguments, then argc = 1.
2. argv : the arguments of the command line
   argv is an array of strings,
   argv[0] is the name of the program
   argv[i] is the (i-1)-th argument of the program.

If we give the program the name "command_line_args",
then we can call the prgram at the command line as

$ command_line_args -a somefile.txt

The "-a" may indicate that we use the program is some
special mode (e.g.: as administrator), and the other
argument "somefile.txt" is a data file.  */

#include <iostream>
#include <string>

using namespace std;

int main ( int argc, char *argv[] )
{
   cout << "name of the program : \""
        << argv[0] << "\"" << endl;

   cout << "number of command line arguments : "
        << argc-1 << endl;

   if(argc > 1)
      for(int i=1; i<argc; i++)
         cout << "argument " << i << " : \""
              << argv[i] << "\"" << endl;

   return 0;
}
