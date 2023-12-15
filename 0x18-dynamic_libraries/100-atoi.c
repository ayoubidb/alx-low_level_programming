#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: the string to be converted to integer
 *
 * Return: the integer
 */

int _atoi(char *s)
{
	int i = 0;
	int checker = 0;
	int factor = 1;
	int n = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			factor *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			checker = 1;
			n = n * 10 + (s[i] - '0') * factor;
		}

		else if (checker)
			return (n);

		i++;
	}

	return (n);
}
