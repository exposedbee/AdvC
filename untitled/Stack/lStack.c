//
//
//#include <stdlib.h>
//#include "lStack.h"
//
//// Note: Capacity is for compatibility purposes
////Stack *createStack( int capacity) {
////    // Allocate empty pointer to pointer
////    Stack *stack = (Stack *) malloc(sizeof(Stack));
////    if (!stack) {
////        return 0;
////    }
////
////    // Set pointer to null
////    *stack = 0;
////    return stack;
////}
//
////status push(Stack *stack, int element) {
////    // Equivalent to Stack box = (Stack) malloc(sizeof(Box))
////    Box *box = (Box *) malloc(sizeof(Box));
////    box->value = element;
////
////    // Set next element to current box from stack
////    box->next = *stack;
////
////    // Set current stack box to new box
////    *stack = box;
////}
////
////status pop(Stack *stack) {
////    Box *box = *stack;
////    *stack = box->next;
////    free(box);
////}
//
//// top(Stack *stack, int * result) {
////    if(isEmpty)return ERREMPTY;
////    *result= (*stack)->value;
////    return OK;
////}
//
//int isEmpty(Stack *s) {
//    return *s == 0; // Same as return !*s;
//}
//
//void destroyStack(Stack *stack) {
//    while (!isEmpty(stack)) {
//        pop(stack);
//    }
//
//    free(stack);
//}
