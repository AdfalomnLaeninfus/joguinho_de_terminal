#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "core/player.h"
#include "core/utils.h"
#include "core/vector/vector2.h"

int main(void)
{
    // Declarando os objetos iniciais.

    Player player;                      // Jogador
    Vector2 endPoint    = { 1, 5 };     // Ponto de chegada para ganhar o jogo.
    Vector2 spawnPoint  = { 1, 1 };     // Ponto de nascimento do player.

    char map[7][20] = {
        "###################",
        "              o   #",
        "#                 #",
        "#######           #",
        "#######           #",
        "                  #",
        "###################"
    };

    /* Configurações do jogador */
    player.sprite = 'A';
    player.position.x = spawnPoint.x;
    player.position.y = spawnPoint.y;

    CLEARPROMPT, HIDECURSOR;

    // Execução.
    GAMELOOP

        showMap( map, &player ); // Imprime na tela o mapa do jogo.
        GOTOXY( 0, 0 );         // Coloca o cursor do terminal no início.

        switch (getch())
        {
            Vector2 move = {
                player.position.x,
                player.position.y
            };

            case 'w':
                move.y--;
                movePlayer( &player, &move );
                GOTOXY(0, 0), showMap( map, &player );
                break;

            case 's':
                move.y++;
                movePlayer( &player, &move );
                GOTOXY(0, 0), showMap( map, &player );
                break;

            case 'a':
                move.x--;
                movePlayer( &player, &move );
                GOTOXY(0, 0), showMap( map, &player );
                break;

            case 'd':
                move.x++;
                movePlayer( &player, &move );
                GOTOXY(0, 0), showMap( map, &player );
                break;

            case 'c':
                SHOWCURSOR, CLEARPROMPT;
                exit(0);
                break;

            default:
                break;
        }

        printf("\nteste\n");

    ENDGAMELOOP

    return 0;
}