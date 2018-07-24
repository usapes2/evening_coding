#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	int n;
	cout << " Simulating the rolling of a die ...\n" ;
	cout << " give a positive integer : ";
	cin >> n;
	srand(time(0)); // set seed to time

	int freq[6] = { 0, 0, 0, 0, 0, 0};

	for (int i = 0; i < n ; i++ )  {
		int d = rand()%6 ;
		freq[d] +=1;
	}
	cout << "\nFrequency Table"<< " of " << n << " times rolling a die: \n";

	for (int i = 0; i<6; i++) 
		cout << " #" << i << " : " << freq[i] << endl;
		
	

	return 0;
}
