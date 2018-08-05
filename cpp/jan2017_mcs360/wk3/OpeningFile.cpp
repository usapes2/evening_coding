#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

using namespace std;

int main() {

	string input_file_name;
	cout << " Give name of input file : ";
	cin >>input_file_name;

	ifstream ins(input_file_name.c_str());
	assert(ins);
	return 0;
}
