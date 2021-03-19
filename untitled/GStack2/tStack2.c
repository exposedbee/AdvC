//
// Created by saud1 on 02-10-2020.
//
#include <stdio.h>
#include "Stack2.h"

status main(){
    status st;
    int e1=2,e2=1;
    Stack * s=createStack(sizeof(int));
    if(!s)return ERRALLOC;
    st=push(s,&e1);
    if(st){

    }
    st=push(s,&e2);
    if(st){

    }
    int ele;
    top(s,&ele);
    printf("top=%d",ele);
    destroyStack(s);
}
