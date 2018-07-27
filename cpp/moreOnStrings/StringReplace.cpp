// s.find( -- string -- _
// s.insert( start idx , string )
// s.replace(start, size , string)
#include<iostream>
#include<string>
using namespace std;


int main() {

	string s("A piece of text");
	string tag("$tag$");

	cout << s << endl;

	s.insert(8,tag+" " );

	cout << s << endl;

	int start = s.find(tag);
	
	cout << start << endl;
	cout << tag.size() << endl;

	cout << " replacing at position " << start << " number of char" << tag.size() << " of the string \n " <<
		
		s << endl;
	s.replace(start, tag.size(),"hello there we go");
	cout <<"result\n";
	cout << s << endl;

	return 0;
}

