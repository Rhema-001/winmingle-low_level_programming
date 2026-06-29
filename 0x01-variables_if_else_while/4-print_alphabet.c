#include <stdio.h>
#include <stdlib.h>

/**
  * Author: Thompson Rhema Faith
  * Program: Winmingle Community C Training
  * Description: printing the letters of the  alphabet except q and e  in lower case using only 3  putchars
  */

int main(void) {

    char X = 'a';

    while (X <= 'z') {
        if (X != 'e' && X != 'q') {
            putchar(X);
        }

        X++;
    }
    putchar('\n');
    return(0);

}
