/**
 * _strlen - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
        int length = 0;
        int i;

        for (i = 0; *s != '\0'; i++)
                length++;

        return length;
}
