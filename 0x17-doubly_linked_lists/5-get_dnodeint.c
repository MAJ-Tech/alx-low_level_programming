#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: The first node of the list
 * @index: index of the nth node
 *
 * Return: A pointer to the nth node of index or NULL if out of bound
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr;

	if (head == NULL)
		return (NULL);

	i = 0;
	curr = head;
	while (curr != NULL)
	{
		if (i == index)
		{
			return (curr);
		}
		i++;
		curr = curr->next;
	}
	return (NULL);
}
