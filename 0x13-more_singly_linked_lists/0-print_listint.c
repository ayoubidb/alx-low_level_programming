#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while(h)
	{
		prinntf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return(node);
}
