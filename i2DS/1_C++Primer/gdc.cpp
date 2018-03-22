#include <iostream>
#include <sstream>

using namespace std;

int main()
{

	int x,y,tempx,tempy;

	cout << "Welcome to Greatest Common Divisor\n";
	cout << " give a positive integer x: ";
	cin >> x;
	cout << " give a positive integer y: ";
	cin >> y;
	cout << "computing the gcd of " << x << "gcd(" << x << "," << y << "( = ";

	ostringstream s; // write to a string
	s << " gcd(" << x << "," << y << ") = ";

	int r;
	tempx = x;
	tempy = y;

	do
	{
		r = x % y ; // remainer calculation
		cout << " x = " << x << " y = " << y << " r = " << r <<endl;

		x = y;
		y = r;

	} while (r != 0); // stop test
	
	cout << s.str() << x << endl;
	cout << "check gcd devides x " << tempx % x << endl;
	cout << "check gcd devides y " << tempy % x << endl;
	return 0;
}
