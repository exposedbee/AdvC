//
// Created by saud1 on 19-09-2020.
//

#ifndef UNTITLED_GSTACK_H
#define UNTITLED_GSTACK_H
#include "../errrorhandeling/status.h"
typedef struct Box {
    void * value;
    struct Box *next;
} Box, * Stack;
Stack *createStack( int capacity);

void destroyStack(Stack *stack);

status push(Stack *stack, void * ele);

status pop(Stack *stack);

status top(Stack *stack, void * res);

int isEmpty(Stack *s);
#endif //UNTITLED_GSTACK_H
