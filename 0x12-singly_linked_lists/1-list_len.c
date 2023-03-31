#include "lists.h"

/**
 * list_len - A function that gets the number of nodes o\
f linked list
 * @h: head of linked list
 * Return: number of nodes as size_t
 */

size_t list_len(const list_t *h)
{
	unsigned int number_nodes = 0;

	while (h)
	{
		number_nodes++;
		h = h->next;
	}
	return (number_nodes);
}
