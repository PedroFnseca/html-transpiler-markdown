#include "headers/file.h"
#include "headers/stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_file(struct File file) {
  FILE *f = fopen(file.path, READ);

  if (f == NULL) {
    printf("Error: file not found %s\n", file.path);
    return 1;
  }

  while (!feof(f)) {
    char character = fgetc(f);

    if (character == EOF) break;

    push(file.content, character);
  }

  fclose(f);

  return 0;
}

int write_file(struct File file,  struct Stack *content) {
  FILE *f = fopen(file.path, WRITE);

  if (f == NULL) {
    printf("Error: file not found: %s\n", file.path);
    return 1;
  }

  struct Node *current = content->top;
  while (current != NULL) {
    fprintf(f, "%c", current->value);

    current = current->next;
  }

  fclose(f);

  return 0;
}