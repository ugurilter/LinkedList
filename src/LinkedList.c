#include <stdlib.h>
#include <stdio.h>
#include "LinkedList.h"


LINKED_LIST_NODE node_init(){
	LINKED_LIST_NODE new;
	new = (LINKED_LIST_NODE) malloc(sizeof(LINKED_LIST_NODE_t));
	new -> next = NULL;
	return new;
}

LINKED_LIST linked_list_init(){
	LINKED_LIST list;
	list = (LINKED_LIST) malloc(sizeof(LINKED_LIST_t));
	list -> head = NULL;
	return list;
}

void orderedInsertion(LINKED_LIST list, void *data){
	LINKED_LIST_NODE new = node_init();
	LINKED_LIST_NODE current;

	new -> data = data;

	// Liste boşsa ya da yeni data < head data.
	if((list -> head == NULL) || (compareData(list->head->data, new->data) >= 0)){
		new->next = list->head;
		list->head = new;
	}
	else {
		current = list->head;
		while(current -> next != NULL && (compareData(current -> next -> data, new -> data) < 0)){
			current = current -> next;
		}
		new -> next = current -> next;
		current -> next = new;
	}

}

void print_list(LINKED_LIST list){
	LINKED_LIST_NODE nNode;

	nNode = list -> head;

	while(nNode != NULL){
		printf("%d - ", *((int *)nNode -> data));
		nNode = nNode -> next;
	}

}

int compareData(void *a, void *b){
	int res = *(int *)a - *(int *)b;
	return res;
}
