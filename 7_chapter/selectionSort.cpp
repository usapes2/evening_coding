#include <iostream>
using namespace std;


void SelectionSort(int numbers[], int numbersSize) {

	int i = 0;
	int j = 0;
	int indexSmallest = 0;
	int temp = 0;

	for( i = 0; i < numbersSize; ++i ) {

		indexSmallest = i;
		
	for ( j = i+1; j < numbersSize ; ++j ) {

		if ( numbers[indexSmallest] > numbers[j]) {
			indexSmallest = j;
		}
	}


	temp = numbers[i];
	numbers[i] = numbers[indexSmallest];
	numbers[indexSmallest] = temp;	

	}


}

int main(){

	int numbers[] = { 10, 2, 78, 45, 32, 7,11,4} ;
	const int NUMBERS_SIZE = 8;
	int i = 0;

	cout <<" unsorted"<<endl;
	for ( i = 0 ; i < NUMBERS_SIZE; ++i) {
		cout << numbers[i] <<' ' ;

	}

	SelectionSort(numbers,NUMBERS_SIZE);

	cout <<" sorted"<<endl;
	for ( i = 0 ; i < NUMBERS_SIZE; ++i) {
		cout << numbers[i] <<' ' ;

	}


	return 0;
	}
