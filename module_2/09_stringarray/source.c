#include "source.h"


/* Print string array, last element is NULL */
/* Parameters:
 * array: string array to be printed, each string on own line */
void print_strarray(char *array[])
{
    // go through inner arrays
    while(*array)
    {
        // get pointer to start of inner array
        char *inner_array = *array;
        while(*inner_array)
        {
            // print every character
            printf("%c", *inner_array);
            inner_array++;
        }
        
        // one string per line
        printf("%c", '\n');
        array++;
    }
}

/* Put strings from string separated by space to a string array */
/* Parameters:
 * string: string to be cut into parts and placed into the array, 
   remember to add ending zeros '\0' for strings and NULL to the end of the whole array!
 * arr: ready-made array that the strings will be put into */
void str_to_strarray(char* string, char** arr)
{
    (void) string; (void) arr;
}
