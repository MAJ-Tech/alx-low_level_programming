#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - Free a DLL
 * @head: A pointer to the first node of the DLL
 *
 * Return: void fun
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	curr = head;
	while (curr->next != NULL)
	{
		curr = curr->next;
		free(curr->prev);
	}
	free(curr);
}
