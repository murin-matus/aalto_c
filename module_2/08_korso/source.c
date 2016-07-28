#include <stdio.h>
#include "source.h"
#include <string.h>

/* Korsoraattori
 */
void korsoroi(char *dest, const char *src)
{
    // space counter
    int space = 0;
    while(*src)
    {
        if (*src == 'k' && *(src + 1) == 's')
        {
            // replace "ks" with 'x'
            *dest = 'x';

            // increment destination
            dest++;
            
            // skip next char 's'
            src = src + 2;
        }
        else if (*src == 't' && *(src + 1) == 's')
        {
            // replace "ts" with 'z'
            *dest = 'z';

            // increment destination
            dest++;

            // skip next char 's'
            src = src + 2;
        }
        else if (*src == ' ')
        {
            // move to next char
            src++;

            // increment space counter
            space++;

            if (space % 3 == 0)
            {
                char *third_space = " niinku ";

                // replace every third space
                for (int i = 0; i < strlen(third_space); i++)
                {
                    *dest = *(third_space + i);
                    dest++;
                }
            }
            else if (space % 4 == 0)
            {
                // replace every fourth space
                char *fourth_space = " totanoin ";
                for (int i = 0; i < strlen(fourth_space); i++)
                {
                    *dest = *(fourth_space + i);
                    dest++;
                }
            }
            else
            {
                // inser space
                *dest = ' ';
                dest++;
            }
        }
        else 
        {
            // copy character
            *dest = *src;
            dest++;
            src++;
        }
    }

    // insert end of string
    *dest = '\0';
}
