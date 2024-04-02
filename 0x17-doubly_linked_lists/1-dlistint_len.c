#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - The number of elements in a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr;
	size_t num_nodes = 0;

	for (curr = h; curr != NULL; curr = curr->next)
		num_nodes += 1;
	return (num_nodes);
}
