#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *              starting from 00:00 to 23:59.
 *
 *Return: void
 */

void jack_bauer(void)
{
	int hours;
	int minuts;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minuts = 0; minuts <= 59; minuts++)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(minuts / 10 + '0');
			_putchar(minuts % 10 + '0');
			_putchar('\n');
		}
	}
}
