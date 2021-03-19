#include <stdio.h>
#include <mem.h>
#include "Map/map.h"

/** Function to compute distToGoal and assign distFromStart to a City
 * @param c - pointer to a City
 * @param dest - pointer to the destination City
 */
static void compute(void * c,void* dest){
    City* destination=dest;
    City* city=c;
    city->distToGoal=(abs(city->x-destination->x)+abs(city->y-destination->y))/4;
    city->distFromStart=10000;
}

/** Function to find from List Open the city with minimal f
 * @param l - List of Cities
 * @return 0 if city with minimal f is not found
 * @return pointer to the city with minimal f
 */
City* leastF(List * l){
    int i;
    int f;
    City * city,*c=0;
    Node* temp=l->head;
    f=10000;
    for(i=1;i<=l->nelts;i++){
        city=temp->val;
        if((city->distFromStart+city->distToGoal)<f) {
            c = city;
            f=(city->distFromStart+city->distToGoal);
        }
        temp=temp->next;
    }
    return c;
}

/** Computes step 5 of the A* algo for one neighbour
 * @param s - pointer to a Neighbour Structure
 * @param cu - pointer to the current city
 * @param op - pointer to List Open
 * @param cl - pointer to List Closed
 */
static void computeFun(void * s,void*cu,void* op, void* cl){
    List* open=op,*closed=cl;
    City* current=cu;
    int g;
    Neighbour* n=s;
    City* c=n->city;

    /*1 compute gˆ(n) + c(n,si)*/
    g=current->distFromStart+n->distance;
    /*if si is not in OPEN or in CLOSED and gˆ(n) + c(n,si) > gˆ(si). else skip*/
    if(!(g>c->distFromStart&&(isInList(open,c)||isInList(closed,c))))
    {
        remFromList(open,c);
        remFromList(closed,c);
        addList(open,c);
        c->distFromStart=g;
        /*Assign a backPathPointer to the current city*/
        c->backPathPointer=current;
    }

}


int main(){
    City* source,* destination,* current;
    List* open,* closed;
    int i=1;
    status st;
    //
    char* filename = "E:\\projectData.d\\FRANCE.MAP";
    List* l=readCity(filename);
    if(!l){
        puts("Error loading map");
        return 1;
    }
    printf("Map Created success\n");

    char src[20],des[20];
    printf("Enter src :");
    scanf("%s",src);
    printf("Enter destination :");
    scanf("%s",des);
    if(!isInList(l,src)||!isInList(l,des))
    {
        puts("City entered Not Found in map");
        return 2;
    }

    source=getCityAddress(l,src);
    destination=getCityAddress(l,des);
    open=newList(l->comp,l->pr);
    closed=newList(l->comp,l->pr);
    if(!open||!closed)
    {
        puts("Error creating empty lists open and closed");
        return 3;
    }
    /*place n0 in open*/
    st=addListAt(open,open->nelts+1,source);
    if (st) {fprintf(stderr,"%s\n", errorMessage(st)); return 4;}

    /*Calls a function to perform step one of A* algo
     * set g for all cities to 10000*/
    forEach1(l,compute,destination);

    /*Change g(n0) to 0*/
    source->distFromStart=0;

    /*Step 2 of A* algo*/
    while(open->head){

        /*Call a function to perform Step 3 of A* algo
         * find the city with min f
         * call it n(current)
         * add it to closed*/
        current=leastF(open);
        if (!current) {puts("Error finding city with least f"); return 5;}
        st=remFromList(open,current);
        if (st) {fprintf(stderr,"%s\n", errorMessage(st)); return 6;}
        st=addList(closed,current);
        if (st) {fprintf(stderr,"%s\n", errorMessage(st)); return 7;}

        /*if n (current) is goal
         * print success and exit while loop*/
        if(current==destination){

            printf("Path Found:\n");
            /*Print the Total Distance and use the pointer chain to retrieve the path*/
            printf("Total Distance: %d\n",current->distFromStart);
            while(strcasecmp(current->name,src)!=0){
                printf("%d-%s\n",i++,current->name);
                current=current->backPathPointer;
                if(!current){puts("Error in finding backPathPointer");return 8;}

            }
            printf("%d-%s\n",i,current->name);
            break;


        }
        /*For each successor- Neighbour city- function called to perform
         * Step 5 of A* algo*/
        forEach2(current->neighbour,computeFun,current,open,closed);

    }
    /*Clear memory*/
    delList(open);
    delList(closed);
    delCity(l);
    return 0;
}