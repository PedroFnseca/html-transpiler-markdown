#include <stdio.h>
#include "headers/file.h"

int main() {
  struct File file = {
    .content = NULL,
    .path = "input/index.htmla"
  };

  if (read_file(file)) {
    return 1;
  }

  return 0;
}