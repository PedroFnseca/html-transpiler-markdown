#include "headers/file.h"
#include "headers/stack.h"
#include "headers/tag.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int read_file(struct File file) {
  FILE *f = fopen(file.path, READ);

  if (f == NULL) {
    printf("Error: file not found %s\n", file.path);
    return 1;
  }

  char *string;
  while (!feof(f)) {
    char character = fgetc(f);

    if (character == EOF) break;

    size_t len = strlen(string);
    char *new_string = (char *)realloc(string, len + 2);

    string = new_string;
    string[len] = character;
    string[len + 1] = '\0';

    // printf("%s\n", string);

    if (is_initial_tag(string) || is_final_tag(string)) {
      push(file.content, string);

      free(string);
      string = (char *)malloc(1);

      string[0] = '\0';
    }
  }

  fclose(f);
  free(string);

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
    fprintf(f, "%s", current->value);

    current = current->next;
  }

  fclose(f);

  return 0;
}