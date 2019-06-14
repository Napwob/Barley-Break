#include "gafu.h"
#include "menu.h"
#include "output_matrix.h"
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct c {
    int x0;
    int y0;
};

enum keyboard {
    p1 = 49,
    p2 = 50,
    p3 = 51,
    pz = 122,
    pup = 72,
    pdown = 80,
    pleft = 75,
    pright = 77
};

int wich(int n[4][4]) // proverka na pobedu
{
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = 1; j < 4; j++)
            if (n[j - 1][i] > n[j][i])
                return 1;

    return 0;
}

struct c fit(int numb[][4], struct c c,int level)
{
    int r, i, j, nu = 0,per=500;
    enum keyboard r1;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            numb[j][i] = nu;
            nu++;
        }
    }
	if (level == p1) per= 20;
	if (level == p3) per= 1000;
	    for (i = 0; i < per; i++) {
        r = rand() % 5;
        if (r == 1)
            r1 = pup;
        if (r == 2)
            r1 = pdown;
        if (r == 3)
            r1 = pleft;
        if (r == 4)
            r1 = pright;
        c = mv(numb, c, r1);
    }
    return c;
}

struct c mv(int numb[][4], struct c c, int pr)
{
    switch (pr) {
    case pup: // vverh
        if ((c.y0 - 1) >= 0) {
            numb[c.x0][c.y0] = numb[c.x0][c.y0 - 1];
            numb[c.x0][c.y0 - 1] = 0;
            c.y0--;
        }
        break;
    case pdown: // vverh
        if ((c.y0 + 1) <= 3) {
            numb[c.x0][c.y0] = numb[c.x0][c.y0 + 1];
            numb[c.x0][c.y0 + 1] = 0;
            c.y0++;
        }
        break;
    case pleft: // vverh
        if ((c.x0 - 1) >= 0) {
            numb[c.x0][c.y0] = numb[c.x0 - 1][c.y0];
            numb[c.x0 - 1][c.y0] = 0;
            c.x0--;
        }
        break;
    case pright: // vverh
        if ((c.x0 + 1) <= 3) {
            numb[c.x0][c.y0] = numb[c.x0 + 1][c.y0];
            numb[c.x0 + 1][c.y0] = 0;
            c.x0++;
        }
        break;
    }
    return c;
}

int game(int level)
{ // Igra
    int numb[4][4];
    enum keyboard pr;
    struct c c;
    c.x0 = 0;
    c.y0 = 0;
    c = fit(numb, c, level);
    while (1) {
        clear();
        // Dvizshenie
        // printf("\n%d %d - %d\n",x0,y0,numb[x0][y0]); // Test
        c = mv(numb, c, pr);
        drawgame(numb, 4);
        if (wich(numb) == 0) // proverka na pobedu
        {
            clear();
            move(9, 0);
            output_win();
            // printw("WIN");
            move(35, 56);
            printw("Press any key to continue");
            break;
        }
        pr = getch();
        // printf("%d",pr); // prigoditsa
        if (pr == 122) {
            clear();
            drawmenu();
            break;
            return 122;
        }
    }
    return 122;
}
