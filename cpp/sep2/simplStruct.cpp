
#include <iostream>
using namespace std;

struct Struct1 {
	char c;
	int i;
	float f;
	double d;
};

typedef struct SelfRef {
	SelfRef* pt ;
	int i;
} SelfRef;

int main() {
	Struct1 s;
	s.c = 'a';
	s.i = 3;
	s.f = 0.3333;
	s.d = 0.0000001;

	cout << s.c << endl;

	SelfRef obj1;
	obj1.pt = &obj1;
	obj1.i = 99;
	//cout<< (long) obj1.pt << endl;
	//cout<< (long) &obj1 << endl;
	cout<<  obj1.pt->i << endl;
	
	


	return 0;
}
