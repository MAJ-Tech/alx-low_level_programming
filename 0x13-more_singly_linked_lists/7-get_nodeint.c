#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - A function that returns the nth node of a
 * listint_t linked list.
 * @head: First node in the list.
 * @index: the index to search for.
 * Return: The nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int counter = 0;

	while (curr != NULL)
	{
		if (counter == index)
			return (curr);
		counter++;
		curr = curr->next;
	}
	return (NULL);
}
