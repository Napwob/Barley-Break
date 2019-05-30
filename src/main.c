#include <windows.h>
#include <conio.h>
#include <time.h>
#include <stdio.h>
#include <dos.h>
#define UP_ARROW 1
#define LEFT_ARROW 2
#define DOWN_ARROW 3
#define RIGHT_ARROW 4
// Ilya COMMENTIRYI FUNKCII!!!

void drawmenu()
{ // NUFF SAID
    printf("1 - Game\n2 - Exit\n");
}

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
}

void fit(int* n[4][4]) // zoplnenit i peremeshat massiv
{
    int i, j = 0, nu = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            n[i][j] = nu;
            printf("%d - i\n%d - j\n%d - n\n\n",i,j,n); // Не удаляй мне
            // потом пригодится
            nu++;
        }
    }
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
    }
}

int main()
{
    int menu = 0, uk = 122, where; // where otvechaet za mestonaho... gde sidim

    while (1) {
        switch (uk) {
        case 122: // Bukva Z
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
            break;
        }
        uk = getch();
    }
    return 0;
}

