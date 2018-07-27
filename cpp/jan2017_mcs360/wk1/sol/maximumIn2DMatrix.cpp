// wk1 L3 exercise 
/*
  Ask the user for the number of rows and col of a matrix.
  Generate a mx of random integer numbers in the range of 0 ..1000.
  Find the location ( row and col idx) of the largest element in the mx.
  */

#include<cstdlib>
#include<ctime>

#include<iostream>
#include<string>

using namespace std;
int main () {
	srand(time(0)); // set seed to time

	int col = 0; int row = 0;

	cout << "  give the number of raws ";
   	cin >> row;
	cout << " You entered " << row << endl;


	cout << "\n";

  	cout << "  give the number of raws ";
   	cin >> col;
	cout << " You entered " << col << endl;

	int mx[row][col];
	int max = 0;
		for ( int i = 0 ; i < row ; i++ ) {
			for ( int j =0 ; j < col ; j++) {
				mx[i][j] = rand() % 1001 ; 
				if (mx[i][j] > max) max = mx[i][j];	}}
		for ( int i = 0 ; i < row ; i++ ) {
			for ( int j =0 ; j < col ; j++)
				cout << mx[i][j] << " ";
			cout <<"\n"; }
		cout << " Maximum = " << max << endl;
  		return 0;
}
