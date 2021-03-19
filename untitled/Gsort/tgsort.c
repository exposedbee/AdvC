#include <string.h>
#include <stdio.h>
#include "gsort.h"
#include "../IntArray/IntArray.h"

#define MAXLENGTH 30

typedef struct {
    char name[1 + MAXLENGTH];
    int number;
} Id;

int testInteger() {
    int intArr[] = {1, 4, 2, 8, 5, 7};
    int size = sizeof(intArr) / sizeof(int);
    gsort2(intArr, size, sizeof(int), compareInt);
    displayArray(intArr, size);
    return 0;
}

int compareIdNames(void *p1, void *p2) {
    Id *i1 = (Id *) p1;
    Id *i2 = (Id *) p2;

    return strcmp(i1->name, i2->name);
}

int compareIdNumbers(void *p1, void *p2) {
    Id *i1 = (Id *) p1;
    Id *i2 = (Id *) p2;

    return i1->number - i2->number;
}

void displayIds(Id a[], int size) {
    for (int i = 0; i < size; ++i) {
        Id currElement = a[i];
        printf("%s : %d\n", currElement.name, currElement.number);
    }
}

int testId() {
    Id a[] = {
            {"Gus",        31},
            {"Jack",       22},
            {"Cinderella", 41},
            {"Lucifer",    13}
    };

    int size = sizeof(a) / sizeof(Id);
    gsort(a, size, sizeof(Id), compareIdNames);
    displayIds(a, size);
    gsort(a, size, sizeof(Id), compareIdNumbers);
    displayIds(a, size);

    return 0;
}

//int main() {
//    return testId();
//}