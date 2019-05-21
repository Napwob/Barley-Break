#include <windows.h>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <time.h>
#include <stdio.h>
#include <dos.h>
#define UP_ARROW 1
#define LEFT_ARROW 2
#define DOWN_ARROW 3
#define RIGHT_ARROW 4
#include <iostream>

void drawmenu(){
printf("1 - Game\n2 - Exit\n");
}

void drawgame(int *n){
    printf("+=+=+=+\n|%d|%d|%d|\n+=+=+=+\n|%d|%d|%d|\n+=+=+=+\n|%d|%d|%d|\n+=+=+=+\n",n[0],n[1],n[2],n[3],n[4],n[5],n[6],n[7],n[8]);

}

void game(){
    int numb[8],i;
    for(i=0;i<8;i++)
        numb[i]=i;
    drawgame(numb);
}

int main()
{
    int menu=0,i;
    drawmenu();
    while(1)
    {
    menu=getch();
    //printf("%d",menu); Âàæíî
    if(menu==49)
    {
        system("cls");
        game();
    }

    if(menu==50)
    {
        system("cls");
        return 0;
    }
    }
}
