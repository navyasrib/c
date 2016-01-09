#include <stdio.h>
#include "stack_list.h"

int main() {
	List list;
	initialize(&list);
	
	push(&list, 10);
	push(&list, 23);
	// push(&list, 35);
	// push(&list, 45);
	// push(&list, 69);

	print_stack(list);

	printf("length of stack %d\n",list.length);

	printf("popped element %d\n",pop(&list));
	
	printf("length of stack after pop %d\n",list.length);

	print_stack(list);

	
	return 0;
};