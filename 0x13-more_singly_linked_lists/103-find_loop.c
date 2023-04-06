#include "lists.h"

/**
 * find_listint_loop - A function that find a loop in a link list listint_t.
 * @head: First node in the list listint_t.
 * Return: A pointer to the node where the loop starts or NULL if no loop.
 */
listint_t *find_listint_loop(listint *head)
{
	listint_t *first_node = head, *leading_node = head, *curr = head;

	while (curr != NULL)
	{
		first_node = first_node->next;
		leading_node = leading_node->next->next;
		if (first_node == leading_node)
			return (first_node);
		curr = curr->next;
	}
	return (NULL);
}
