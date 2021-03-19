//
// Created by saud1 on 09-10-2020.
//

#ifndef FINALPROJECT_MAP_H
#define FINALPROJECT_MAP_H
#include "../List/List.h"


/** City structure: containing
 * @param name name of the city
 * @param neighbour pointer to its neighbour list
 * @param backPathPointer pointer to point to its previous city
 * @param x the Latitude of the City
 * @param y the longitude of the City
 * @par distanceFromStart and dist to Goal*/
typedef struct City{
    char name[20];
    List * neighbour;
    struct City* backPathPointer;
    int x;
    int y;
    int distFromStart;
    int distToGoal;
} City;

/** Comparison function for City Names.
 * Follows the "strcmp" convention: result is negative if e1 is less
 * than e2, null if they are equal, and positive otherwise.
 */
int compCity (void * s1, void * s2);

/** Simple Neighbour structure  containing distance and pointer of type City*/
typedef struct Neighbour{
    int distance;
    City * city;
}Neighbour;

/** New City creation by dynamic memory allocation (O(1)).
 * @param city - name of the new city
 * @param x - Latitude of the city
 * @param y - Longitude of the city
 * @return a new City if memory allocation OK
 * @return 0 otherwise
 */
City* createNewCity(char* city, int x, int y);

/** destroy the City and its neighbours by deallocating used memory (O(N)).
 * @param l the list of Type City to be destroyed */
void delCity(List * l);

/** finds the City that matches the predicate
 * @param l - the City list
 * @param f - the predicate
 * @return 0 if no matching element was found
 * @return (a pointer to) the first that matches otherwise
 */
City* getCityAddress(List* l,char * str);

/** New Neighbour creation by dynamic memory allocation (O(1)).
 * @param - dist distance of the neighbouring city to predecessor
 * @param - city pointer of type City containing the neighbour city details
 * @return a new City if memory allocation OK
 * @return 0 otherwise
 */
Neighbour* createNewNeighbour(int dist, City* city);

/** add given Neighbour element to the Given City neighbour list.
 * @param l - the List of Neighbour to a particular City.
 * @param e - the element of type Neighbour to add
 * @return ERRALLOC if memory allocation failed
 * @return ERRUNABLE if no comparison function has been provided
 * @return OK otherwise
 */
status addNeighbourTo(List * l,void * next);

/** Reads from a .map/txt file
 * @param - fileName the name and location of the file
 * @return the list containing all the Cities
 */
List* readCity(char* fileName);

/** sequentially call given function with each element of given list (O(NxF)).
 * @param l - the list (of Cities)
 * @param f - the function with two parameters
 * @param dest - element passes to the function f as second parameter
 */
void	forEach1	(List* l,void(*f)(void*,void*),void*dest);

/** sequentially call given function with each element of given list (O(NxF)).
 * @param l - the list (of Cities)
 * @param f - the function with two parameters
 * @param a1 - element passes to the function f as second parameter
 * @param a2 - element passes to the function f as third parameter
 * @param a3 - element passed to the function f as forth parameter
 */
void    forEach2   (List* l,void(*f)(void*,void*,void*,void*),void* a1,void*a2,void*a3);

#endif //FINALPROJECT_MAP_H
