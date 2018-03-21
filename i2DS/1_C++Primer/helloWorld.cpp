#include <iostream>
#include <string>

using namespace std; // a collection of names or identifiers defined together.
// The c++ standard library is defined in namespace std.

int main()
{
	string name;
	
	cout << " Who is there ? " ; // insertion operator
	cin >> name; // >> is the extraction operator
	cout << " Hello " << name << "!" << endl;

	return 0;
}
