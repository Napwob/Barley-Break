#ifndef GAFU_H
#define GAFU_H
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int wich(int n[][6],int matrix);
struct c mv(int numb[][6], struct c c, int r,int matrix);
struct c fit(int numb[][6], struct c c,int level,int matrix);
int game(int level,int matrix);

#endif
