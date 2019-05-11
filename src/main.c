#include <windows.h>

#include <conio.h>
#include <time.h>
#include <stdio.h>
#include <dos.h>
#define UP_ARROW 1
#define LEFT_ARROW 2
#define DOWN_ARROW 3
#define RIGHT_ARROW 4
#define VK_NUMPAD1 5
#define VK_NUMPAD2 6
#include <locale.h>

void drawmenu(){
printf("1 - Game\n2 - Exit\n");
}

int main()
{
    while(1){
    int n,i;
    drawmenu();
    n=getch();
    if(n=6)return 0;
    }
}
