// Write a program to report the length of the longest and shortest string in its input

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main () {
	string s;
	
	
	cout << " Please input " << endl;

	typedef string::size_type size ;
	size min = -1;
	size max = 0;

	while(cin>>s)  {
		if(s.size() > max ) max = s.size();
		if(s.size() < min ) min = s.size();
	
	}

	cout << " Minimum length string is " << min << endl;
	cout << " Maximum length string is " << max << endl;
	return 0;
}
