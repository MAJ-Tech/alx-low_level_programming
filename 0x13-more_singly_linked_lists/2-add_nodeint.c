#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint - A that adds a new node at the beginning of a listint_t list.
 * @head: First node is the list.
 * @n: Node to be added to the list.
 * Return: A pointer to the added node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
