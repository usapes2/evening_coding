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


	r = x % y ; // remainer calculation
	while ( r!=0)
	{
		x = y;
		y = r;

		r = x % y ; // remainer calculation
		cout << " x = " << x << " y = " << y << " r = " << r <<endl;

			} 
	
	cout << s.str() << y << endl;
	cout << "check gcd devides x " << tempx % y << endl;
	cout << "check gcd devides y " << tempy % y << endl;
	return 0;
}
