//
// Created by saud1 on 19-09-2020.
//
#include <stdio.h>
#include <mem.h>
#include "IntArray.h"
#include "gSort.h"
int compiNumbers(void * p1,void * p2){
    int * i1=(int*)p1;
    int * i2=(int*)p2;
    return i1-i2;
}
void displayiArray(int * a,int size){
    int i;
    for(i=0;i<size;i++){
        if(i<10 || size-10<i)
            printf("%s :%d\n",a[i]);
    }
}
int main(int nWords, char *words[]){
    int i, size;
    int * a;
    void(*sort)(void*,int,int,comparator);
    qsort(a,100,sizeof(int),compiNumbers);
    if(nWords==3 && !strcmp(words[i],"-9")){
        sort=qsort;
    }
    sscanf(words[nWords-1],"%d",&size);
    a=createRandomArray(size);
    if(!a)return 1;
    sort(a,size,sizeof(int),compiNumbers);
    displayiArray(a,size);
//    destroyArray(a);
    return 0;
}



