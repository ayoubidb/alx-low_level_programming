/**
 * _isalpha - checks for alphabetic character.
 * @c : The character to be chacked
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 *         0 otherwise
 */

int _isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	return (1);

	return (0);
}
