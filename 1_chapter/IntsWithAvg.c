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

	for ( i = counter -1 ; -1 < i ; i-- ){
		printf("\n%d",arr[i]);

	}
		printf("\n%f",sum/counter); 

		return 0;
}
