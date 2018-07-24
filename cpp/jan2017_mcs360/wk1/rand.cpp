#include <iostream>
#include<cstdlib> // include the C standard library 
#include<ctime>
#include<iomanip>
using namespace std;

int main() {
	// srand(s)  - set the seed of the generator to s
	// Common practice : s is the current time.
	// for debugging: s is fixed so get same sequence.
	//
	// rand() - returns an integer in 0 . . RAND_MAX
	// use modulo operator % to limit range of numbers.
	srand(time(0));
	int r = rand();
	double d = double(r) / RAND_MAX;
	cout << fixed<<setprecision(2)<<d << endl;

	return 0;
}
