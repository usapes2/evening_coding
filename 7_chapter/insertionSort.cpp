#include<iostream>
using namespace std;

void InsertionSort( int numbers[], int numbersSize ) {
	int i = 0;
	int j = 0;
	int temp = 0;

	for ( i = 1; i< numbersSize; ++i) {

		j = i;
		while ( j > 0 and numbers[j] < numbers[j-1]) {
			//swap
			//

			temp = numbers[j];
			numbers[j] = numbers[j-1];
			numbers[j-1] = temp;
			--j;
		}
	}
}

int main () {

	int numbers[] = { 10, 2, 78, 45, 32, 7, 11, 4} ;
	const int NUMBERS_SIZE = 8;
	int i = 0;

	cout <<" unsorted"<<endl;
	for ( i = 0 ; i < NUMBERS_SIZE; ++i) {
		cout << numbers[i] <<' ' ;

	}

	InsertionSort(numbers,NUMBERS_SIZE);

	cout <<"\n sorted"<<endl;
	for ( i = 0 ; i < NUMBERS_SIZE; ++i) {
		cout << numbers[i] <<' ' ;

	}




	return 0;
}
