#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program that prints the number of arguments passed into it.
  * @argc: the number of arguments passed into the program
  * @argv: an array of the arguments passed
  * Return: return 0 always
  */
int main(int argc, char const *argv[])
{
	(void)*argv;

	printf("%d\n", argc - 1);

	return (0);
}
