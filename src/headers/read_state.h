#ifndef _READ_STATE_H_
#define _READ_STATE_H_

#include "stack.h"

enum State {
  NONE,
  OPEN_TAG,
  TAG,
  CLOSE_BAR,
  TITLE,
  CLOSE_OPEN,
  CONTENT,
  TAG_END,
};

extern enum State STATE_READ;

int stateMachineRead(struct Stack stack, char c);

int checkOpenTag(struct Stack stack, char c);

int checkTag(struct Stack stack, char c);

int checkCloseBar(struct Stack stack, char c);

int checkTitle(struct Stack stack, char c);

int checkCloseOpen(struct Stack stack, char c);

int checkContent(struct Stack stack, char c);

int checkTagEnd(struct Stack stack, char c);

#endif