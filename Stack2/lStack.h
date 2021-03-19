//
// Created by saud1 on 18-09-2020.
//

#ifndef STACKTEST_LSTACK_H
#define STACKTEST_LSTACK_H
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


#endif //STACKTEST_LSTACK_H
