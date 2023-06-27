#include "main.h"

/**
 * puts2 - a function that prints every other character of a string, starting
 *         with the first character, followed by a new line.
 * @str: the string to be printed
 */

void puts2(char *str)
{
	int index = 0;

	while (str[index])
	{
		_putchar(str[index]);

		if (str[index + 1] == '\0')
			break;
		index += 2;
	}

	_putchar('\n');
}
