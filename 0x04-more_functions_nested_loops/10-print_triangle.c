#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
			_putchar(' ');

		for (k = j; k < size; k++)
			_putchar('#');

		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
