typedef struct list {
	struct element *first;
	struct element *stack_pointer;
	int length;
} List;

typedef struct element {
	int value;
	struct element *previous;
	struct element *next;
} Element;

void initialize(List *);

void push(List *, int);

void print_stack(List);

int pop(List *);

