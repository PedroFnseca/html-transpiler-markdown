#include "headers/stack.h"
#include <stdio.h>
#include <stdlib.h>

void push(struct Stack *stack, char value) {
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
  
  free(node);
  return *node;
}

void print_stack(struct Stack *stack) {
  if (stack == NULL) {
    fprintf(stderr, "Error: Stack is NULL\n");
    return;
  }

  struct Node *current = stack->top;
  
  while (current != NULL) {
    printf("%c\n", current->value);
    current = current->next;
  }
}

void free_stack(struct Stack *stack) {
  struct Node *current = stack->top;
  
  while (current != NULL) {
    struct Node *next = current->next;
    free(current);
    current = next;
  }
  
  free(stack);
}

struct Stack *create_stack() {
  struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
  
  stack->top = NULL;
  stack->size = 0;
  
  return stack;
}