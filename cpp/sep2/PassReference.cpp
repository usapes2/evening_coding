#include <iostream>
using namespace std;


void f(int &r) { // function that takes reference
	cout << " r = " << r << endl;
	cout << " &r = " << &r << endl;
	r = 5;
	cout << " r = " << r << endl;
	
}


int main() {
	int x = 47 ;
	cout << " x = " << x << endl;
	cout << " &x = " << &x << endl;

	cout << " Calling the function now " << endl;
	f(x);
	
	cout << " x = " << x << endl;
	cout << " &x = " << &x << endl;


	return 0;

}
