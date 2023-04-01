#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free a list_t list.
 * @head: first node in the list_t.
 * Return: void(Has no return value).
 */

void free_list(list_t *head)
{
	list_t *curr = head;

	while (head)
	{
		curr = head;

		head = head->next;
		free(curr->str);
		free(curr);
	}
	free(head);
}
