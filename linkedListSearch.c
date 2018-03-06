
// When searching a linked-list, we pass in the list and the key we are looking 
// for. If a node contaning this key found, the function returns a pointer to this
// LL node, which contains the matching (key,value) pair:

LLNode* LLSearch(LL *list, LLKey key);
typedef struct Student 
{
	char *Netid;
	int Midterm;
	int Final;
}Student;

//we are going to stotre STUDENTs into a linked list, using their Netid as the key,
//and the "value" is a STUDENT.

typedef char* LLkey;
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
