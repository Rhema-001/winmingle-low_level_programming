#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * Author: Thompson Rhema Faith
  * Program: Winmingle Community C Training
  * Description: C program that prints the last digit of a random number n
  */

int main(void) {
    int n;
    int l;

    srand(time(0)); 
    n = rand();
    l = n % 10;

    if (l > 5)
        printf("Last digit of %i is %i and is greater than 5\n" , n, l);
    else if (l == 0)
        printf("Last digit of %i is %i and is equal to 0\n" , n, l);
    else if (l < 6)
        printf("Last figit of %i is %i and is less than  6 and not 0\n" , n, l);

    return(0);
}
