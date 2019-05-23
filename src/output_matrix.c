#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define UP_ARROW 1
#define LEFT_ARROW 2
#define DOWN_ARROW 3
#define RIGHT_ARROW 4
int x[4][4];
void matrix()
{
    int k = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            x[i][j] = k;
            k++;
        }
    }
}
void output()
{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("|");
            printf("%4d  ", x[i][j]);
        }
        printf("|\n");
    }
}

int main()
{
    matrix();
    output();
    return 0;
}
