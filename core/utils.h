#pragma once

#ifndef __UTILSLIB_H__
#define __UTILSLIB_H__

// Basic params to terminal.

#define HIDECURSOR printf("\x1b[?25l")              // Hide cursor of terminal.
#define SHOWCURSOR printf("\x1b[?25h")              // Show cursor of terminal.
#define CLEARPROMPT printf("\033c")
#define CLEARSCREEN printf("\x1b[3J\x1b[H")         // Clear screen to render the game.
#define GOTOXY(x, y) printf("\x1b[%d;%df", x, y)    // Move the cursor in screen.

// Set Game Loop.
#define GAMELOOP while(1) {
#define ENDGAMELOOP }

void movePlayer( Player *player, Vector2 *vec2 );
void showMap( char map[7][20], Player *player );

#endif