#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gafu.h"
#include <ncurses.h>
struct c {
    int x0;
    int y0;
};

enum keyboard{p1=49, p2=50, p3=51, pz=122,pup=65,pdown=66,pleft=68,pright=67};


int wich(int n[4][4]) // proverka na pobedu
{
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = 1; j < 4; j++)
            if (n[j-1][i] > n[j][i])
                return 1;

    return 0;
}

struct c fit(int* numb[4][4], struct c c)
{
        int r;
        enum keyboard r1;
        for(i=0;i<4;++i){
            for(j=0;j<4;++j){
                numb[j][i]=nu;
                nu++;
            }
        }
           for (i = 0; i < 10000; i++) {
        r = rand() % 5;
        if (r == 1)
            r1 = pup;
        if (r == 2)
            r1 = pdown;
        if (r == 3)
            r1 = pleft;
        if (r == 4)
            r1 = pright;
        switch (r1) {
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
    }
    return c;
}

int game()
{ // Igra
    int numb[4][4],i = 0, j = 0,nu=0;
    enum keyboard pr;
    int t; // pervoe za y vtoroe za x
    struct c c;
    c.x0 = 0;
    c.y0 = 0;
    c=fit(numb,c);
    while (1) {
        clear();
        // Dvizshenie
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
        // printf("\n%d %d - %d\n",x0,y0,numb[x0][y0]); // Test
        drawgame(numb);
        if (wich(numb) == 0) // proverka na pobedu
        {
            clear();
            move(15,45);
            printw("WIN");
            break;
        }
        pr = getch();
        // printf("%d",pr); // prigoditsa
        if (pr == 122) {
            break;
            return pz;
        }
    }
}






