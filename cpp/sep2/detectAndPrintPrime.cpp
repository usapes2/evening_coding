/* Write a program that detects even numbers */

#include <iostream>
using namespace std;

void primePrinter (int n) ;
int main () 

{
	primePrinter(11);
	return 0;
}


void primePrinter (int n) 
{
	int sw = 0;
	for ( int i = 2 ; i < n+1 ; i++ ) { // going through numbers 
		 sw = 0;
	 for ( int j = 2 ; j < i ; j ++ ) 
         	 {
		 if ( i % j == 0 )  { cout << "Number " << i << " is not  a prime "<< endl ; }
		 sw = 1;
		 break; 
        	}
	 if ( sw  == 0 ) { cout << " Number " << i << " is prime "<<endl ;}
	}

}
