#include "stdio.h"

/**
 * main - fizz buz program
 *
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3))
			printf("Fizz");

		if (!(i % 5))
			printf("Buzz");

		if ((i % 3) && (i % 5))
			printf("%d", i);

		if (i != 100)
			printf(" ");

		else
			printf("\n");
	}

	return (0);
}
