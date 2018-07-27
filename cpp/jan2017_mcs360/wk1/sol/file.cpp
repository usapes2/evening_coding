

#include <string>
#include <iostream>
#include <fstream>
using namespace std;


int main () {

	ifstream in("/mnt/c/Users/acagu/Desktop/1.cpp");//open for reading
	string s;
	int counter =0 ;

	while(getline(in,s) ) {
		for (int i = 0 ; i < s.length() ; i++ ){
			if ( s[i] == ';') counter++ ;
		}}
	cout << counter ;


	return 0;
}
