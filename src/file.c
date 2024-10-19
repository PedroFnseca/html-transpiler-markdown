#include "headers/file.h"
#include <stdio.h>
#include <stdlib.h>

int read_file(struct File file) {
  FILE *f = fopen(file.path, READ);

  if (f == NULL) {
    printf("Error: file not found\n");
    return 1;
  }

  while (!feof(f)) {
    char character = fgetc(f);

    printf("%c", character);

    file.content += character;
  }

  fclose(f);

  return 0;
}

int write_file(struct File file, char *content) {
  FILE *f = fopen(file.path, WRITE);

  if (f == NULL) {
    printf("Error: file not found\n");
    return 1;
  }

  fprintf(f, "%s", content);

  fclose(f);

  return 0;
}