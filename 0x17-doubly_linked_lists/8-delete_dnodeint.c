#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t
 * @head: First node of the dlistint_t
 * @index: Index of the node to be deleted
 *
 * Return: 1 on Success and -1 on Fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	curr = *head;
	i = 0;
	if (index == 0)
	{
		*head = curr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}

	while (curr != NULL && i < index)
	{
		curr = curr->next;
		i++;
	}

	if (curr == NULL)
		return (-1);
	curr->prev->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	free(curr);
	return (1);
}
