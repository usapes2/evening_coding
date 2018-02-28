/* Quicksort is a sorting algorithm that repeatedly partitions the input into low and high
 * parts (each part unsorted), and then recursively sorts each of those parts.
 * To partition the input, quicksort chooses a pivot to devide the data into low and high parts.
 * The pivot can be any value within the array being sorted, commonly the value of the middle array element.
 * Ex list { 1 2 3 4 5 }, the middle element is located at index 2( the middle of 0 .. 4) has a value of 3. */

/* To partition the input, the quicksort divides the array into two parts, referred to as the low partition and
 * the high partition. All values in the low partition are less than or equal to the pivot value. All values in 
 * the high partiiton are greater than or equal to the pivot value. The values in each partition are not 
 * necessarily sorted. 0 34 25 1 } with a pivot value of 34 results in a low partition of { 4 10 1
 * Values equal to the pivot may appear in either side or both of the partitions.
 */

#include <iostream>
using namespace std;

int Partition( int numbers[], int i, int k) {
	int l = 0;
	int h = 0;
	int midpoint = 0;
	int pivot = 0;
	int temp = 0;
	bool done = false;

	// Get middle element as pivot
	midpoint = i + ( k - i ) /2;
	pivot = numbers[midpoint];

	l = i;
	h = k;

	while (!done) {
		// Increment l while numbers[l] < pivot
		while ( numbers[l] < pivot ) {
			++l;
		}
		while ( pivot < numbers[h] ) {
			--h;
		}

		if ( l >= h) {
			done = true;
		}
		else {// swap elements
			temp = numbers[l];
			numbers[l] = numbers[h];
			numbers[h] = temp;
			++l;
			--h;

		}
			
	}
	return h;
}

void Quicksort( int numbers[],int i, int k){

	int j = 0;
	/* Base case : If there are 1 or 0 elements to sort ,
	 * partition is already sorted*/
	if (i >= k) {
		return;
	}
	/* Partition the data within the array. Value j returned from the partition is
	 * the location of last element in low partition */
	j = Partition(numbers,i,k);
	
	/*recursively sort low partition (i to j) and
	 * high partition (j+1 to k) */
	Quicksort (numbers, i,j);
	Quicksort (numbers, j+1,k);

	return;
}

int main() {

	int numbers[] = { 10,100,3,2,1,0,8,300,-1,-100};
	const int NUMBERS_SIZE = 8;
        int i = 0;
	cout << "UNSORTED: \n";
		for (i = 0; i < NUMBERS_SIZE ; ++i){
			cout <<numbers[i] << " ";
		}
	cout<< endl;
	//Initial call to quicksort
	Quicksort(numbers,0,NUMBERS_SIZE -1);

	cout << "SORTED: \n";
		for (i = 0; i < NUMBERS_SIZE ; ++i){
			cout <<numbers[i] << " ";
		}
	cout<< endl;
	
	return 0;
}
