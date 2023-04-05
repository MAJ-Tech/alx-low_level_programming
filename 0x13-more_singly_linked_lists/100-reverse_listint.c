#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t linked list.
 * @head: The first node in a list.
 * Return: A  pointer to the first node of the reversed list,
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *prev = NULL;

	while (current)
	{
		listint_t *next = current->next;

		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
