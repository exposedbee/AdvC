//
// Created by Keith Tan on 18/09/2020.
//

#ifndef UNTITLED_GSORT_H
#define UNTITLED_GSORT_H


/**
 * Returns <0 if e1 < e2
 * Returns 0 if e1 == e2
 * Returns >0 if e1 > e2
 */
typedef int (*comparator) (const void*, const void*);

int compareInt(const void *p1, const void *p2);

void gsort(void *a, size_t size, size_t elementSize, comparator comp);

void gsort2(void *a, size_t size, size_t elementSize, comparator comp);

int test();

#endif //UNTITLED_GSORT_H
