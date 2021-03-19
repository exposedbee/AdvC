//
// Created by saud1 on 12-09-2020.
#include <stdio.h>
#include <malloc.h>
#include "Stack.h"

Stack * createStack(int capacity){
    Stack * res=(Stack *)malloc(sizeof(Stack));
    if(!res)return 0;
    res->array=(int *)malloc(sizeof(Stack));
    if(!res->array){
        free(res);
        return 0;
    }
    res->top=-1;
    res->capacity=capacity;
    return res;
}

void destroyStack(Stack * s){
    free(s->array);
    free(s);
}
int isempty(Stack * s){
    if(s->top==-1)return 0;
    return 1;
}
void push(Stack * s,int val){
    s->array[++(s->top)]=val;
}

void pop(Stack * s){
    s->top--;
}
int top(Stack * s){
    return s->array[s->top];
}
//

