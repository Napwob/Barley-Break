#include "output_matrix.h"
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void drawgame(int x[][4], int n)
{
start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_BLACK);
    init_pair(3, COLOR_MAGENTA, COLOR_BLACK);
    attron(A_BOLD);
    attron(COLOR_PAIR(1));
    int x1 = 50, y1 = 10;
    int x2 = 50, y2 = 9;
    int x3 = 50, y3 = 11;
    for (int i = 0; i < n; ++i) {
        x1 = 50;
        x2 = 50;
        x3 = 50;
        for (int j = 0; j < 4; ++j) {
            if (x[j][i] == 0) {
                attroff(COLOR_PAIR(1));
                attron(COLOR_PAIR(2));
                move(y2, x2);
                printw("+===+");
                move(y1, x1);
                printw("|%2d |", x[j][i]);
                move(y3, x3);
                printw("+===+");
                attroff(COLOR_PAIR(2));
            } else {
                attron(COLOR_PAIR(1));
                move(y2, x2);
                printw("+===+");
                move(y1, x1);
                printw("|%2d |", x[j][i]);
                move(y3, x3);
                printw("+===+");
            }
            x1 = x1 + 10;
            x2 = x2 + 10;
            x3 = x3 + 10;
        }
        y1 = y1 + 5;
        y2 = y2 + 5;
        y3 = y3 + 5;
attron(COLOR_PAIR(3));
	move(35, 54.5);
printw("Press 'Z' to back for Menu");
attroff(COLOR_PAIR(3));
    }
}

