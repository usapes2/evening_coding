#include<iostream>
using namespace std;

int main () {

	double a[3][3]; // declaring a 3 by 3 matrix

	for (int i = 0; i < 3 ; i++ )
		for ( int j = 0; j < 3 ; j++)
			a[i][j] = (double) (i+j);

	for (int i = 0; i < 3 ; i++ )
	{
		for (int j = 0; j < 3 ; j++)
			cout << " " << a[i][j] ;
		cout << endl;
	}

	return 0;
}
