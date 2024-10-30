#ifndef _WRITE_STATE_H
#define _WRITE_STATE_H

#include "stack.h"
#include "file.h"

enum StateWrite {
  NONE,
  TAG,
  CONTENT
};

extern enum StateWrite STATE_WRITE;

int stateMachineWrite(struct File file, struct Stack stack);

int writeTag(struct File file, struct Stack stack);

int writeContent(struct File file, struct Stack stack);

#endif