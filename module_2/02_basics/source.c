#include <stdio.h>
#include "source.h"


/* Number swap
 * Swap the content of integers add addresses a and b
 */
void number_swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

/* Array Sum
 * Calculate the sum of integers in array starting at address <array>.
 * There will be <count> elements in array. Return the sum as return value.
 */
int array_sum(int *array, int count)
{
    // sum of array`s values
    int sum = 0;
    for(int i = 0; i < count; i++)
    {
        // add i-th to sum
        sum += *(array + i);
    }

    return sum;
}

/* Array Reader */
/* Parameters:
 * vals: array to be filled 
 * n: maximum size of array
 * returns: number of values read */
int array_reader(int *vals, int n)
{
    // entered numbers count
    int count = 0;
    while(count < n)
    {
        // read user`s input
        int is_number = scanf("%d", vals);
        if(is_number == 1)
        {
            count++;
            vals++;
            
            // get another number
            continue;
        }

        // exit loop
        break;
    }
    return count;
}
