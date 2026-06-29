#include <stdio.h>
#include <stdlib.h>

/**
  * Author: Thompson Rhema Faith
  * Program: Winmingle Community C Training
  * Description: print all possible different combinations of two digits, using putchar and without ysing char variables
  */

int main(void) {

    int X;
    int Y;

    for (X = 0; X <= 8; X++) {
    for (Y = X+1; Y <= 9; Y++) {

    putchar(X + '0');
    putchar(Y + '0');
        
    if(!(X == 8 && Y == 9)) {
    putchar(',');
    putchar(' ');
    }
    }
    }
    putchar('\n');
    return(0);

}
