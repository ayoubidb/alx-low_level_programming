#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/

int main(int argc, char *argv[])
{
	int ff, ft;
	int n1 = 1024, n2 = 0;
	char b[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	ff = open(argv[1], O_RDONLY);
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
		       | S_IRGRP | S_IWGRP | S_IROTH);
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(ff), exit(99);
	}
	while (n1 == 1024)
	{
		n1 = read(ff, b, 1024);
		if (n1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		n2 = write(ft, b, n1);
		if (n2 < n1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(ff) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff), exit(100);

	if (close(ft) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft), exit(100);

	return (0);
}
