#include <iostream>
#include <string>
using namespace std;

// Making reverse strings with iterators.
int main() {
	string s1("12345");
	string reverse ="";

	string::iterator itt = s1.end();
	cout << *itt << endl;

	for ( itt ; itt!=s1.begin() -1 ; itt--)
		reverse +=(*itt);
	
	cout << reverse << endl;


	return 0;

}
