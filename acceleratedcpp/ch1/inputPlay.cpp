

#include<iostream>
#include<string>
#include<limits>
using namespace std;
#undef max

int main() {
	
		
	cout<<"What is your name?";
	std::string name;

	std::cin>>name;

	std::cout<<"Hello,"<<name<<std::endl<<"And what is yours?";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
//	while ( std::cin.get() != '\n') {
//	continue ;	 }

	std::cin>>name;
	std::cout<<"Hello,"<<name<<";mice to meet you too!"<<std::endl;

	return 0;
}
