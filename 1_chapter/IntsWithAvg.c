#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

	int x;
	int i = 0;
	int arr[100];
	int sum = 0;
	int counter = 0;
	for (i = 0 ; i< 3 ; i++ ){
	scanf("%d", &x);
	arr[i] = x;

	}

	for ( i = 0 ; i< 3 ; i++ ){
		printf("\n%d",arr[i]);
	}

		return 0;
}
