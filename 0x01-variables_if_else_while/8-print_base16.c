#include <stdio.h>
#include <stdlib.h>

/**
  * Author: Thompson Rhema Faith
  * Program: Winmingle Community C Training
  * Description: print all numbers of base 16 in lower case
  */

int main(void) {

    char X = '0';

    while (X <= '9') {
        putchar(X);
        X++;
    }

    X = 'a';

    while (X <= 'f') {
        putchar(X);
        X++;
    }
    putchar('\n');
    return(0);

}
