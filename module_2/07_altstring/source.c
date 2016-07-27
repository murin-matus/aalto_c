#include "source.h"
#include <string.h>
#include <stdio.h>

/* Print string */
/* Parameters:
 * s: string to be printed */
void es_print(const char *s)
{
	// replace sharp character with end of string symbol '\0'
    *strchr(s, '#') = '\0';

    // print characters until \0 is found
    while(*s)
    {
        printf("%c", *s);

        // increase pointer`s position
        s++;
    }
}

/* String length */
/* Parameters:
 * s: string to be evaluated
 * Returns: length of the string */
unsigned int es_length(const char *s)
{
    // pointer to sharp symbol - pointer to first character string
    return strchr(s, '#') - s;
}

/* String copy */
/* Parameters:
 * dst: buffer to which the new string is copied
 * src: original string
 * Returns: Number of characters copied
 */
int es_copy(char *dst, const char *src)
{
    // get pointer to first sharp symbol
    char *src_sharp = strchr(src, '#');

    // calculate position in source string
    int position = (src_sharp - src);

    // copy source string of length position of sharp + 1 
    strncpy(dst, src, position + 1);

    // return number of copied characters
    return position;
}

/* String tokenizer */
/* Parameters:
 * s: string to be processed
 * c: character to be replaced by '#'
 * Returns: pointer to the character following the replaced character,
 *          NULL if end of string reached */
char *es_token(char *s, char c)
{
    (void) s;
    (void) c;
    return NULL; // replace this
}
