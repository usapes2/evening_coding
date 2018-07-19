#include <iostream>
using namespace std;

int main() {
	char c;
	unsigned char cu;
	int i;
	unsigned int iu;
	short int is;
	long int il;
	unsigned long int iul;
	unsigned long iull;
	float f;
	double d;
	long double ld;

	cout
		<< "\n char = "<< sizeof(c)
		<< "\n unsigned char = "<< sizeof(cu)
		<< "\n int = "<< sizeof(i)
		<< "\n unsigned int = "<< sizeof(iu)
		<< "\n short int = "<< sizeof(is)
		<< "\n long int = "<< sizeof(il)
		
		<< "\n unsigned long int = "<< sizeof(iul)
		<< "\n unsigned long = "<< sizeof(iull)
		<< "\n float = "<< sizeof(f)
		<< "\n double= "<< sizeof(d)
		<< "\n long double = "<< sizeof(ld);
	



	return 0;	
}
