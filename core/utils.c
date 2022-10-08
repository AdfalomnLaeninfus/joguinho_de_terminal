#include <stdio.h>
#include <stdlib.h>

#include "player.h"
#include "vector/vector2.h"

void movePlayer( Player *player, Vector2 *vec2 )
{
    if (
        player->position.x < 0 && player->position.x > 20 &&
        player->position.y < 0 && player->position.y > 7
    )
    {
        player->position.x = vec2->x;
        player->position.y = vec2->y;
    }

}

void showMap( char map[7][20], Player *player )
{
    for ( int y = 0; y < 7; y++ )
    {
        for ( int x = 0; x < 20; x++ )
        {
            if ( player->position.x == x && player->position.y == y )
            {
                printf("%c", player->sprite);
            } else {
                printf("%c", map[y][x]);
            }
        }

        printf("\n");
    }
}