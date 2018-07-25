#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main() {
	int a = pow(2,31);
	cout << a << endl;

	int b = pow(2,31);
	cout << b << endl;

	cout << fixed<<" a + b  = " <<(double) a + (double) b<<endl;

	cout << sizeof(int) << endl;

	float x = 1.0;
	double y = 1.0;

 	x = x + 1.0e-10;
	cout << x << endl;
	y = y + 1.0e-10;
	cout << y << endl;

	return 0;
}
