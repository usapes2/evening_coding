

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// When searching a linked-list, we pass in the list and the key we are looking 
// for. If a node contaning this key found, the function returns a pointer to this
// LL node, which contains the matching (key,value) pair:

//LLNode* LLSearch(LL *list, LLKey key);
typedef struct STUDENT 
{
	char *Netid;
	int Midterm;
	int Final;
}STUDENT;

//we are going to stotre STUDENTs into a linked list, using their Netid as the key,
//and the "value" is a STUDENT.

typedef char* LLKey;
typedef STUDENT LLValue;

// A node in a singly linked-list is thus defined as a Key, Value and a Next pointer:

typedef struct LLNode 
{
	LLKey key;
	LLValue Value;
	struct LLNode *Next;
} LLNode;

/* Linked-list is defined as a struct containing 2 values: a pointer to the head of the list,
 * and a count of how many nodes are currently in the list:
 */

typedef struct LL
{
	LLNode *Head;
	int Count ;
} LL;

// LLCreate: dynamically creates and returns an empty linked-list:
//
LL *LLCreate() 
{
	LL *list;

	list = (LL *) malloc(sizeof(LL));
	list -> Head = NULL;
	list -> Count = 0;

	return list;
}

// LLCompareKeys: compares key1 and key2, reurning
// -1 if key1 < key2
// 0 if key1 == key2
// +1 if key1 > key2
int LLCompareKeys (LLKey key1, LLKey key2) 
{

// NOTE: w/ STUDENT's, keys are Netids, so use strcmp.
	if (strcmp(key1, key2) < 0 )
		return -1;
	else if (strcmp(key1, key2) == 0 )
		return 0;
	else 
		return +1;
}

int main () 
{
	return 0;
}
