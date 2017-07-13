typedef struct LINKED_LIST_NODE_s *LINKED_LIST_NODE;
typedef struct LINKED_LIST_NODE_s{
	LINKED_LIST_NODE next;
	void *data;
} LINKED_LIST_NODE_t[1];

typedef struct LINKED_LIST_s{
	LINKED_LIST_NODE head;
} LINKED_LIST_t[1], *LINKED_LIST;

LINKED_LIST_NODE node_init();
LINKED_LIST linked_list_init();
void orderedInsertion(LINKED_LIST list, void *data);
void print_list(LINKED_LIST list);
int compareData(void *a, void *b);
