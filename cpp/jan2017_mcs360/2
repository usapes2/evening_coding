#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
   string input_file_name, output_file_name;


   input_file_name = argv[1];
   output_file_name = argv[2];
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
