
#include<iostream>
#include<string>

using namespace std;
int main() {
	const string hello="hello"; // Valid
	const string message="hell" + "1" + "2";// wierd error

	return 0;
}
