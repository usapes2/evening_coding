#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int die ( int d) ;
// returns a random number from 0 to d-1
void update (int *t, int d);
// updates the table t with the die value d

int main() {

	int n;
	cout << " Simulating the rolling of a die ...\n" ;
	cout << " give a positive integer : ";
	cin >> n;
	srand(time(0)); // set seed to time

	int freq[6] = { 0, 0, 0, 0, 0, 0};

	for (int i = 0; i < n ; i++ )  {
		int d = die(6); // calling a function to get a side for the die
		update(freq,d); // updating the frequency table 
	}
	cout << "\nFrequency Table"<< " of " << n << " times rolling a die: \n";

	for (int i = 0; i<6; i++) 
		cout << " #" << i << " : " << freq[i] << endl;
		
	

	return 0;
}

int die ( int d) {

	int roll = rand()%d;
	return roll;
}

void update (int* t, int d) {
	t[d] = t[d] + 1;
}

