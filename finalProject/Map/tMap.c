////
//// Created by saud1 on 09-10-2020.
////
//#include <stdio.h>
//#include "map.h"
//
//static void prForEachNeighbour(void* n){
//    City * c=n;
//    List* l=c->neighbour;
//    displayList(l);
//}
//
//int main(){
//    int i;
//    char* filename = "E:\\projectData.d\\FRANCE.MAP";
//    List * l=readCity(filename);
////    City* temp=l->head->next->next->next->next->val;
////    List * tele=temp->neighbour;
////    Node * t=tele->head;
////    for(i=1;i<=tele->nelts;i++){
////        Neighbour* n=t->val;
////        City* f=n->city;
////        printf("%s:%d\n",f->name,n->distance);
////        t=t->next;
////    }
////    displayList(l);
////    City *c=l->head->val;
////    Neighbour * n=c->neighbour;
////    displayList(n);
//    forEach(l,prForEachNeighbour);
//    return 0;
//}
