
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void v_print(vector<string> v) ;


int main() {

	cout << " Type input " << endl;
	string s ;
	//Parse and store input in the map
	vector<string> v;
	while(cin>>s) {
		v.push_back(s);
	}

	typedef vector<string>::size_type vec_sz;
	vec_sz size = v.size();

	v_print(v);
	sort(v.begin(),v.end()); // sorting the strings
	cout << endl;
	v_print(v);

	int counter = 0;	
	int idx = 0;
	while (counter != size) { // counter is the current number of considered elmnts
		int curr = 1; // Number of elements considered in this iteration
		while( true ) {
			if ( v[idx] != v[size -1] && v[idx] == v[idx+1]  ) {
				idx++;
				curr++;
			} else{ cout <<"element: "<< v[idx] << "#reps: "<<curr<< endl; idx++;break;}
		}
		counter = counter + curr;
	}
	
	return 0; 
}

void v_print(vector<string> v) {
	for ( int i = 0 ; i < v.size() ; i ++ )
	       cout << v[i] << endl;	
}

