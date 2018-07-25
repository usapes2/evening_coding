#include <iostream>
#include <vector>
using namespace std;

int main () {
	int n ;
	cout << " enter number of rows " << endl;
	cin >> n;

	int q ;
	cout << " enter number of querries " << endl;
	cin >> q;

	
	vector<int*> v;
	for ( int i = 0 ; i < n ; i ++ )  {
		cout << " Enter K " << endl;
		int k ;
		cin >> k;
		v.push_back(new int[k+1]); 
		v[i][0] = k;
		cout << " Enter array "<< endl;
		for ( int j = 1 ; j < k + 1; j ++ ) {
			cin >> v[i][j];
		}
	}

	for ( int i = 0 ; i < n ; i ++ )  {
		for (int j = 0 ; j < v[i][0] + 1 ; j ++ ) {
		cout << v[i][j] <<" " ; }
		cout << "\n";
	}

return 0;
}
