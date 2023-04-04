#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - A function that frees a listint_t list..
 * @head: The first node in the list to be freed.
 * Return: Void.
 */

void free_listint(listint_t *head)
{
	listint_t *curr = head;

	while (curr)
	{
		listint_t *temp = curr;

		curr = curr->next;
		free(temp);
	}
}
