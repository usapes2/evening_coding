
/* Calling time with 0 return the date and time in seconds.
 *
 * Applying asctime on this value returns the string we see
 * when we type date at the command prompt on a Unix like OS.
 * The function gmtime Greenwich Mean time breaks this number returned by time into a
 * structure with useful values.
 * To see the local time, we call localtime.
 *
 * The purpose of this program is to provide a motivation for a class to encapsulate 
 * technical c code */
#include<ctime>
#include<iostream>
#include<iomanip>
#include <string>

using namespace std;

int main () {
	long int now = time(0) ; // current time

	//cout << now ;

	string s = asctime(localtime(&now));
	//cout << "\n"<<s;

	struct tm *tm_ptr;
	tm_ptr = localtime(&now);

	//cout << "the raw time is " << now << endl; 
	//cout << setfill('0');

		cout <<"the current time is " << setw(3)<< 1900 + tm_ptr -> tm_year <<  " | " 
		<< setw(3)<< 1+ tm_ptr -> tm_mon << " | " <<
	       setw(3)<< tm_ptr -> tm_mday << "." << endl;

	//cout << "\n\n\n\n" << 1900+tm_ptr -> tm_year;

	// tm_ptr = gmtime(&now); // reenwich Mean time
	return 0;
}
