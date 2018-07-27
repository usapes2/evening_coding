#include<iostream>
#include<string>
using namespace std;

//Strings are arrays of characters

int main() {

	// stretch string
	string s;
	cout << " give a string : " ;
	cin >> s;
	int n = s.length();
	cout << " received " << n << " characters " << endl;
	
	char ss[2*n]; // Prepping space for stretching the string

	ss[0] = s[0];
	for ( int i=1 ; i<n; i++) 
	{
		ss[2*i-1]=' ';
		ss[2*i] = s[i];
	}
	ss[2*n - 1 ] = '\0'; // end of string symbol

	cout << " streched string : " << ss << endl;
	return 0;
}
