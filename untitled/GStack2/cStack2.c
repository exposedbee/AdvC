//
// Created by saud1 on 02-10-2020.
//
#include "Stack2.h"
#include <string.h>
#include <malloc.h>

Stack * createStack(int eltSize){
    Stack *stack = (Stack *) malloc(sizeof(Stack));
    if (!stack) {
        return ERREMPTY;
    }
    stack->head=0;
    stack->available=0;
    stack->eltSize=eltSize;
    return stack;
}

status push(Stack *stack, void * ele){
    Box *temp;
    if(!stack->available)
        temp=(Box *)malloc(sizeof(Box)+stack->eltSize-1);
    else{
        temp=stack->available;
        stack->available=temp->next;
    }
    if(!temp)return ERRALLOC;

    memcpy(temp->value,ele,stack->eltSize);
    temp->next=stack->head;
    stack->head=temp;
    return OK;
}

status pop(Stack *stack){
    if(!stack->head) return ERREMPTY;
    Box *temp=stack->head;
    stack->head=temp->next;
    temp->next=stack->available;
    stack->available=temp;
    return OK;
}

status top(Stack *stack, void * res) {
    if(!stack->head)return ERREMPTY;
    memcpy(res,stack->head->value,stack->eltSize);
    return OK;
}

void destroyStack(Stack *stack){
    Box * temp;
    while(stack->head){
        temp=stack->head;
        stack->head=temp->next;
        free(temp);
    }
    while(stack->available){
        temp=stack->available;
        stack->available=temp->next;
        free(temp);
    }
    free(stack);
}

//status isEmpty(Stack *s){
//    if(!s->head)return ERREMPTY;
//    return OK;
//}