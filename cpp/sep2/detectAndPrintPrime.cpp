/* Write a program that detects even numbers */

#include <iostream>
using namespace std;

void primePrinter (int n) ;
int main () 

{
	primePrinter(41);
	return 0;
}


void primePrinter (int n) 
{ int t;
	for ( int i = 2 ; i < n+1 ; i++ ) { // going through numbers 
		int t = 0;
	 for ( int j = 2 ; j < i ; j ++ ) {
		if ( i % j == 0 ) t = 1;	
	 }

	 if ( t == 0 ) cout << i << " Prime " <<endl;
	 
	}
            
}
