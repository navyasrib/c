#include <stdio.h>
#include <stdlib.h>
#include "stack_list.h"

void initialize(List *list) {
	list->first = list->stack_pointer = NULL;
	list->length = 0;
};

void push(List *list, int value) {
	Element *e = (Element *) malloc(sizeof(Element));
	e->value = value;
	e->next = NULL;
	if(list->length == 0){
		e->previous = NULL;
		list->first = list->stack_pointer = e;
	}
	else{
		e->previous = list->stack_pointer;
		list->stack_pointer = list->stack_pointer->next = e;
	}
	list->length++;
};

int pop(List *list) {
	if(list->length == 0)
		return -55555;
	Element *e = list->stack_pointer;
	int value = e->value;
	if(e->previous == NULL)
		return -99999;
	list->stack_pointer = e->previous;
	list->stack_pointer->next = NULL;
	list->length--;
	free(e);
	return e->value;
};


void print_stack(List list) {
	Element *e = list.stack_pointer;
	while(e != NULL) {
		printf("%d\n", e->value);
		e = e->previous;
	}

};

