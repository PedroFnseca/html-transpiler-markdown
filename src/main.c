#include <stdio.h>
#include "headers/file.h"

int main() {
  struct File file = {
    .content = NULL,
    .path = "input/index.html"
  };

  if (write_file(file, "<h1>Hello, World!</h1>")) {
    return 1;
  }

  if (read_file(file)) {
    return 1;
  }

  return 0;
}