#include <stdio.h>
#include <stdlib.h>

/**
  * Author: Thompson Rhema Faith
  * Program: Winmingle Community C Training
  * Description: print all possible different combinations of three digits
  */

int main(void) {

    int X;
    int Y;
    int Z;

    for (X = 0; X <= 7; X++) {
    for (Y = X+1; Y <= 8; Y++) {
    for (Z = X+2; Z <= 9; Z++) {

    putchar(X + '0');
    putchar(Y + '0');
    putchar(Z + '0');
        
    if(!(X == 7 && Y == 8 && Z == 9)) {
    putchar(',');
    putchar(' ');
    }
    }
    }
    }
    putchar('\n');
    return(0);

}
