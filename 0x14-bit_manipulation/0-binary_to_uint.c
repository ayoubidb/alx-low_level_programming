#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if invalid input or NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int j;

	if (b == NULL)
		return (0);

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);

		result = (result * 2) + (b[j] - '0');
	}

	return (result);
}
