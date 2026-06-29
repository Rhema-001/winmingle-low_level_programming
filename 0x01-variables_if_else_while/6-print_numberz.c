#include <stdio.h>
#include <stdlib.h>

/**
  * Author: Thompson Rhema Faith
  * Program: Winmingle Community C Training
  * Description: print all single-digit numbers of base 10 starting from 0, using int
  */

int main(void) {

    int X = 0;

    while (X < 10) {
        putchar(48 + X);
        X++;
    }
    putchar('\n');
    return(0);

}
