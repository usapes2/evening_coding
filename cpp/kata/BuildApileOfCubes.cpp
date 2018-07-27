#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include<string>

using namespace std;

long long findNb(long long m) {
	long long sum =0  ;
	long long lim = cbrt(m);
	long long flag = -1;

	for ( int i = 0 ; i < lim+1; i++ ) {
		sum += pow(i,3);
		if ( sum == m) flag = i;
	}	
	return flag;
}

int main() {

	long long sum =0  ;
	long long lim = 1025292944081377280;
	//cout << lim << endl;

	cout << findNb(lim);

		return 0;
}
