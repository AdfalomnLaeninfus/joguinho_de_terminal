#pragma once

#ifndef UTILSLIB
#define UTILSLIB

#include <stdio.h>

// Basic params to terminal.

#define hideCursor pritnf("\x1b[?25l")              // Hide cursor of terminal.
#define showCursor pritnf("\x1b[?25h")              // Show cursor of terminal.
#define clearScreen printf("\x1b[2J\x1b[H")         // Clear screen to render the game.
#define gotoXY(x, y) printf("\x1b[%d;%dH", x, y)    // Move the cursor in screen.

// Set Game Loop.

#define gameLoop while(1) {
#define endGameLoop }

#endif