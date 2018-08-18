//Program to count how many times each distinct word appears in its input

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {

	cout << " Type input " << endl;
	string s ;
	vector<string> in;
	//Parse input by " " 	
	
	while(cin>>s) 
		in.push_back(s);

	for (int i = 0 ; i<in.size(); i++ ) {
		cout << in[i] << endl;
	}

	
}
