#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: first node in the list to be printed.
 *Return: the number of nodes printed.
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	listint_t *curr = (listint_t *) h;

	while (curr != NULL)
	{
		printf("%i\n", curr->n);
		counter++;
		curr = curr->next;
	}
	return (counter);
}
