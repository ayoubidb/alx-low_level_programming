#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int times;
	int number;
	int res;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');
		for (times = 1; times <= 9; times++)
		{
			_putchar(',');
			_putchar(' ');

			res = number * times;
			if (res < 10)
				_putchar(' ');
			else
				_putchar(res / 10 + '0');

			_putchar(res % 10 + '0');
		}

		_putchar('\n');
	}
}
