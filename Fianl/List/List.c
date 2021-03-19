//
// Created by saud1 on 03-10-2020.
//

#include <stdio.h>
#include "List.h"

List*	newList	(compFun comp,prFun pr){
    List * l=(List *)malloc(sizeof( List));
    if(!l)return 0;
    l->head=0;
    l->nelts=0;
    l->comp=comp;
    l->pr=pr;
    return l;
}

void 	delList	(List* l){
    Node * temp;
    while(l->head){
        temp=l->head;
        l->head=temp->next;
        free(temp);
    }
    free(l);
}

status 	nthInList	(List* l, int n, void* res){
    if(n>l->nelts)return ERRINDEX;

    Node * temp=l->head;
    while(n-->1){
        temp=temp->next;
    }

    *(void**)res=temp->val;
//    printf("%s",(char*)res);
    return OK;
}

status 	addListAt	(List* l, int n, void* e){

    if(l->nelts+1<n)return ERRINDEX;
    Node * tele=(Node *)malloc(sizeof(Node));
    if(!tele)return ERRALLOC;
    tele->val=e;
//
    Node * temp=l->head;
    int i=n;
    while(--i>1){
        temp=temp->next;


    }

    if(n==1) {
        l->head = tele;
        tele->next=temp;

    }
    else {

        tele->next=temp->next;
        temp->next=tele;


    }
    l->nelts++;
    return OK;
}

status 	remFromListAt	(List* l, int n, void* res){
    if(l->nelts<n)return ERRINDEX;
    Node * temp= l->head;
    if (n==1)
    {
        *(void**)res = temp->val;
        l->head = temp->next;
        free(temp);
    }
    else
        {
        while(--n>1){
            temp=temp->next;
        }
        Node * t=temp->next;
        *(void**)res=t->val;
        temp->next=t->next;
        free(t);
    }
    l->nelts--;
    return OK;

}
//NOTE:: to check this later
status 	remFromList	(List* l, void* e){
    if(!l->comp)return ERRUNABLE;
    int i;
    Node * temp=l->head;
    for(i=1;i<=l->nelts;i++){
        if(l->comp(temp->val,e)==0)
        {
            return remFromListAt(l,i,&e);
        }
        temp=temp->next;
    }
    return ERRABSENT;
}

status 	displayList	(List* l){
    int i;
    Node * temp=l->head;
    printf("\n");
    for(i=1;i<=l->nelts;i++){

        l->pr(temp->val);
        temp=temp->next;

    }
    return OK;
}

int	lengthList	(List* l){
    return l->nelts;
}

status	addList	(List* l, void* e){
    int i;
    Node *temp=l->head;
//    if(lengthList(l)==0) return addListAt(l,1,e);
    for(i=0;i<lengthList(l);i++)
    {
        int c;
        c=l->comp(temp->val,e);
        if(c>=0){
//            printf("\n");
//            return addListAt(l,i+1,e);
            break;
        }
        temp=temp->next;
    }
    return addListAt(l,i+1,e);
}

void	forEach		(List* l,void(*f)(void*)){
    int i;
    Node * temp=l->head;
    for(i=1;i<=l->nelts;i++){
        f(temp->val);
        temp=temp->next;
    }
}

Node* isInList(List *l, void * e) {
    if(!l->head)return 0;
    int i;
    Node *temp=l->head;
    if(l->comp(temp->val,e)==0) return (Node*)1;
    for (i=2;i<=l->nelts;i++){
//        printf("inside:%s \n",temp->val);
        if(l->comp(temp->next->val,e)==0) {
            return temp;
        }
        temp=temp->next;
    }
    return 0;
}

void* firstThat (List* l, int(*f)(void*)){
    int i;
    Node *temp=l->head;
    for(i=1;i<=lengthList(l);i++){
        if(f(temp->val)) return temp->val;
        temp=temp->next;
    }
    return 0;
}

List* allThat (List* l, int(*f)(void*)){
    int i;
    List * res=newList(l->comp,l->pr);
    Node *temp=l->head;
    for(i=1;i<=lengthList(l);i++){
        if(f(temp->val))  addList(res,temp->val);
        temp=temp->next;
    }
    return res;
}