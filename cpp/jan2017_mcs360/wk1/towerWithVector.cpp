#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	vector<string> v;
	cout << " enter number of floors \n " ;
	int n;
	cin >> n;


	for ( int f = 0 ; f < n; f++ ) { // building strings for floors
		
		string s ="";
		int stars = f;
		int space = n - stars;
		
	
		for ( int j = 0 ; j < space-1 ; j++)
			s+=" ";
		for ( int i = 0 ; i < stars ; i++ )
			s+="*";
		s+="*";

		for ( int i = 0 ; i < stars ; i++ )
			s+="*";

		for ( int j = 0 ; j < space-1; j++)
			s+=" ";

		v.push_back(s);
		cout <<"Floor: "<< f<<" "<< s << endl;
	}
}

