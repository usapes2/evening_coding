#include <iostream>
#include <cstdio>
// Given two positive int a <=b separated by a new line.
// for each n in the interval
// if 1<=n<=9 print the English representation of it in lowercase
// Else n>9 and is an even nmber, then print "even"
// Else if n>9 and is odd => print odd.

using namespace std;
int main () {

	int a,b;
	cout << " enter a " << endl;
	cin >> a;
	cout << " enter b" << endl;
	cin >> b;

	for ( int i = a ; i < b+1 ; i++ ) {

		if ( i < 10) {
			switch(i) {
				case 1 : cout << "one";break;
				case 2 : cout << "two";break;
				case 3 : cout << "three";break;
				case 4 : cout << "four";break;
				case 5 : cout << "five";break;
				case 6 : cout << "six";break;
				case 7 : cout << "seven";break;
				case 8 : cout << "eight";break;
				case 9 : cout << "nine";break;
			}
		}
		else { if ( i % 2 == 0 ) {cout << "even";
		} else cout << "odd" ;

		}
	}
	return 0;
}
