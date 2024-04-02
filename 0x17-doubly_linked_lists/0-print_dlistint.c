#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: Head of a doubly linked list
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t num_nodes = 0;
	/** loop throuh the list using curr */
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		num_nodes += 1;
		curr = curr->next;
	}
	return (num_nodes);
}
