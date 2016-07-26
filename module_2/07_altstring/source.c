#include "source.h"
#include <string.h>
#include <stdio.h>

/* Print string */
/* Parameters:
 * s: string to be printed */
void es_print(const char *s)
{
	*strchr(s, '#') = '\0';

    while(*s)
    {
        printf("%c", *s);
        s++;
    }
}

/* String length */
/* Parameters:
 * s: string to be evaluated
 * Returns: length of the string */
unsigned int es_length(const char *s)
{
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
