#ifndef LL_h
#define LL_h

struct Node {
	int item;
	struct Node* next;
};

typedef struct Node node;

struct List {
	node* head;
	node* tail;
};

typedef struct List LL;

void constructLL(LL* list);
void destructLL(LL* list);
void printLL(LL* list);
void countLL(LL* list);
void addRearLL(LL* list, int toAdd);
void addFrontLL(LL* list, int toAdd);
void deleteLL(LL* list, int toDelete);
void copyLL(LL* list, LL* other);

#endif