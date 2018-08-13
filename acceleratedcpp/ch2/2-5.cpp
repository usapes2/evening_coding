// Write a set '*' characters so that they form a square, a rectangle, and a triangle.
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
using std::endl;

int main () {


	// square
	cout << "enter side of the square " << endl;
	string::size_type a;
	cin >>  a;
	const string row(a,'*');

	for ( int i = 0 ; i < (int) a ; i++) {

		cout << row << endl;
	}

	// rectangle
	cout << "enter width of the rectangle " << endl;
	string::size_type w;
	cin >>  w;

	cout << "enter length of the rectangle " << endl;
	string::size_type l;
	cin >>  l;

	const string block(l,'*');
	for ( int i = 0 ; i != w; i++) {

		cout << block << endl;
	}

	// triangle
	
	cout << "enter the base of the triangle " << endl;
	string::size_type baseNum;
	cin >>  baseNum;
	for ( int i = 0 ; i < baseNum ; i ++ ) {
		string side(i,'*');
		cout << side << endl;
	}

			return 0;
}
