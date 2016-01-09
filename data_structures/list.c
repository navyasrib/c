#include <stdio.h>
#include "list.h"

int main() {
	List list_of_elements;
	initialize(&list_of_elements);
	
	push(&list_of_elements, 10);
	push(&list_of_elements, 20);
	push(&list_of_elements, 340);

	initialize(&list_of_elements);
	push(&list_of_elements, 56);
	push(&list_of_elements, 23);
	
	print_list(list_of_elements);
	printf("%d\n",list_of_elements.length);

	return 0;
};