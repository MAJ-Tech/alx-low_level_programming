#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - A function that returns the number of elements
 * in a linked listint_t list.
 * @h:First node in the listed.
 * Return: The number of nodes in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	listint_t *curr = (listint_t *)h;

	while (curr != NULL)
	{
		counter++;
		curr = curr->next;
	}

	return (counter);
}
