//
//// Created by Keith Tan on 12/09/2020.
////
//#include <stdlib.h>
//#include "Stack.h"
//
//Stack *createStack(int capacity) {
//    Stack *stack = (Stack *) malloc(sizeof(Stack));
//    if (!stack) {
//        return 0;
//    }
//
//    stack->array = (int *) malloc(capacity * sizeof(int));
//
//    if (!stack->array) {
//        free(stack);
//        return 0;
//    }
//
//    stack->capacity = capacity;
//    stack->top = -1;
//
//    return stack;
//}
//
//void destroyStack(Stack *stack) {
//    free(stack->array);
//    free(stack);
//}
//
//void push(Stack *stack, int element) {
//    stack->top++;
//    stack->array[stack->top] = element;
//}
//
//void pop(Stack *stack) {
//    stack->array[stack->top] = 0;
//    stack->top--;
//}
//
//int top(Stack *stack) {
//    return stack->array[stack->top];
//}
//
//int isEmpty(Stack *stack) {
//    return stack->top == -1;
//}