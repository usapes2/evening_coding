
// s.find( -- string -- , starting position)
// s.insert( start idx , string )
// s.replace(start, size , string)
#include<iostream>
#include<string>
using namespace std;

void replaceChars( string& modifyMe,string findMe, string newChar) {
	//look in modifyMe for the "findMe" string
	//starting at position 0
	
	int i = modifyMe.find(findMe,0);
		if( i!= string::npos)
			//npos - means until the end of the string
			//Replace th find string with newChars
		modifyMe.replace(i,findMe.size(),newChar);
}
int main() {

	string avangers("Hulk Thor Spiderman Superman Antman");
	cout << avangers << endl;
	cout << "\n";
	replaceChars(avangers,"Superman","Ironman");
	cout << "---------- new string ----------- \n";
	cout << avangers<<endl;

	return 0;
}
