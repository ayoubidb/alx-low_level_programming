/**
 *swap_int: swaps the values of two integers.
 *
 *return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
