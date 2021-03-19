//
// Created by saud1 on 02-10-2020.
//
#include "../errrorhandeling/status.h"
#ifndef UNTITLED_STACK2_H
#define UNTITLED_STACK2_H
typedef struct  Box{
    struct Box * next;
    char value[1];
}Box;
typedef struct{
    Box *head;
    int eltSize;
    Box *available;
}Stack;
Stack * createStack(int eltSize);

void destroyStack(Stack *stack);

status push(Stack *stack, void * ele);

status pop(Stack *stack);

status top(Stack *stack, void * res);

status isEmpty(Stack *s);
#endif //UNTITLED_STACK2_H
