<<<<<<< HEAD
||||||| merged common ancestors
#ifndef GAFU_H
#define GAFU_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct c fit(int* numb[4][4], struct c c);
int wich(int n[4][4]);
void game();

#endif
=======
#ifndef GAFU_H
#define GAFU_H
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int wich(int n[4][4]);
struct c fit(int numb[][4], struct c c);
struct c moveit(int numb[][4], struct c c,int pr)
int game();

#endif
>>>>>>> Napwob
