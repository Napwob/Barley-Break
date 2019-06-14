#include "menu.h"
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void drawmenu()
{
    initscr();
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    attron(A_BOLD);
    attron(COLOR_PAIR(1));
    curs_set(0);
    move(10, 68);
    printw("1)New game\n");
    move(15, 68);
    printw("2)Creators\n");
    move(20, 68);
    printw("3)Exit\n");
}

void Creators()
{
    printw("Vlad 'Napwob' Rusmanov\nIlya 'Kadconner' Kryukov\n\nPress 'Z' for "
           "back to Menu");
}

void output_win()
{

printw("         wwwwwww                 wwwwwwww                 wwwwwww     iiiiiiiiiiiiii        nnnnnnnnnn            nnnnnnn\n");            
printw("          wwwwwww               wwwwwwwwww               wwwwwww        iiiiiiiiii          nnnnnnnnnnn           nnnnnnn\n");  
printw("           wwwwwww             wwwwwwwwwwww             wwwwwww           iiiiii            nnnnnnnnnnnn          nnnnnnn\n");     
printw("            wwwwwww           wwwwwwwwwwwwww           wwwwwww             iiii             nnnnnnn nnnnn         nnnnnnn\n");
printw("             wwwwwww         wwwwwww  wwwwwww         wwwwwww              iiii             nnnnnnn  nnnnn        nnnnnnn\n");
printw("              wwwwwww       wwwwwww    wwwwwww       wwwwwww               iiii             nnnnnnn   nnnnn       nnnnnnn\n");   
printw("               wwwwwww     wwwwwww      wwwwwww     wwwwwww                iiii             nnnnnnn    nnnnn      nnnnnnn\n");
printw("                wwwwwww   wwwwwww        wwwwwww   wwwwwww                 iiii             nnnnnnn     nnnnn     nnnnnnn\n");
printw("       	         wwwwwww wwwwwww          wwwwwww wwwwwww                  iiii             nnnnnnn      nnnnn    nnnnnnn\n");            
printw("	          wwwwwwwwwwwww            wwwwwwwwwwwww                   iiii             nnnnnnn       nnnnn   nnnnnnn\n");        
printw("	           wwwwwwwwwww              wwwwwwwwwww                    iiii             nnnnnnn        nnnnn  nnnnnnn\n");
printw("                    wwwwwwwww                wwwwwwwww                     iiii             nnnnnnn         nnnnn nnnnnnn\n");
printw("                     wwwwwww                  wwwwwww                     iiiiii            nnnnnnn          nnnnnnnnnnnn\n");
printw("                      wwwww                    wwwww                    iiiiiiiiii          nnnnnnn           nnnnnnnnnnn\n"); 
printw("                       www                      www                   iiiiiiiiiiiiii        nnnnnnn            nnnnnnnnnn\n");
}

void levels()
{
    initscr();
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    attron(A_BOLD);
    attron(COLOR_PAIR(1));
    curs_set(0);
    move(10, 70);
    printw("New game\n");
    move(15, 70);
    printw("Creators\n");
    move(20, 70);
    printw("Exit\n");
    move(8, 82);
	printw("1)Easy");
	move(10, 82);
	printw("2)Normal");
	move(12, 82);
	printw("3)Hard");
   move(8, 95);
   printw("3x3");
   move(10, 95);
   printw("4x4");
   move(12, 95);
   printw("5x5");
}

void matrix()
{
    initscr();
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    attron(A_BOLD);
    attron(COLOR_PAIR(1));
    curs_set(0);
    move(10, 70);
    printw("New game\n");
    move(15, 70);
    printw("Creators\n");
    move(20, 70);
    printw("Exit\n");
    move(8, 82);
	printw("  Easy");
	move(10, 82);
	printw("  Normal");
	move(12, 82);
	printw("  Hard");
   move(8, 93);
   printw("1)3x3");
   move(10, 93);
   printw("2)4x4");
   move(12, 93);
   printw("3)5x5");
}


