#include <iostream> 
#include <iomanip>

using namespace std;

int main () {
	double x = 1.2345e+9;
	cout << x <<endl;;
	cout << fixed << x << endl ;
	cout << fixed << setprecision(2) << x <<endl;
	cout << fixed << setprecision(4) << x <<endl;
	cout << " Example of Scientific notations " << endl;
	cout << scientific << setprecision(4) << x <<endl;
	cout << scientific << setprecision(2) << x <<endl;
	

	return 0;
}

