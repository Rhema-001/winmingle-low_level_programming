#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * Author: Thompson Rhema Faith
  * Program: Winmingle Community C Training
  * Description: Assigning a random number to the variable n each time it runs and then prints whether the number is positive, negative or zero 
  */

int main(void) {
    int n;
    srand(time(0));

    n = rand() - RAND_MAX / 2;

    if (n > 0)
        printf("%i is positive\n" , n);
    else if (n < 0)
        printf("%i is negative\n" , n);
    else
        printf("%i is zero\n" , n);

    return(0);

}
