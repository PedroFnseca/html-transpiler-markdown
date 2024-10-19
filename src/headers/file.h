#ifndef _FILE_H_
#define _FILE_H_
#include "stack.h"

struct File {
  struct Stack *content;
  char *path;
};

#define READ "r"
#define WRITE "w"
#define APPEND "a"

int read_file(struct File file);

int write_file(struct File file, struct Stack *content);

#endif