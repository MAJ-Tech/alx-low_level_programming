#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - A  function that adds a new node at
 * the end of a listint_t list.
 * @head: First node in the list.
 * @n: Node to be added to the list.
 * Return: A pointer to the added node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;
		new_node->n = n;
		curr->next = new_node;
		new_node->next = NULL;
	}
   	return (new_node);
}
