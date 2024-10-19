#include "headers/stack.h"
#include <stdio.h>
#include <stdlib.h>

void push(struct Stack *stack, int value) {
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
  
  new_node->value = value;
  new_node->next = stack->top;
  
  stack->top = new_node;
  stack->size++;
}

struct Node pop(struct Stack *stack) {
  struct Node *node = stack->top;
  
  stack->top = stack->top->next;
  stack->size--;
  
  return *node;
}

void print_stack(struct Stack *stack) {
  struct Node *current = stack->top;
  
  while (current != NULL) {
    printf("%d\n", current->value);
    current = current->next;
  }
}