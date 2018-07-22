#include<iostream>
using namespace std;

int main () {

	int a = 47;
	int *ipa = &a;
	cout << " value in a = " << a << endl;
	cout << " value in ipa = " << ipa << endl;
	cout << " dereference pointer ipa = " << *ipa << endl;
	
	*ipa = 100; // changing the value at that address location by using the pointer
	
	return 0;
}
