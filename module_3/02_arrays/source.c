#include <stdio.h>
#include <stdlib.h>
#include "source.h"

/* Dynamic Array Reader */
/* Parameters:
 * n: Number of values to be read
 * 
 * Returns: pointer to the dynamically allocated array
 */
int *dyn_reader(unsigned int n)
{
    // initialize array of size n
    int *array = malloc(n * sizeof(int));

    // let user to fill array
    for (unsigned int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // return pointer to array
    return array;
}

/* Add to array */
/* Parameters:
 * arr: Existing array of integers
 * num: number of integers in the array before the call
 * newval: new value to be added
 * 
 * Returns: pointer to the allocated array
 */
int *add_to_array(int *arr, unsigned int num, int newval)
{
    // reallocate array with size num + 1
    int *newarr = realloc(arr, (num + 1) * sizeof(int));

    // set last element of array to newval
    newarr[num] = newval;

    // return pointer to new array
    return newarr;
}
