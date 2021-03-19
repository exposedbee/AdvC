////
//// Created by saud1 on 19-09-2020.
////
//#include "GStack.h"
//#include <stdio.h>
//
//int main(){
//    status st=0;
//    int a=1,b=2;
//    Stack * s= createStack(10);
//    st=push(s,&a);
//    if(!st){
//        fprintf(stderr,"%s\n",errorMessage(st));
//        return 1;
//    }
//    st=push(s,&b);
//    if(!st){
//        fprintf(stderr,"%s\n",errorMessage(st));
//        return 1;
//    }
//    while(!isEmpty(s))
//    {   int * stop;
//        top(s,&stop);
//        printf("%d\n",*stop);
//        pop(s);
//    }
//    destroyStack(s);
//    return 0;
//}
