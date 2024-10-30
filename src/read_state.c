#include "headers/stack.h"
#include "headers/read_state.h"

enum State STATE_READ = NONE;

int stateMachineRead(struct Stack stack, char c) {
  //  STateManager
}

int checkOpenTag(struct Stack stack, char c) {
  // checkTag || checkCloseBar
  
  return 0;
}

int checkTag(struct Stack stack, char c) {
  // checkTitle || checkCloseOpen

  return 0;
}

int checkCloseBar(struct Stack stack, char c) {
  // checkTagEnd

  return 0;
}

int checkTitle(struct Stack stack, char c) {
  // checkCloseOpen

  return 0;
}

int checkCloseOpen(struct Stack stack, char c) {
  // checkContent

  return 0;
}

int checkContent(struct Stack stack, char c) {
  // checkContent || checkOpenTag

  return 0;
}

int checkTagEnd(struct Stack stack, char c) {
  // retorna para escrita

  return 0;
}