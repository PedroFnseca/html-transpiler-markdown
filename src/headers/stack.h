#ifndef _STACK_H_
#define _STACK_H_

struct Node {
  char *value;
  struct Node *next;
};

struct Stack {
  struct Node *top;
  int size;
};

void push(struct Stack *stack, char *value);

struct Node pop(struct Stack *stack);

void print_stack(struct Stack *stack);

void free_stack(struct Stack *stack);

struct Stack *create_stack();

#endif