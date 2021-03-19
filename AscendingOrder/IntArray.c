#include <malloc.h>

//
// Created by saud1 on 19-09-2020.
//
#include <stdlib.h>
#include "IntArray.h"

int * createRandomArray(int size){
    int i;
    int * res;
    res=(int*)malloc(size*sizeof(int));
    if(!res)return 0;
    for(i=0;i<size;i++){
        res[i]=rand()%(2*size);
    }
}
