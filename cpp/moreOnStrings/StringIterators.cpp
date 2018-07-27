#include<string>
#include<iostream>
using namespace std;

int main() {

		string source("xxx");
	string s(source.begin(), source.end());
	cout << s <<endl;

	string::iterator itt = source.begin();

	string cp;
	for (itt; itt!=source.end() ; itt++ ) {
		cp += *itt;
		cp +=" ";
	}
	cout << cp << endl;
	cout << cp.length() << endl;
	
	string s4 = 'a';
	cout << s4 << endl;


	return 0;

}
