#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gafu.h"

struct c {
    int x0;
    int y0;
};

struct c fit(int* numb[4][4], struct c c) // zoplnenit i peremeshat massiv
{
    srand(time(NULL));
    int i, j = 0, r = 0;
    numb[0][0] = 0;
    numb[1][0] = 1;
    numb[2][0] = 2;
    numb[3][0] = 3;
    numb[0][1] = 4;
    numb[1][1] = 5;
    numb[2][1] = 6;
    numb[3][1] = 7;
    numb[0][2] = 8;
    numb[1][2] = 9;
    numb[2][2] = 10;
    numb[3][2] = 11;
    numb[0][3] = 12;
    numb[1][3] = 13;
    numb[2][3] = 14;
    numb[3][3] = 15;
    c.x0 = 0;
    c.y0 = 0;
    for (i = 0; i < 10000; i++) {
        r = rand() % 5;
        if (r == 1)
            r = 72;
        if (r == 2)
            r = 80;
        if (r == 3)
            r = 75;
        if (r == 4)
            r = 77;
        switch (r) {
        case 72: // vverh
            if ((c.y0 - 1) >= 0) {
                numb[c.x0][c.y0] = numb[c.x0][c.y0 - 1];
                numb[c.x0][c.y0 - 1] = 0;
                c.y0--;
            }
            break;
        case 80: // vverh
            if ((c.y0 + 1) <= 3) {
                numb[c.x0][c.y0] = numb[c.x0][c.y0 + 1];
                numb[c.x0][c.y0 + 1] = 0;
                c.y0++;
            }
            break;
        case 75: // vverh
            if ((c.x0 - 1) >= 0) {
                numb[c.x0][c.y0] = numb[c.x0 - 1][c.y0];
                numb[c.x0 - 1][c.y0] = 0;
                c.x0--;
            }
            break;
        case 77: // vverh
            if ((c.x0 + 1) <= 3) {
                numb[c.x0][c.y0] = numb[c.x0 + 1][c.y0];
                numb[c.x0 + 1][c.y0] = 0;
                c.x0++;
            }
            break;
        }
    }
    drawgame(numb);
    return c;
}

int wich(int n[4][4]) // proverka na pobedu
{
    int i, j;

    for (i = 1; i < 4; i++)
        for (j = 1; j < 4; j++)
            if (n[i - 1][j - 1] > n[i][j])
                return 1;

    return 0;
}

void game()
{ // Igra
    int numb[4][4], pr = 0, i = 0, j = 0;
    int t, x0, y0; // pervoe za y vtoroe za x
    struct c c;
    c = fit(numb, c);
    while (1) {
        system("cls");
        // Dvizshenie
        switch (pr) {
        case 72: // vverh
            if ((c.y0 - 1) >= 0) {
                numb[c.x0][c.y0] = numb[c.x0][c.y0 - 1];
                numb[c.x0][c.y0 - 1] = 0;
                c.y0--;
            }
            break;
        case 80: // vverh
            if ((c.y0 + 1) <= 3) {
                numb[c.x0][c.y0] = numb[c.x0][c.y0 + 1];
                numb[c.x0][c.y0 + 1] = 0;
                c.y0++;
            }
            break;
        case 75: // vverh
            if ((c.x0 - 1) >= 0) {
                numb[c.x0][c.y0] = numb[c.x0 - 1][c.y0];
                numb[c.x0 - 1][c.y0] = 0;
                c.x0--;
            }
            break;
        case 77: // vverh
            if ((c.x0 + 1) <= 3) {
                numb[c.x0][c.y0] = numb[c.x0 + 1][c.y0];
                numb[c.x0 + 1][c.y0] = 0;
                c.x0++;
            }
            break;
        }
        // printf("\n%d %d - %d\n",x0,y0,numb[x0][y0]); // Test
        drawgame(numb);
        if (wich(numb) == 0) // proverka na pobedu
        {
            system("cls");
            printf("WIN");
            break;
        }
        pr = getch();
        // printf("%d",pr); // prigoditsa
        if (pr == 122) {
            break;
        }
    }
}
