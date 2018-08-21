//Program to count how many times each distinct word appears in its input

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main () {

	cout << " Type input " << endl;
	string s ;
	

	//Parse and store input in the map
	map<string,int> m;
	while(cin>>s) {
		map<string,int>::iterator it = m.find(s); // map lookup
		if ( it == m.end() ) { // s is not in a map so add it 
			m.insert(make_pair(s,1));
			cout << " new map element added " << endl;
		} else {it->second = it->second + 1; }
	}

	map<string,int>::iterator it = m.begin(); // map lookup
	for ( it=m.begin() ; it != m.end() ; it++ ) 
		cout << "key: "<< it->first <<" | value: " << it->second << endl; 
	
	return 0;
	

	
}
