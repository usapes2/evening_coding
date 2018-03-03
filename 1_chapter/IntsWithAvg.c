/* C program that inputs integers into an array, prints them out in reverse order
 * 1 per line, followed by the average on the last line*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {

	int x;
	int i = 0;
	int arr[100];
	float sum = 0;
	int counter = 0;
	for (i = 0 ; i< 100 ; i++ ){
		scanf("%d", &x);
		if ( x == -1) {
			break;
		}
		arr[i] = x;
		counter = counter +1;
		sum = sum +x;
		 

		}
	if ( counter > 1) {
	for ( i = counter -1 ; -1 < i ; i-- ){
		if ( i == counter -1 ) {
		printf("%d",arr[i]); }
		else { 
		printf("\n%d",arr[i]); }
		

	}
		printf("%f\n",sum/counter);  }
	else { 
		printf("N/A \n",sum/counter);  }

		return 0;
}
