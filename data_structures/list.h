#include <stdlib.h>
#include <stdio.h>

typedef struct list {
	struct element * first;
	struct element * last;
	int length;
} List;

typedef struct element {
	int value;
	struct element * next;	
} Element;

void initialize(List *);

void push(List *, int);

void print_list(List);




