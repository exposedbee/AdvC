//
// Created by saud1 on 18-09-2020.
//

#ifndef ASCENDINGORDER_GSORT_H
#define ASCENDINGORDER_GSORT_H
typedef int (*comparator) (void *, void *);
void gsort(void * a, int size, int eltSize, comparator comp);

#endif //ASCENDINGORDER_GSORT_H
