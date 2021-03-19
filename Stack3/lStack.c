#include <malloc.h>
#include "lStack.h"

Stack * createStack(int capacity){
    Stack * res=(Stack *) malloc (sizeof(Stack));
    if(!res) return 0;
    * res = 0;
    return res;
}

int isempty(Stack * s){
//    if(*s==0)return 0;
//    return 1;
    return !*s;
}

void push(Stack * s,int val){
    Box * temp=(Box *) malloc (sizeof(Box));
//    Stack temp=(Stack *) malloc (sizeof( Box));
    temp->ele=val;
    temp->next=*s;
    *s=temp;
}

int top(Stack * s){
    return (*s)->ele;
}

void pop(Stack * s){
    Stack temp;
    temp=*s;
    *s=(*s)->next;
    free(temp);
}

void destroyStack(Stack * s){
    while(!isempty(s))
    {
        pop(s);
    }
    free(s);
}