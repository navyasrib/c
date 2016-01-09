#include <stdio.h>
#include "queue_list.h"

int main() {
	List list_of_elements;
	initialize(&list_of_elements);
	
	enqueue(&list_of_elements, 10);
	enqueue(&list_of_elements, 20);
	enqueue(&list_of_elements, 340);
	enqueue(&list_of_elements, 56);
	enqueue(&list_of_elements, 23);

	// print_list(list_of_elements);

	printf("%d\n",dequeue(&list_of_elements));
	printf("%d\n",dequeue(&list_of_elements));
	printf("%d\n",dequeue(&list_of_elements));
	printf("%d\n",dequeue(&list_of_elements));

	printf("%d\n",list_of_elements.length);

	return 0;
};