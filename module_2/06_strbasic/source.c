#include <ctype.h>
#include <string.h>
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
        if (isalpha(*str))
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
    // save length of provided string and substring
    int len_str = strlen(str);
    int len_sub = strlen(sub);

    // maximum count of substring per string is length of string
    // in case that substring has length 1
    int count = len_str - len_sub + 1;
    for (int i = 0; i < len_str - len_sub + 1; i++)
    {
        // iterate thgrough substring
        for (int j = 0; j < len_sub; j++)
        {
            // get characters from same positions
            char str_char = *(str + i + j);
            char sub_char = *(sub + j);

            // decrease count by one if string`s don`t equal
            if (str_char != sub_char)
            {
                count--;
                break;
            }
        }
    }
    
    // return count of substring per string
    return count;
}

