#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void initialize(List *list) {
	list->first = list->last = NULL;
	list->length = 0;
};

void push(List * list, int value) {
	Element *ptr = (Element *) malloc(sizeof(Element));
	ptr->value = value;
	ptr->next = NULL;
	if(list->length == 0)
		list->first = list->last = ptr;
	else
		list->last = list->last->next = ptr;
	list->length++;
};

void print_list(List list) {
	Element *value = list.first;
	while(value != NULL) {
		printf("%d\n",value->value);
		value = value->next;
	};
};

