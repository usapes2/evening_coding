/* Promts the user for a weight in kg. The program computes the weight measured in
 * pounds and writes the corresponding pounds to the standard output. */

#include<iostream>
using namespace std;

int main()
{
	double n;
	cout << " Give a weight in kg: ";
	cin >> n;
	cout << " The weight " << n << " in pounds is " << n*2.20462 <<endl;

	return 0;

}
