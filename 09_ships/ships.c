#include <stdio.h>
#include <stdlib.h>
#include "ships.h"

const unsigned int xsize = 10;
const unsigned int ysize = 10;
const unsigned int shiplen = 3;

/* implement these functions */

/* Task a: Place <num> ships on the game map.
 */
void set_ships(unsigned int num)
{
    unsigned int i = 0;
    while(i < num) 
    {
        int position_x, position_y;
    
        // determine ships position
        position_x = rand() % 10;
        position_y = rand() % 10;

        int direction = (position_x + position_y) % 2;

        // correctly placed ship returns 1
        int place_result = place_ship(position_x, position_y, direction);
        if(place_result == 1)
        {
            i++;
        }
    }
}


/* Task b: print the game field
 */
void print_field(void)
{
    for(unsigned int row = 0; row < ysize; row++) 
    {
        for(unsigned int column = 0; column < xsize; column++) 
        {
            // check if point is visible to user
            int visible = is_visible(column, row);
            if(visible == 0) 
            {
                printf("?");
            }
            else 
            {
                // get point`s character ('.', '+', '#')
                char point = is_ship(column, row);
                printf("%c", point);
            }
        }
        // add new line
        printf("\n");
    }
}


/* Task c: Ask coordinates (two integers) from user, and shoot the location.
 * Returns -1 if user gave invalid input or coordinates, 0 if there was no ship
 * at the given location; and 1 if there was a ship hit at the location.
 */
int shoot(void)
{
    unsigned int position_x, position_y;

    // read positions from user
    scanf("%u %u", &position_x, &position_y);

    // check if position is in game field
    if(position_x > 9 || position_y > 9) 
    {
        return -1;
    }
    
    // mark location visible
    checked(position_x, position_y);
    
    // check if location is ship
    char point = is_ship(position_x, position_y);
    if(point == '#' || point == '+')
    {
        hit_ship(position_x, position_y);
        return 1;
    }

    // location is not ship
    return 0;
}

/* Task d: Returns 1 if game is over (all ships are sunk), or 0 if there
 * still are locations that have not yet been hit. <num> is the number of
 * ships on the game map. It is assumed to be the same as in the call to
 * set_ships function.
 */
int game_over(unsigned int num)
{
    (void) num;
    return 0;  // replace this
}
