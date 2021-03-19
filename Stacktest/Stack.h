//
// Created by saud1 on 12-09-2020.
//

#ifndef STACKTEST_STACK_H
#define STACKTEST_STACK_H
typedef struct{
    int * array;
    int capacity;
    int top;
}Stack;
Stack * createStack(int capacity);
void destroyStack(Stack * s);
void push(Stack * s, int val);
void pop(Stack * s);
int top(Stack * s);
int isempty(Stack * s);

#endif //STACKTEST_STACK_H
