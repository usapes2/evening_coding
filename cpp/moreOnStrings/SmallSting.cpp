#include <iostream>
#include <string>

using namespace std;

int main() {

	string imBlank;
//	cout << imBlank.length()<<endl;
	string hello = "hello";
//	cout << hello.length()<<endl;
	string hello1("hello");
//	cout << hello1.length()<<endl;

	string s1("0123456789");
	cout << s1 << endl;
	string s2(s1,5,10);
	cout << s2 << endl;

	cout << s2.length() << endl;
	cout << s1.length() << endl;

	string s3("I saw a ghost in the kitchen");
	cout << s3.substr(2,3); // takes a starting position as its first arg and the number of char to select as the second arg.
	
	return 0;
}
