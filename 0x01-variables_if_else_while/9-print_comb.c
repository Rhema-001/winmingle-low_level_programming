#include <stdio.h>
#include <stdlib.h>

/**
  * Author: Thompson Rhema Faith
  * Program: Winmingle Community C Training
  * Description: print all possible combinations of single-digit numbers separated by commas and aspaces
  */

int main(void) {

    int X;

    for (X = 0; X<=9; X++) {
        putchar(X + '0');

        if (!(X == 9)) {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return(0);

}
