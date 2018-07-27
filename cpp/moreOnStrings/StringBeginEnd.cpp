#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	string s("Hello WorldxxxsacxxaxxxaXXXaaaaaxasdfxlkjxjxlx");
	cout << s << endl;
	cout << s.size() << endl;
	replace(s.begin(),s.end(),'x','0');
	cout << s << endl;
	cout << s.size() << endl;


	return 0;
}
