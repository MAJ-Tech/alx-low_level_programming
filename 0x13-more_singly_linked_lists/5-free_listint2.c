#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - A function that frees a listint_t list.
 * And set the head(first node) to NULL.
 * @head: first node in the list.
 * Return: Void.
 */

void free_listint2(listint_t **head)
{
	listint_t *curr = *head;

	while (curr)
	{
		listint_t *temp = curr;

		curr = curr->next;
		free(temp);
	}

	*head = NULL;
}
