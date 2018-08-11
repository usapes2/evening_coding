



#include<iostream>
#include<string>

int main() {
	
		
	std::cout<<"What is your name?";
	std::string name;

	std::cin>>name;

	std::cout<<"Hello,"<<name<<std::endl<<"And what is yours?";
	//std::cin.ingore(std::numeric_limits<std::streamsize>::max(),'\n');
	
	while ( std::cin.get() != '\n') {
	continue ;	 }

	std::cin>>name;
	std::cout<<"Hello,"<<name<<";mice to meet you too!"<<std::endl;

	return 0;
}
