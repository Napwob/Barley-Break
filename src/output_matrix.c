#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int x[4][4];
void matrix()
{
    int k = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            x[i][j] = k;
            k++;
        }
    }
}
void output()
{
    int x1 = 50, y1 = 10;
    initscr();
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    attron(A_BOLD);
    attron(COLOR_PAIR(1));
    for (int i = 0; i < 4; i++) {
        x1 = 50;
        for (int j = 0; j < 4; j++) {
            move(y1, x1);
            printw("|");
            printw("%4d  ", x[i][j]);
            x1 = x1 + 10;
        }
        printw("|\n\n");
        y1 = y1 + 5;
    }
    getch();
    endwin();
}

int main()
{
    matrix();
    output();
    return 0;
}
