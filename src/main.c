#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include "gafu.h"
#include "output_matrix.h"
#include "menu.h"
enum keyboard{p1=49, p2=50, p3=51, pz=122,pup=72,pdown=80,pleft=75,pright=77};
int main()
{
    enum keyboard uk=pz;
    int menu = 0;
    int where = 0; // where otvechaet za mestonaho... gde sidim
    drawmenu();
    while (1) {
        switch (uk) {
        case pz: // Bukva Z
            if (where = 1) {
                where = 0;
                clear();
                drawmenu();
            }
            break;
        case p1: // Cifra 1
            if (where == 0) {
                where = 1;
                clear();
                game(uk);
		where=0;
                break;
            }
        case p2: // Cifra 2
            if (where == 0) {
                where = 1;
                clear();
                Creators();
                break;
            }
        case p3: // Cifra 3
            if (where == 0) {
                clear();
                endwin();
		return 0;
                break;
            }
        }
        uk = getch();
    }
    return 0;
}
