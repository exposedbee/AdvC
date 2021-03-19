//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include "IntArray/IntArray.h"
//#include "Gsort/gsort.h"
//
//int main(int argc, char *argv[]) {
//    int size = atoi(argv[1]);
//    int isQsort = argc == 3 && strcmp(argv[2], "-q") == 0;
//    void (*sort)(void *, size_t, size_t, comparator) = isQsort ? qsort : gsort;
//    int *arr = createRandomArray(size);
//
//    if (!arr) {
//        return 1;
//    }
//
//    displayArray(arr, size);
//    printf(isQsort ? "Performing Qsort\n" : "Performing Gsort\n");
//    sort(arr, size, sizeof(int), compareInt);
//    displayArray(arr, size);
//    destroyArray(&arr, size);
//
//    return 0;
//}