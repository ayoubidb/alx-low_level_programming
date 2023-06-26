/**
 *swap_int - swaps the values of two integers.
 *@a: first integer to be swaped
 *@b: second integer to be swaped
 *
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
