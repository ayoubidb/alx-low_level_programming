/**
 * rev_string -  a function that reverses a string.
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int length = 0, i = 0, temp;
/* Calculate the length of the string */
	while (s[length])
		length++;
/* Reverse the string */
	while (i < length / 2)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
		i++;
	}
}
