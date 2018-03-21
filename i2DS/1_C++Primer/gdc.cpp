#include <iostream>
#include <sstream>

using namespace std;

int main()
{

	int x,y;

	cout << "Welcome to Greatest Common Divisor\n";
	cout << " give a positive integer x: ";
	cin >> x;
	cout << " give a positive integer y: ";
	cin >> y;
	cout << "computing the gcd of " << x << "gcd(" << x << "," << y << "( = ";

	ostringstream s; // write to a string
	s << " gcd(" << x << "," << y << ") = ";

	int r;

	do
	{
		r = x % y ; // remainer calculation
		cout << " x = " << x << " y = " << y << " r = " << r <<endl;

		x = y;
		y = r;

	} while (r != 0); // stop test
	
	cout << s.str() << x << endl;
	return 0;
}
