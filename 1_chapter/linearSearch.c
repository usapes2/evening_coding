
#include<stdio.h>
#include<stdbool.h>

int LinearSearch(int numbers[], int numbersSize, int key) {
	int i = 0;
	
	for (i = 0; i< numbersSize; ++i){
		if ( numbers[i] == key) {
			return i;
		}
	}
	return -1; // Not found


}
int main() 
{
	int numbers[] = { 2,4,-1,0,-10,3,8,100 };
	const int NUMBERS_SIZE = 8;
	int i = 0;
	int key = 100;
	int keyIndex = 0;

	printf("NUMBERS: ");

	for (i=0; i < NUMBERS_SIZE ; ++i){

		printf("%d ", numbers[i]);
	}

	keyIndex = LinearSearch( numbers,NUMBERS_SIZE, key);

	if ( key == -1 ) {
		printf( " %d is not found ", key) ;}

	else  printf ( " \nFound %d at position %d",key,keyIndex); 

	return 0;
}
