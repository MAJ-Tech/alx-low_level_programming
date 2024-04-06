#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the first node
 * @idx: where (position) node to be added
 * @n: Data of node to be added
 *
 * Return: A pointer to the new node or NULL if Fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *curr;
	dlistint_t *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	curr = *h;
	i = 0;
	while (curr != NULL)
	{
		if (i == idx)
		{
			new_node->next = curr;
			new_node->prev = curr->prev;
			curr->prev->next = new_node;
			curr->prev = new_node;
			return (new_node);
		}
		curr = curr->next;
		i++;
	}
	free(new_node);
	if (i == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
