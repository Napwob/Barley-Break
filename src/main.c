#include <conio.h>
#include <dos.h>
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
// Ilya COMMENTIRYI FUNKCII!!!
||||||| merged common ancestors
#define UP_ARROW 1
#define LEFT_ARROW 2
#define DOWN_ARROW 3
#define RIGHT_ARROW 4
//Ilya COMMENTIRYI FUNKCII!!!
=======
#define UP_ARROW 1
#define LEFT_ARROW 2
#define DOWN_ARROW 3
#define RIGHT_ARROW 4
// Ilya COMMENTIRYI FUNKCII!!!
>>>>>>> origin/Kadconner

<<<<<<< HEAD
struct c {
    int x0;
    int y0;
};

void drawmenu()
{ // NUFF SAID
    printf("1 - Game\n2 - Exit\n");
||||||| merged common ancestors

void drawmenu(){ // NUFF SAID
printf("1 - Game\n2 - Exit\n");
=======
void drawmenu()
{ // NUFF SAID
    printf("1 - Game\n2 - Exit\n");
>>>>>>> origin/Kadconner
}

<<<<<<< HEAD
void drawgame(int n[4][4])
{ // narisovat massiv
    printf("+==+==+==+==+\n|%2d|%2d|%2d|%2d|\n+==+==+==+==+\n|%2d|%2d|%2d|%2d|"
           "\n+==+==+==+==+\n|%2d|%2d|%2d|%2d|\n+==+==+==+==+\n|%2d|%2d|%2d|%"
           "2d|\n+==+==+==+==+\n\n To Leave press double 'Z'",
           n[0][0],
           n[1][0],
           n[2][0],
           n[3][0],
           n[0][1],
           n[1][1],
           n[2][1],
           n[3][1],
           n[0][2],
           n[1][2],
           n[2][2],
           n[3][2],
           n[0][3],
           n[1][3],
           n[2][3],
           n[3][3]);
||||||| merged common ancestors
void drawgame(int n[4][4]){ // narisovat massiv
    printf("+==+==+==+==+\n|%2d|%2d|%2d|%2d|\n+==+==+==+==+\n|%2d|%2d|%2d|%2d|\n+==+==+==+==+\n|%2d|%2d|%2d|%2d|\n+==+==+==+==+\n|%2d|%2d|%2d|%2d|\n+==+==+==+==+\n\n To Leave press 'Z'",n[0][0],n[0][1],n[0][2],n[0][3],n[1][0],n[1][1],n[1][2],n[1][3],n[2][0],n[2][1],n[2][2],n[2][3],n[3][0],n[3][1],n[3][2],n[3][3]);

=======
void drawgame(int n[4][4])
{ // narisovat massiv
    printf("+==+==+==+==+\n|%2d|%2d|%2d|%2d|\n+==+==+==+==+\n|%2d|%2d|%2d|%2d|"
           "\n+==+==+==+==+\n|%2d|%2d|%2d|%2d|\n+==+==+==+==+\n|%2d|%2d|%2d|%"
           "2d|\n+==+==+==+==+\n\n To Leave press 'Z'",
           n[0][0],
           n[0][1],
           n[0][2],
           n[0][3],
           n[1][0],
           n[1][1],
           n[1][2],
           n[1][3],
           n[2][0],
           n[2][1],
           n[2][2],
           n[2][3],
           n[3][0],
           n[3][1],
           n[3][2],
           n[3][3]);
>>>>>>> origin/Kadconner
}

struct c fit(int* numb[4][4], struct c c) // zoplnenit i peremeshat massiv
{
<<<<<<< HEAD
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
||||||| merged common ancestors
    int i,j=0,nu=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            n[i][j]=nu;
            //printf("%d - i\n%d - j\n%d - n\n\n",i,j,n); // Не удаляй мне потом пригодится
            nu++;
=======
    int i, j = 0, nu = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            n[i][j] = nu;
            printf("%d - i\n%d - j\n%d - n\n\n",i,j,n); // Не удаляй мне
            // потом пригодится
            nu++;
>>>>>>> origin/Kadconner
        }
    }
    drawgame(numb);
    return c;
}

int wich(int n[4][4]) // proverka na pobedu
{
<<<<<<< HEAD
    int i, j;

    for (i = 1; i < 4; i++)
        for (j = 1; j < 4; j++)
            if (n[i - 1][j - 1] > n[i][j])
                return 1;
||||||| merged common ancestors
    int i,j;
=======
    int i, j;
>>>>>>> origin/Kadconner

<<<<<<< HEAD
||||||| merged common ancestors
    for(i=1;i<4;i++)
        for(j=1;j<4;j++)
            if(n[i-1][j-1]>n[i][j]) return 1;
=======
    for (i = 1; i < 4; i++)
        for (j = 1; j < 4; j++)
            if (n[i - 1][j - 1] > n[i][j])
                return 1;
>>>>>>> origin/Kadconner
    return 0;
}

<<<<<<< HEAD
void game(int* uk)
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
||||||| merged common ancestors

void game(){ // Igra
    int numb[4][4],win=0,pr=0;
    while(1){
    fit(numb);
    drawgame(numb);
    win=wich(numb);
   // pr=getch();

    if(win == 0)// proverka na pobedu
    {
        system("cls");
        printf("WIN");
        break;
    }
    //return pr;
=======
void game()
{ // Igra
    int numb[4][4], win = 0, pr = 0;
    while (1) {
        fit(numb);
        //drawgame(numb);
        //win = wich(numb);
        // pr=getch();

        if (win == 0) // proverka na pobedu
        {
            system("cls");
            printf("WIN");
            break;
        }
        // return pr;
>>>>>>> origin/Kadconner
    }
}

int main()
{
<<<<<<< HEAD
    int menu = 0, uk = 122,
        where = 0; // where otvechaet za mestonaho... gde sidim
    drawmenu();
    while (1) {
        switch (uk) {
||||||| merged common ancestors
    int menu=0,uk=122,where;// where otvechaet za mestonaho... gde sidim

    while(1)
    {
        switch(uk)
        {
=======
    int menu = 0, uk = 122, where; // where otvechaet za mestonaho... gde sidim

    while (1) {
        switch (uk) {
>>>>>>> origin/Kadconner
        case 122: // Bukva Z
<<<<<<< HEAD
            if (where = 1) {
                where = 0;
                system("cls");
                drawmenu();
            }
||||||| merged common ancestors
            system("cls");
            drawmenu();
            break;
        case 49: //Cifra 1
            system("cls");
            game();
            break;
        case 50: //Cifra 2
            system("cls");
            return 0;
=======
            system("cls");
            drawmenu();
            break;
        case 49: // Cifra 1
            system("cls");
            game();
            break;
        case 50: // Cifra 2
            system("cls");
            return 0;
>>>>>>> origin/Kadconner
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
                system("cls");
                return 0;
                break;
            }
        }
        uk = getch();
    }
    return 0;
}
<<<<<<< HEAD
||||||| merged common ancestors


















=======

>>>>>>> origin/Kadconner
