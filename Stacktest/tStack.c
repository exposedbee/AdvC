//
// Created by saud1 on 12-09-2020.
//
#include <stdio.h>
#include "Stack.h"

int main(){
    Stack * s;
    int max,i;
    printf("Stack size?:");
    scanf("%d",&max);
    s=createStack(max);
    if(!s)return 1;
    if(isempty(s))return 2;
    for(i=0;i<max;i++)
        push(s,i);
    if(!isempty(s))return 3;
    while (isempty(s)){
        printf("%d\n",top(s));
        pop(s);
    }
    destroyStack(s);
    return 0;
}

