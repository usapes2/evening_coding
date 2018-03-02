// Merge sort is a sorting algorithm that divides a list into two halves,
// recursively sorts each half, and then merges the sorted halves to produce a
// sorted list. The recursive partitioning countinues until a list of 1 element
// is reached, as list of 1 element is already sorted.
/* Merge sort algortithm uses three index variables to keep track of the elements
 * to sort for each recursive function call. The indx variable i is the index of first
 * element in the list, and the index variable k is the index of the last element.
 * The index variable j is used to divide the list into two halves. Elements form 
 * i to j are in the left half, and elements from j+1 to k are in the right half. */


#include<iostream>
using namespace std;

void Merge(int numbers[], int i, int j, int k) {
	int mergedSize = k - i + 1; // Size of merged partition
	int mergePos = 0; 	    //Postition to insert merged number
	int leftPos = 0;   	    //Postition of elements in left partition
	int rightPos = 0; 	    //Postition of elements in right partition
	int* mergedNumbers = new int [mergedSize]; // Dynamically allocates temprary array

	leftPos = i;		    // Initialize left partition position
	rightPos = j+1;		    // Initialize right partition position

	//Add smallest element from left or right partition to merged numbers
	
	while (leftPos <= j && rightPos<= k) {
		if (numbers[leftPos] <numbers[rightPos]) {
				mergedNumbers[mergePos] = numbers[leftPos];
				++leftPos;
	}
		else { 

				mergedNumbers[mergePos] = numbers[rightPos];
				++rightPos;

	}
		mergePos++;
					}
	// If left partition is not empty, add remainig elements to merged numbers
	while ( leftPos <= j) {
		mergedNumbers[mergePos] = numbers[leftPos];
		++leftPos;
		++mergePos;
	}
	// If right partition is not empty, add remainig elements to merged numbers
	while ( rightPos <= k) {
		mergedNumbers[mergePos] = numbers[rightPos];
		++rightPos;
		++mergePos;
	}
	// Copy merged numbers back to numbers
	for ( mergePos = 0 ; mergePos < mergedSize; ++mergePos) {
		numbers[i+mergePos ] = mergedNumbers[mergePos];
	}	
	
}
	
void MergeSort (int numbers[], int i, int k) {
	int j = 0;
	
	if (i < k) {
		j = (i+k)/2; // Find the midpoint in the partition
	//Recursively sort left and right partitions
	
	MergeSort(numbers, i,j);
	MergeSort(numbers, j+1,k);

	// Merge left and right partition in sorted order
	Merge(numbers,i,j,k);
}

}

int main () {

	int numbers[] = { 1, 3, 100,-100, - 2, 0, 8, 19 };
	const int NUMBERS_SIZE = 8 ;
	int i = 0;

	cout << " UNSORTED " << endl;
	for (i = 0 ; i < NUMBERS_SIZE ; ++i) {
		cout << numbers[i] <<" ";
	}

	MergeSort(numbers,i, NUMBERS_SIZE -1 );

	cout << "\n SORTED " << endl;
	for (i = 0 ; i < NUMBERS_SIZE ; ++i) {
		cout << numbers[i] <<" ";
	}

return 0;
}
