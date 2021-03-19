////
//// Created by saud1 on 19-09-2020.
////
//#include <malloc.h>
//#include "GStack.h"
//
//static Box * avialable=0;
//status top(Stack *stack, void * res) {
//    if(isEmpty(stack))return ERREMPTY;
//    *(void**)res=(*stack)->value;
//    return 0;
//}
//
//Stack *createStack( int capacity) {
//    // Allocate empty pointer to pointer
//    Stack *stack = (Stack *) malloc(sizeof(Stack));
//    if (!stack) {
//        return ERREMPTY;
//    }
//
//    // Set pointer to null
//    *stack = 0;
//    return stack;
//}
//
//
//status push(Stack *stack, void * element) {
//    // Equivalent to Stack box = (Stack) malloc(sizeof(Box))
//    Stack * temp;
//    if (avialable!=0){
//        *temp=avialable;
//        avialable=avialable->next;
//    }
//    else
//        *temp= (Box *) malloc(sizeof(Box));
//    (*temp)->value = element;
//
//    // Set next element to current box from stack
//    (*temp)->next = *stack;
//
//    // Set current stack box to new box
//    *stack = *temp;
//}
//
//status pop(Stack *stack) {
//    Box *box = *stack;
//    *stack = box->next;
//    box->next=avialable;
//    avialable=box;
//}
//
//
//
