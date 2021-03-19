//
// Created by Keith Tan on 12/09/2020.
//

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "IntArray.h"


void resetArray(int *array, int size) {
    for (int i = 0; i < size; ++i) {
        array[i] = 0;
    }
}

int *createArray(int size) {
    int *array = (int *) malloc(size * sizeof(int));

    if (!array) {
        return 0;
    }

    resetArray(array, size);
    return array;
}

int *createRandomArray(int size) {
    int *array = createArray(size);

    for (int i = 0; i < size; ++i) {
        array[i] = (int) rand() % (2 * size);
    }
    return array;
}

void displaySubarray(int *array, int start, int end, int arrSize) {
    for (int i = start; i < end; ++i) {
        printf("%d", array[i]);

        if (i < arrSize - 1) {
            printf(", ");
        }
    }
}

void displayArray(int *array, int size) {
    printf("[");
    if (size > 20) {
        displaySubarray(array, 0, 10, size);
        printf("..., ");
        displaySubarray(array, size - 10, size, size);
    } else {
        displaySubarray(array, 0, size, size);

    }

    printf("]\n");
}

void sortArray(int *array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void destroyArray(int **array, int size) {
    resetArray(*array, size);
    free(*array);
    *array = 0;
}