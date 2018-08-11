



#include<iostream>
#include<string>
// To use std::numeric_limits<T> one need to include <limits>.
// the type passed to it need to be known and actually the type std::streamsize
// One should probably make sure that one's attempt to read something was actually successful and , if it was not, first clear() the stream's state.
#include<limits>

int main() {
	
		
	std::cout<<"What is your name?";
	std::string name;

	std::cin>>name;

	std::cout<<"Hello,"<<name<<std::endl<<"And what is yours?";
	// One solution to ignore buffer till the EOL
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	
	// Another solution to ignore buffer till the EOL
	//while ( std::cin.get() != '\n') {
//	continue ;	 }

	std::cin>>name;
	std::cout<<"Hello,"<<name<<"nice to meet you too!"<<std::endl;

	return 0;
}

/* Example of a check 
  int move2, size(3);
  while (!(std::cin>>move2) || move2 < 	1 || size < move2) {
  	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	std::cout < " invalid input ignored, please enter a valid move\n"; }
	std::cout << "move2=<<move2<<'\n';
	} */
