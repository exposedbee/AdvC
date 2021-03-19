//
// Created by saud1 on 09-10-2020.
//
#include <stdio.h>
#include <mem.h>
# include "map.h"

/*************************************************************
 * Function to display an all the different cities of the list
 * @param s the pointer of type struct City containing city->name to be displayed
 *************************************************************
 */
static void prCityString(void * s) {
    City* city=s;
    printf("%s \n",city->name);
}

/*************************************************************
 * Function to display an all the neighbour cities in the list
 * @param - n pointer to a struct Neighbour containing city->name to be displayed
 *************************************************************
 */
static void prNeighbourString(void * n){
    Neighbour* nei= n;
    City * c=nei->city;
    printf("%s,",c->name);
}


List* readCity(char * fileName){
    FILE *fp;
    char str[20];
    int latitude, longitude, n;
    List* l= newList(compCity,prCityString);
    status st;

    fp = fopen(fileName, "r");
    if (fp == NULL){
        printf("Could not open file %s",fileName);
        return 0;
    }
    while(!feof(fp)) {

        if (fscanf(fp, "%s %d %d", str, &latitude, &longitude) == 3) {
            City *temp = createNewCity(str, latitude, longitude);
            st= addListAt(l, l->nelts + 1, temp);
            if (st) {fprintf(stderr,"%s\n", errorMessage(st)); return 0;}

        }
    }

    fseek(fp,0,0);
    City* main;
    while(!feof(fp)) {

        n=fscanf(fp, "%s %d %d", str, &latitude, &longitude);
        if (n==3)
        {
            main=getCityAddress(l,str);
        }
        if(n == 2)
        {

            Neighbour *temp= createNewNeighbour(latitude, getCityAddress(l, str));
            if (!temp) return 0;
            st=addNeighbourTo(main->neighbour,temp);
            if (st) {fprintf(stderr,"%s\n", errorMessage(st)); return 0;}
        }
    }
    fclose(fp);
    return l;
}


status addNeighbourTo(List * l,void * city){
    return addListAt(l,l->nelts+1,city);
}

City* getCityAddress(List* l,char * str){
    City* c;

    Node *t = isInList(l, str);
    if(t==0){
        return 0;
    }
    else if (t==(Node*)1) {
        c= l->head->val;
    }
    else {
        c = t->next->val;
    }
    return c;
}

City* createNewCity(char city[20], int x, int y){
    City *temp = (City *) malloc(sizeof(City));
    if(!temp)return 0;
    strcpy(temp->name,city);
    temp->x=x;
    temp->y=y;
    temp->backPathPointer=0;
    temp->distFromStart=0;
    temp->distToGoal=0;
    temp->neighbour=newList(0,prNeighbourString);
    return temp;
}

Neighbour* createNewNeighbour(int dist, City* city){
    Neighbour * temp=(Neighbour*)malloc(sizeof(Neighbour));
    if(!temp)return 0;
    temp->city=city;
    temp->distance=dist;
    return temp;
}

int compCity (void * s1, void * s2) {
    City* s=s1;
    return strcasecmp(s->name, (char*)s2);
}


void delNeighbour(void* city){
    City* c=city;
    List * n=c->neighbour;
    delList(n);
}
void delCity(List * l){
    forEach(l,delNeighbour);
    delList(l);
}

void	forEach1	(List* l,void(*f)(void*,void*),void* dest){
    int i;
    Node * temp=l->head;
    for(i=1;i<=l->nelts;i++){
        f(temp->val,dest);
        temp=temp->next;
    }
}

void    forEach2   (List* l,void(*f)(void*,void*,void*,void*),void*a,void*b,void*c){
    int i;
    Node * temp=l->head;
    for(i=1;i<=l->nelts;i++){
        f(temp->val,a,b,c);
        temp=temp->next;
    }
}