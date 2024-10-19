#ifndef _STACK_H_
#define _STACK_H_

struct Node {
  int value;
  struct Node *next;
};

struct Stack {
  struct Node *top;
  int size;
};

void push(struct Stack *stack, int value);

struct Node pop(struct Stack *stack);

void print_stack(struct Stack *stack);

#endif