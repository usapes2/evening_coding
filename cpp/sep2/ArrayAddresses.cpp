
#include <iostream>
using namespace std;

typedef struct {
	int i;
	int j;
	int k;
} ThreeDpoint;

int main () {

	ThreeDpoint a[10];
	for (int i = 0 ; i < 10 ; i++ ) {
		a[i].i = i;
		a[i].j = i+1;
		a[i].k = i+2;
	}
	
	for (int i = 0 ; i < 10 ; i++ ) {
		cout << " ------------------- " << endl;
		cout << a[i].i << " "<< a[i].j << " " << a[i].k <<" " <<endl;
		cout << " ------------------- " << endl;
	}
	return 0;
}
