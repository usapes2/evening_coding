/* The program writes the input number and prints the bits
 * in the binary decomposition of the number, in reverse order, 
 * printing the least signiicant bit first. */
#include<iostream>

using namespace std;

int bit_print(int n) 
{
	int temp;
	if ( n == 1) {
		cout<< 1 << endl;
		return 1; }
	temp = n;	
	n = bit_print( n/2 );
	cout << temp%2 << endl;
}
int main()
{
	bit_print(360);

	return 0;
}
