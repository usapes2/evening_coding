#include<iostream>
using namespace std;

int main () {
	int n;
	cout << " give the dimension : " ;
	cin >> n;

	cout << " allocating an array of length " << n << endl;

	double a[n];
	for ( int i = 0 ; i < n ; i++ ) a[i] = double (i);
	
	// Dynamic allocation 
	
	double *b ; // create a pointer
	b = new double[n]; // dynamic allocation
	for ( int i = 0 ; i < n ; i ++ ) b[i] = i;
	
	// Printing the results
	
	for ( int i = 0 ; i < n ; i ++ ) {
		cout << "a[" << i << "] = " << a[i] ;
		cout << endl; }

	cout << " \n" ;
	for ( int i = 0 ; i < n ; i ++ ) {
		cout << "b[" << i << "] = " << b[i] ;
		cout << endl; }
	delete[] b; // deallocation : release memory
	
	return 0;
}
