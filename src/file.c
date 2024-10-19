#include "headers/file.h"
#include <stdio.h>
#include <stdlib.h>

int read_file(struct File file) {
  FILE *f = fopen(file.path, "r");

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