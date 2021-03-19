//
//#include <stdio.h>
//#include "lStack.h"
////
//int main() {
//    int capacity = 10;
//    Stack *stack = createStack(capacity);
//    if (!stack) {
//        return 1;
//    }
//
//    if (!isEmpty(stack)) {
//        return 2;
//    }
//
//    for (int i = 0; i < capacity; ++i) {
//        push(stack, i);
//    }
//
//    if (isEmpty(stack)) {
//        return 3;
//    }
//
//    while(!isEmpty(stack)) {
//        printf("%d ", top(stack));
//        pop(stack);
//    }
//
//    destroyStack(stack);
//    return 0;
//}