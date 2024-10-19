#include <stdio.h>
#include <stdlib.h>
#include "headers/file.h"
#include "headers/stack.h"

int main() {
  struct File html = {
    .content = create_stack(),
    .path = "data/index.html"
  };

  if (read_file(html)) {
    return 1;
  }

  print_stack(html.content);

  struct File markdown = {
    .content = create_stack(),
    .path = "data/index.md"
  };

  write_file(markdown, html.content);

  free_stack(html.content);

  return 0;
}