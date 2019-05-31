#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gafu.h"
#include "output_matrix.h"
#include "menu.h"
int main()
{
    int menu = 0, uk = 122,
        where = 0; // where otvechaet za mestonaho... gde sidim
    drawmenu();
    while (1) {
        switch (uk) {
        case 122: // Bukva Z
            if (where = 1) {
                where = 0;
                system("cls");
                drawmenu();
            }
            break;
        case 49: // Cifra 1
            if (where == 0) {
                where = 1;
                system("cls");
                game(uk);
                break;
            }
        case 50: // Cifra 2
            if (where == 0) {
                where = 1;
                system("cls");
                Creators();
                break;
            }
        case 51: // Cifra 3
            if (where == 0) {
                system("cls");
                return 0;
                break;
            }
        }
        uk = getch();
    }
    return 0;
}
