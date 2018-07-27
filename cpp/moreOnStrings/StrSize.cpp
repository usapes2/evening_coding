#include<iostream>
#include<string>

using namespace std;

int main() {

	string BigNews("I saw John on TV9");
	cout << BigNews.size() << endl;
	cout << BigNews.length() << endl;
	cout << BigNews.capacity() << endl;
	
	BigNews.insert(0,"0");
	cout << "\n\n\n"; 
	cout << BigNews << endl;
	cout << BigNews.size() << endl;
	cout << BigNews.length() << endl;
	cout << BigNews.capacity() << endl;

	BigNews.reserve(500);
	cout << BigNews.capacity() << endl;
	BigNews.append("I've been working too hard.");
	cout << BigNews << endl;
	cout << BigNews.size() << endl;
	cout << BigNews.length() << endl;
	cout << BigNews.capacity() << endl;


	return 0;
}
