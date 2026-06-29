#include <stdio.h>
#include <stdlib.h>

/**
  * Author: Thompson Rhema Faith
  * Program: Winmingle Community C Training
  * Description: print all possible combinations of two-digit numbers
  */

int main(void) {

    int X;
    int Y;

    for (X = 0; X <= 98; X++) {
    for (Y = X+1; Y <= 99; Y++) {

    putchar((X / 10)  + '0');
    putchar((X % 10)  + '0');
    putchar(' ');
    putchar((Y / 10) + '0');
    putchar((Y % 10) + '0');
        
    if(!(X == 98 && Y == 99)) {
    putchar(',');
    putchar(' ');
    }
    }
    }
    putchar('\n');
    return(0);

}
