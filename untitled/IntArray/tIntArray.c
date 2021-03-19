////
//// Created by Keith Tan on 12/09/2020.
////
//
//#include <stdio.h>
//#include "IntArray.h"
//
//int main() {
//    printf("Size of array: ");
//    int size = 0;
//    scanf("%d", &size);
//    int* array = createArray(size);
//
//    if (!array) {
//        return 1;
//    }
//
//    for (int i = 0; i < size; ++i) {
//        printf("Value for item %d: ", i + 1);
//        scanf("%d", &array[i]);
//    }
//
//    displayArray(array, size);
//    sortArray(array, size);
//    displayArray(array, size);
//    destroyArray(&array, size);
//
//    if (array) {
//        printf("Array not null: %p\n", array);
//        return 2;
//    }
//
//    return 0;
//}