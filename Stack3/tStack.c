//
// Created by saud1 on 12-09-2020.
#include <stdio.h>
#include "lStack.h"

int main(){

    int max=10,i;
    int capacity=10;
    Stack *s=createStack(capacity);
    if(!s)return 1;
    if(!isempty(s))return 2;
    for(i=0;i<max;i++)
        push(s,i);
    if(isempty(s))return 3;
    while (!isempty(s)){
        printf("%d\n",top(s));
        pop(s);
    }
    destroyStack(s);
    return 0;
}

