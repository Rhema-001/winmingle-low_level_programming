#include <stdio.h>
#include <stdlib.h>

/**
  * Author: Thompson Rhema Faith
  * Program: Winmingle Community C Training
  * Description: printing alphabet in lower case and in the reverse order using only putchar
  */

int main(void) {

    char X = 'z';

    while (X >= 'a') {
        putchar(X);
        X--;
    }
    putchar('\n');
    return(0);

}
