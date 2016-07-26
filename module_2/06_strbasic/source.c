#include <ctype.h>
#include "source.h"


/* Count Alpha
 * Count number of alphabetic characters in the given string <str>,
 * and return the count
 */
int count_alpha(const char *str)
{
    // count of alpha numeric characters
    int count = 0;

    // read string until \0
    while (*str != '\0')
    {
        // check if character os alpha numeric
        if(isalpha(*str))
        {
            // add one to count
            count++;
        }
        
        // move by one char in array
        str++;
    }

    // get count of alpha numeric characters
    return count;
}


/* Count Substring
 * Count number of occurances of substring <sub> in string <str>,
 * and return the count.
 */
int count_substr(const char *str, const char *sub)
{
    (void) str;
    (void) sub;
    return 0;  // replace this
}


