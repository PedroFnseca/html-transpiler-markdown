#include "headers/tag.h"
#include <string.h>

int is_initial_tag(char *string) {
  // "<[^>]+>"

  if (string[0] != '<') return 0;

  if (string[1] == '/') return 0;

  if (string[strlen(string) - 1] != '>') return 0;

  return 1; 
}

int is_final_tag(char *string) {
  // "</[^>]+>"

  if (string[0] != '<') return 0;

  if (string[1] != '/') return 0;

  if (string[strlen(string) - 1] != '>') return 0;

  return 1;
}