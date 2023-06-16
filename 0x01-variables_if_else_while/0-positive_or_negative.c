#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * This program generates a random number and determines whether it is positive,
 * negative, or zero. It uses the srand and rand functions from the standard
 * library, along with the time function to seed the random number generator.
 * The generated random number is stored in the variable n. The program then
 * prints the value of n and determines its sign, providing an appropriate
 * message. The output includes the number, followed by whether it is positive,
 * negative, or zero, each on a new line.
 */

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("The number is: %d\n", n);

    if (n > 0) {
        printf("%d is positive.\n", n);
    }
    else if (n < 0) {
        printf("%d is negative.\n", n);
    }
    else {
        printf("%d is zero.\n", n);
    }

    return 0;
}
