

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void skipRestOfInput(FILE *stream)
{
	char restOfLine[256];
	int rolLength = sizeof(restOfLine) / sizeof(restOfLine[0]);

	fgets(restOfLine, rolLength, stream);
}

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
	LLKey Key;
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

//LLSearch: performs a linear search of the given linked-list, looking for the first
//node that contains a matching key. Returns a pointer to this node if found, otherwise NULL
//is returned.

LLNode *LLSearch ( LL *list, LLKey key)
{

	LLNode * ptr = (LLNode *)malloc(sizeof(LLNode));
	ptr = list -> Head;
	while ( ptr != NULL ) 
	{
		if (LLCompareKeys ( key , ptr -> Key) == 0){
			return ptr;
		}
		else ptr = ptr->Next;
	}


	//LLNode *ptr = LL->head;
	return NULL; // not found
}


int main (int argc, char *argv[]) 
{

	char netid[16];
	int mid, fnl;

	LL *list = LLCreate();
	LLNode *cur = NULL;
	scanf("%s %d %d", netid, &mid, &fnl);
	skipRestOfInput(stdin);


	while ( netid[0] != '#')
	{ STUDENT s;
		s.Netid = (char *)malloc((strlen(netid) +1) * sizeof(char));
		strcpy(s.Netid,netid);
		s.Midterm = mid;
		s.Final = fnl;

		LLNode *node;
		node =(LLNode *)malloc(sizeof(LLNode));
		node->Key = s.Netid;
		node->Value = s;
		node->Next = NULL;

		if (cur == NULL) // first node
		{ list -> Head = node;
			cur = node;
		}
		else 
		{
			cur->Next =node;
			cur = node;
		}
		list -> Count ++;
		scanf("%s %d %d", netid, &mid, &fnl);
		skipRestOfInput(stdin); 
	} 


	return 0;
}
