/* Define a function that returns the start and begin index of a plateau in a given array.
 */

#include <iostream>
using namespace std;

int* f(int* a , int n) {
	int counter = 0;
	int * ptr = NULL ;

	for ( int i = 0 ; i <  n ; i ++ ) {
		int tcounter = 0;// counting how long the sequence is starting at the idx i
		int* tptr = NULL;
		int temp = 0;

		if ( a[i] == a[i+1] ) {
			tcounter++;
			tptr = &a[i];
			for (int j = i+1 ; j < n ; j ++ ) {
				temp = j;
				if ( a[j] != a[j+1] ) break;
				tcounter++;
			}
		}
		if ( tcounter > counter ) { counter = tcounter; ptr = tptr; i = temp; }	

	}
	

	return  ptr;
}

int f1(int* a , int n) {
	int counter = 0;
	int idx = 0 ;
	int * ptr = NULL ;

	for ( int i = 0 ; i <  n ; i ++ ) {
		int tcounter = 0;// counting how long the sequence is starting at the idx i
		int* tptr = NULL;
		int temp = 0;

		if ( a[i] == a[i+1] ) {
			tcounter++;
			tptr = &a[i];
			for (int j = i+1 ; j < n ; j ++ ) {
				temp = j;
				if ( a[j] != a[j+1] ) break;
				tcounter++;
			}
		}
		if ( tcounter > counter ) { counter = tcounter; ptr = tptr; idx = i; i = temp;  }	

	}
	

	return  idx;
}

int main () {

	int a[15] = { 0 , 1 ,2 ,3 ,4 ,4 ,1 ,5 ,5 ,5 ,5 ,5 ,0, 0 ,100 };
	/*	
	int *ptr = f ( a,15);
	cout << *ptr << endl;
	cout << *(ptr--) << endl;
	cout << *(ptr++) << endl;
*/
	int m = f1(a,15);
	cout << m << endl;
	return 0;
}
