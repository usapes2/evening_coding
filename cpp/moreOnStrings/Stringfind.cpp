#include<iostream>
#include<string>

using namespace std;

int main() {

	string s(" My name is Jorge, My name is Alex, My name is Anthony");
	cout << s.size() << endl; // total size

	cout << s.find_last_of("namey"); // last position
	string ss("12345");
	cout << "\n";
	string sss(10,'*');
	cout << sss<< endl;
	

	return 0;
}
