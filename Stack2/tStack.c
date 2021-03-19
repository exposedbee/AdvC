//
// Created by saud1 on 12-09-2020.
#include "lStack.h"
//TODO://try to debug
int main(){
    Stack * s;
    int max,i;

    s=createStack(0);
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

