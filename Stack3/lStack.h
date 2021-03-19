//
// Created by saud1 on 18-09-2020.
//

#ifndef STACK3_LSTACK_H
#define STACK3_LSTACK_H
typedef struct Box{
    int ele;
    struct Box * next;
}Box , * Stack;

Stack * createStack(int capacity);
void destroyStack(Stack * s);
void push(Stack * s, int val);
void pop(Stack * s);
int top(Stack * s);
int isempty(Stack * s);

#endif //STACK3_LSTACK_H
