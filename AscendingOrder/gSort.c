#include <malloc.h>
#include <mem.h>
#include <stdio.h>
#include "gSort.h"

//
// Created by saud1 on 18-09-2020.
//
void gsort(void * a, int size,int eleSize, comparator cmp){
    int l,r, end=size*eleSize;
    void * temp=malloc(eleSize);
    for(l=0;l<end-eleSize;l+=eleSize) {
        for (r = l + eleSize; r < end; r += eleSize) {
            if (cmp(a + l, a + r) > 0) {
                memcpy(temp, a + l, eleSize);
                memcpy(a + l, a + r, eleSize);
                memcpy(a + r, temp, eleSize);
            }
        }
    }
    free(temp);
}

void displayArray(int ** p,int size){
    int i;
    printf("Array elements are:[ ");
    for (i =0;i<size;i++){
        printf("%d ",p[i]);
    }
    printf("]\n");
}
