#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes the funtion given to @array on each @size elements
 * @array: An array of integers
 * @size: The size of the array
 * @action: The function pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	if(array && action)
		while(i < size)
		{
			action(array[i]);
			i++;
		}
}
