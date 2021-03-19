#include <stdlib.h>
#include <string.h>
#include "gsort.h"

int compareInt(const void *p1, const void *p2) {
    // Cast void* to int*
    int *i1 = (int *) p1;
    int *i2 = (int *) p2;

    // Return differences of integers
    return *i1 - *i2;
}


void sort(int *a, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}


void gsort(void *a, size_t size, size_t elementSize, comparator comp) {
    int end = size * elementSize;
    // Allocate outside the loop for performance reasons
    void *temp = malloc(elementSize);

    for (int i = 0; i < end - elementSize; i += elementSize) {
        for (int j = i + elementSize; j < end; j += elementSize) {
            if (comp(a + i, a + j) > 0) {
                memcpy(temp, a + i, elementSize);
                memcpy(a + i, a + j, elementSize);
                memcpy(a + j, temp, elementSize);
            }
        }
    }

    free(temp);
}

void gsort2(void *a, size_t size, size_t elementSize, comparator comp) {
    // Allocate outside the loop for performance reasons
    void *temp = malloc(elementSize);

    for (int i = 0; i < size - 1; ++i) {
        void *iAddress = a + (elementSize * i);

        for (int j = i + 1; j < size; ++j) {
            void *jAddress = a + (elementSize * j);

            if (comp(iAddress, jAddress) > 0) {
                memcpy(temp, iAddress, elementSize);
                memcpy(iAddress, jAddress, elementSize);
                memcpy(jAddress, temp, elementSize);
            }
        }
    }

    free(temp);
}