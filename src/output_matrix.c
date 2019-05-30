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
    int x2 = 50, y2 = 9;
    int x3 = 50, y3 = 11;
    initscr();
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    attron(A_BOLD);
    attron(COLOR_PAIR(1));
    for (int i = 0; i < 4; i++) {
        x1 = 50;
        x2 = 50;
        x3 = 50;
        for (int j = 0; j < 4; j++) {
            move(y2, x2);
            printw("+===+");
            move(y1, x1);
            printw("|%2d |", x[i][j]);
            move(y3, x3);
            printw("+===+");
            x1 = x1 + 10;
            x2 = x2 + 10;
            x3 = x3 + 10;
        }
        y1 = y1 + 5;
        y2 = y2 + 5;
        y3 = y3 + 5;
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