#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
void drawmenu()
{
    initscr();
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    attron(A_BOLD);
    attron(COLOR_PAIR(1));
    move(10, 70);
    printw("New game\n");
    move(15, 70);
    printw("Creators\n");
    move(20, 70);
    printw("Exit\n");
}

