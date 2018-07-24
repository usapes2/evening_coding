
#include <iostream>
using namespace std;

void f() {
	static int i = 0;
	cout << " i = " << i++ << endl;

}

int main() {

	for ( int x = 0 ; x < 10 ; x++ )
		f();
	//cout << i << endl;
	
	return 0;

}
