#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The code generates a random number and determines its last digit. Then, it prints a message stating whether the last digit is greater than 5, equal to 0, or less than 6 and not 0.
 *
 * Return: Always 0.
*/

int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if(m > 5)
printf("Last digit of %d is %d and is greater than 5", n, m);
    else if(m == 0)
printf("Last digit of %d is %d and is 0", n, m);
    else
printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
	return (0);
}
