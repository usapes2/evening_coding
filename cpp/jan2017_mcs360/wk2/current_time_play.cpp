    
#include<ctime>
#include<iostream>
#include<iomanip>
#include <string>

using namespace std;

int main () {
	long int now = time(0) ; // current time


	string s = asctime(localtime(&now));

	struct tm *tm_ptr;
	tm_ptr = localtime(&now);

	cout << now;
	cout << setfill('0');
	cout << now;



	// tm_ptr = gmtime(&now); // reenwich Mean time
	return 0;
}
