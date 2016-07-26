#include <stdio.h>
#include "source.h"


#ifndef MAWKKE

/* 03-mastermind
 */
void mastermind(const int *solution, const int *guess, char *result, unsigned int len)
{
    // go through guess array
    for (unsigned int i = 0; i < len; i++)
    {
        // pick value
        int attempt = *(guess + i);

        // reset attempt score
        unsigned int score = 0;

        // go through correct values
        for(unsigned int j = 0; j < len; j++) 
        {
            // pick value
            int answer = *(solution + j);

            // compare with guess value
            if (answer == attempt)
            {
                // compare positions
                if(i == j)
                {
                    // max score if positions are same
                    score = len;
                }
                else
                {
                    // add 1 point to score
                    score++;
                }
            }
        }

        // compare score with array length
        // max score for same position is array length
        if(score >= len)
        {
            // same array position
            *(result + i) = '+';
        }
        else if(score > 0)
        {
            // different position
            *(result + i) = '*';
        }
        else
        {
            // no match
            *(result + i) = '-';
        }
    }
}
#endif
