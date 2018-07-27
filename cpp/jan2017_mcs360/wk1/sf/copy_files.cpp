// L-3 MCS 360 Fri 1 Sep 2017 : copy_files.cpp

/* The user is prompted for the names of an input file and
   an output file.  All data from input is copied to output file. */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
   string input_file_name, output_file_name;

   cout << "Give name of input file : ";
   cin >> input_file_name;
   cout << "Give name of output file : ";
   cin >> output_file_name;

   cout << "copying from " << input_file_name
        << " to " << output_file_name
        << " ... " << endl;

   ifstream ins(input_file_name.c_str());
   ofstream outs(output_file_name.c_str());

   string buffer;
   int count = 0;

   while(!ins.eof())
   {
      getline(ins,buffer,'\n');
      outs << buffer;
      if(!ins.eof()) outs << '\n';
      count = count + 1;
   }

   cout << "... copied " << count
        << " lines" << endl;

   return 0;
}
