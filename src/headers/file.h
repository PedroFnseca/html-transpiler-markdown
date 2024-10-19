#ifndef _FILE_H_
#define _FILE_H_

struct File {
  char *content;
  char *path;
};

#define READ "r"
#define WRITE "w"
#define APPEND "a"

int read_file(struct File file);

int write_file(struct File file, char *content);

#endif