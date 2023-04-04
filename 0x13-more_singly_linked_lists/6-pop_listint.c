#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - A function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: First node in the list.
 * Return: The data (n) of the removed node.
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (n);
}
