#include "lists.h"

/**
 * delete_nodeint_at_index - A  function that deletes the node at index
 * @index of a listint_t linked list.
 * @head: first node in the listint_t.
 * @index: Index of the node to be deleted.
 * Return: 1 (Success) -1 (Fail).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *temp;
	unsigned int i = 0;


	if (head == NULL || *head == NULL)
		return (-1);

	curr = *head;

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	while (i < index - 1)
	{
		if (curr->next == NULL)
			return (-1);
		i++;
		curr = curr->next;
	}

	temp = curr->next;
	curr->next = temp->next;
	free(temp);
	return (1);
}
