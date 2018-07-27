/* Compute the number of semicolons of a C++ program on file.
 * Let the user enter the name of the file. */

#include <string>
#include <iostream>
#include <fstream>
using namespace std;


int main () {

	ifstream in("C:/Users/acagu/Desktop/codingCPP/cpp/jan2017_mcs360/wk1/sol/1.cpp");//open for reading
	string s;
	cout << getline(in,s) << endl;
	int counter = 0; // counter for the semicolumn
	while(getline(in,s) ) { //  now search s for semicolumns treating
		for ( int i = 0 ; i < s.length(); i++ ){
			if ( s[i] ==';') counter++;
		}	

		 }

		


}
