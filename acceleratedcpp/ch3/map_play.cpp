
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	map<string,int> m;

	m["1"] = 111;
	m["2"] = 777;

	map<string,int>::iterator q = m.find("1"); // lookup

	if ( q == m.end() ) {
		cout << " entry not found " <<endl;
		m.insert(make_pair("new", 777));
		cout << " new pair "
		"created" << endl;

	} else 
		cout<< q->second << endl;



	return 0;
}
