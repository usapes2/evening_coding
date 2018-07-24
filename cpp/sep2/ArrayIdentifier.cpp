
#include <iostream>
using namespace std;

int main() {
	int a[10]; 
	cout << " a = " << a << endl; // so really a is just an address of the array
	cout << " &a[0] = " << &a[0] <<endl;

	int * ptr = a; // ptr is a ptr to a
	for ( int i = 0 ; i<10 ; i++ )
		ptr[i] = i*10;
	for ( int i = 0 ; i<10 ; i++ )
		cout << ptr[i] <<endl;
	return 0;
}
