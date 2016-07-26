#include "source.h"


/* Selection sort */
/* Parameters:
 * start: start of an array
 * size: length of an array
 */
void sort(int *start, int size)
{
    // compare all numbers
    for (int i = 0; i < size; i++)
    {
        for(int j = i; j < size; j++)
        {
            // check if i-th number is larger than j-th element
            if (*(start + i) > *(start + j))
            {
                // swap numbers
                *(start + i) = *(start + i) + *(start + j);
                *(start + j) = *(start + i) - *(start + j);
                *(start + i) = *(start + i) - *(start + j);
            }
        }
    }
}

