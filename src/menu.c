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

<<<<<<< HEAD

||||||| merged common ancestors
<<<<<<< HEAD
||||||| merged common ancestors
void Creators()
{
    printw("2 cheloveka");
}

void Exit()
{
    endwin();
}

int main()
{
    initscr();
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    int a = 0;
    while (1) {
        a = 0;
        clear();
        Menu();
        a = getch();
        if (a == 50) {
            clear();
            Creators();
            getch();
        }
        if (a == 51) {
            Exit();
            return 0;
        }
    }
}
=======
=======
>>>>>>> bff455cfebb4d2240747bee1f275aee7f36d7c96
void Creators()
{
printw("Vlad 'Napwob' Rusmanov\nIlya 'Kadconner' Kryukov\n\nPress 'Z' for back to Menu");
}

<<<<<<< HEAD

||||||| merged common ancestors
>>>>>>> Napwob
=======
>>>>>>> bff455cfebb4d2240747bee1f275aee7f36d7c96
