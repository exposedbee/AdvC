//
// Created by saud1 on 12-09-2020.
//

#include <stdio.h>
#include <malloc.h>
#include "IntArray.h"

int *createArray(int size) {
    int i;
    int * p= (int *)malloc(size*sizeof(int));
    if(!p)return 0;
    for (i =0;i<size;i++){
        p[i]=0;
    }
    return p;
}
void destroyArray(int * p,int size){
//    if(!p)return 0;
    int i;
    for (i =0;i<size;i++){
        p[i]=0;
    }
    free(p);
    p=0;
//    printf("in destroy :%p \n",p);
}
void displayArray(int ** p,int size){
    int i;
    printf("Array elements are:[ ");
    for (i =0;i<size;i++){
        printf("%d ",p[i]);
    }
    printf("]\n");
}

void sortArray(int *p,int size){
    int i,j;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(p[i]>p[j]){
                int temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
}