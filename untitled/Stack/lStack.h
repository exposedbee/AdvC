

#ifndef UNTITLED_LSTACK_H
#define UNTITLED_LSTACK_H
#include "../errrorhandeling/status.h"

typedef struct Box {
    int value;
    struct Box *next;
} Box, * Stack;

Stack *createStack( int capacity);

void destroyStack(Stack *stack);

status push(Stack *stack, int element);

status pop(Stack *stack);

status top(Stack *stack, void * result);

int isEmpty(Stack *s);

#endif //UNTITLED_LSTACK_H
