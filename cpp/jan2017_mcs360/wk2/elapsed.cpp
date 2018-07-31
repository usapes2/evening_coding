
#include<ctime>
#include<iostream>
#include<iomanip>
#include <string>

using namespace std;

int main () {
	long int now = time(0) ; // current time

	struct tm *tm_ptr;
	tm_ptr = localtime(&now);

	int hours = tm_ptr ->tm_hour;
	int minutes = tm_ptr ->tm_min;
	int seconds = tm_ptr ->tm_sec;


	
	cout << hours << " " << minutes << " " << seconds<< " "<< endl;
	cout << " Press enter key twice " << endl;

	cin.ignore();
	cout << " And one more time " << endl;
	cin.ignore();

	now = time(0) ; // current time

	tm_ptr = localtime(&now);

	int hours1 = tm_ptr ->tm_hour;
	int minutes1 = tm_ptr ->tm_min;
	int seconds1 = tm_ptr ->tm_sec;


	

	cout << " Time elapsed Hours Minutes Seconds "	<< endl;
	cout << "H "<<hours1 - hours << " M " << minutes1 -minutes << " S " << seconds1 - seconds<< " "<< endl;
	return 0;
}
