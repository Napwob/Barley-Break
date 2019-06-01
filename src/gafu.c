#include <stdio.h>
#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
//#include "gafu.h"

||||||| merged common ancestors
#include "gafu.h"

=======
#include "gafu.h"
#include <ncurses.h>
>>>>>>> bff455cfebb4d2240747bee1f275aee7f36d7c96
struct c {
    int x0;
    int y0;
};

enum keyboard{p1=49, p2=50, p3=51, pz=122,pup=65,pdown=66,pleft=68,pright=67};


int wich(int n[4][4]) // proverka na pobedu
{
<<<<<<< HEAD
    numb[0][0] = 1;
    numb[1][0] = 0;
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
    c.x0 = 1;
||||||| merged common ancestors
    srand(time(NULL));
    int i, j = 0;
    enum keyboard r=p1;
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
=======
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = 1; j < 4; j++)
            if (n[j-1][i] > n[j][i])
                return 1;

    return 0;
}

void game()
{ // Igra
    int numb[4][4],i = 0, j = 0,nu=0;
    for(i=0;i<4;++i){
	for(j=0;j<4;++j){
		numb[j][i]=nu;
		nu++;}
}
    enum keyboard pr;
    int t; // pervoe za y vtoroe za x
    struct c c;
    c.x0 = 0;
>>>>>>> bff455cfebb4d2240747bee1f275aee7f36d7c96
    c.y0 = 0;
<<<<<<< HEAD

    return c;
}

int wich(int n[4][4]) // proverka na pobedu
{
    int i, j;

    for (i = 0; i < 4; i++){
        for (j = 1; j < 4; j++){
            printf("%d > %d  ",n[j-1][i],n[j][i]);

            if (n[j-1][i] > n[j][i]){

                return 1;}
                printf("\n");}
    }
    return 0;
}

void game()
{ // Igra
    int numb[4][4],i = 0, j = 0;
    enum keyboard pr;
    int t, x0, y0; // pervoe za y vtoroe za x
    struct c c;
    c = fit(numb, c);
    while (1) {
        system("cls");
||||||| merged common ancestors
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
    int numb[4][4],i = 0, j = 0;
    enum keyboard pr;
    int t, x0, y0; // pervoe za y vtoroe za x
    struct c c;
    c = fit(numb, c);
    while (1) {
        system("cls");
=======
int r;
enum keyboard r1;
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
 while (1) {
        clear();
>>>>>>> bff455cfebb4d2240747bee1f275aee7f36d7c96
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
<<<<<<< HEAD
            //system("cls");
            printf("WIN");
||||||| merged common ancestors
            system("cls");
            printf("WIN");
=======
            clear();
	    move(15,45);
            printw("WIN");
>>>>>>> bff455cfebb4d2240747bee1f275aee7f36d7c96
            break;
        }
        pr = getch();
        // printf("%d",pr); // prigoditsa
        if (pr == 122) {
            break;
}
    }
}


void drawgame(int x[4][4])
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
            printw("|%2d |", x[j][i]);
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
}
<<<<<<< HEAD

void drawgame(int numb[4][4])
{
    int i,j;
    for(i=0;i<4;++i){
        for(j=0;j<4;++j){
            printf("%2d ",numb[j][i]);
        }
        printf("\n");
    }
}

int main(){
game();



}
||||||| merged common ancestors
=======



>>>>>>> bff455cfebb4d2240747bee1f275aee7f36d7c96
