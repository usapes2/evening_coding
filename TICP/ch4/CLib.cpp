#include "CLib.h"
#include <iostream>
#include<cassert>
using namespace std;

//Quantity of elements to add
// when increasing storage:

const int increment = 100 ;

void initialize(CStash* s, int sz) {
	s->size = sz;
	s->quantity = 0;
	s->storage =0;
	s->next =0;
}

int add(CStash* s, const void* element) {

	if (s->next >= s-> quantity) 
		inflate(s, increment);
	//Starting at next empty space:
	int startBytes = s->next*s->size;
	unsigned char* e = (unsigned char*) element;
	for (int i = 0 ; i < s->size; i++)
		s->storage[startBytes +i] = e[i];
	s->next++;
	return (s->next-1);// Index number
}
