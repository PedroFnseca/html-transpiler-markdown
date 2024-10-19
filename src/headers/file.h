#ifndef _FILE_H_
#define _FILE_H_

struct File {
  char *content;
  char *path;
};

int read_file(struct File file);

#endif