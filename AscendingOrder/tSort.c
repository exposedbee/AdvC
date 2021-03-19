//
// Created by saud1 on 18-09-2020.
//
#include <mem.h>
#include <stdio.h>
#include "gSort.h"

#define MAXLEN 30
typedef struct{
    char name[1+MAXLEN];
    int number;
}Id;

Id a[]={{"Gus",31},
      {"Jack",22},
      {"Gustuss",41},
      {"Lucifer",13}};
int compNames(void * p1,void * p2){
    Id * i1=(int*)p1;
    Id * i2=(int*)p2;
    return strcmp(i1->name,i2->name);
}

int compNumbers(void * p1,void * p2){
    Id * i1=(int*)p1;
    Id * i2=(int*)p2;
    return i1->number-i2->number;
}

void displayIdArray(Id* a,int size){
    int i;
    for(i=0;i<size;i++){
        printf("%s :%d\n",a[i].name,a[i].number);
    }
}

void main(){
    gsort(a,sizeof(a)/sizeof(Id),sizeof(Id),compNames);
    displayIdArray(a,sizeof(a)/sizeof(Id));

}