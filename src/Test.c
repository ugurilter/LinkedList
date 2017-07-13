#include <stdlib.h>
#include <stdio.h>
#include "LinkedList.h"

int main(){

	LINKED_LIST list = (LINKED_LIST) linked_list_init();

	while(1){
		int *num = malloc(sizeof(int));

		scanf("%d", num);

		if(*(int *)num != 0) orderedInsertion(list, num);
		else break;
	}

	print_list(list);

	return 0;
}
