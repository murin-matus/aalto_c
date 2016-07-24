#include <stdio.h>
#include <math.h>
#include "source.h"


void multi_table(unsigned int xsize, unsigned int ysize)
{
    for(unsigned int i = 0; i < ysize; i++) {
        for(unsigned int j = 0; j < xsize; j++) {
            unsigned int result = (i + 1) * (j + 1);
            printf("%4u", result);
        }
        printf("\n");
    }
}

void draw_triangle(unsigned int size)
{
    for(unsigned int i = 0; i < size; i++) {
        for(unsigned int j = 0; j < size; j++) {
            unsigned int dots_count = size - (i + 1);
            if(j < dots_count) {
                printf(".");
            }
            else {
                printf("#");
            }
        }
        printf("\n");
    }
}

double distance(int x, int y)
{
    return sqrt(x * x + y * y);
}


void draw_ball(unsigned int radius)
{
    unsigned int box_size = 2 * radius + 1;
    for (unsigned int i = 0; i < box_size; i++) {
        for (unsigned int j = 0; j < box_size; j++) {
            // point is part of circle if it is lower or equal than circle`s radius
            if(distance(i - radius, j - radius) <= radius)
            {
                printf("*");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
}
