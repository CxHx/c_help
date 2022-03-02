#include <stdio.h>
#include <stdlib.h>
#include "LL.h"

int main(void) {
	LL* list;
	constructLL(list);
	addFrontLL(list, 2);
	//printLL(list);
	destructLL(list);
	return 0;
}

void constructLL(LL* list) {
	list = malloc(sizeof(LL));
	node* newHead = (node*)malloc(sizeof(node));
	node* newTail = (node*)malloc(sizeof(node));
	newHead->item = 0;
	newTail->item = 0;
	newTail->next = NULL;
	newHead->next = newTail;
	list->head = newHead;
	list->tail = newTail;
}

void destructLL(LL* list) {
	free(list);
}

void printLL(LL* list) {
	node* p = list->head;
	while (p != NULL) {
		printf("Node [%d]", p->item);
		p = p->next;
	}
}

void addFrontLL(LL* list, int number) {
	node* newNode = (node*)malloc(sizeof(node));
	newNode->item = number;
	newNode->next = list->head->next;
	list->head->next = newNode;
}