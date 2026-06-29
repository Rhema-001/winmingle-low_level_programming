#include <stdio.h>
#include <stdlib.h>

/**
  * Author: Thompson Rhema Faith
  * Program: Winmingle Community C Training
  * Description: printing alphabet in lower case and uppercase using only putchar
  */

int main(void) {

    char X = 'a';

    while (X <= 'z') {
        putchar(X);
        X++;
    }

    X = 'A';

    while (X <= 'Z') {
        putchar(X);
        X++;
    }
    putchar('\n');
    return(0);

}
