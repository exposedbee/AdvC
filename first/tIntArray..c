
//
// Created by saud1 on 12-09-2020.
//
#include <stdio.h>
#include "IntArray.h"

int main(){
    int asize,i;
    int * a;
    printf("Array size?:");
    scanf("%d",&asize);
    a=createArray(asize);
    if(!a)return 1;
    for(i=0;i<asize;i++){
        printf("Element %d",i+1);
        scanf("%d",a+i);
        //or scand("%d"&a[i]);
    }
//    printf("%d",a[1]);
    sortArray(a,asize);
    displayArray(a,asize);
    destroyArray(&a,asize);
    if(a){
        printf("%d",a);
        printf("Warning a not null");
        return 2;
    }
    return 0;
}
