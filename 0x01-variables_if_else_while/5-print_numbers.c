#include <stdio.h>
#include <stdlib.h>

/**
  * Author: Thompson Rhema Faith
  * Program: Winmingle Community C Training
  * Description: print all single-digit numbers of base 10, starting from 0
  */

int main(void) {

    char X = '0';

    while (X <= '9') {
        putchar(X);
        X++;
    }
    putchar('\n');
    return(0);

}
