#ifndef _STACK_H_
#define _STACK_H_

struct Node {
  int value;
  struct Node *next;
};

struct Stack {
  struct Node *top;
};

void push(struct Stack *stack, int value);

void pop(struct Stack *stack);

void print_stack(struct Stack *stack);

int peek(struct Stack *stack);

int is_empty(struct Stack *stack);


#endif