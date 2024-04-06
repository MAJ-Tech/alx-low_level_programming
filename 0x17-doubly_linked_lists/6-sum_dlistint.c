#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - Sum of all the data (n) of a dlistint_t linked list
 * @head: First node
 *
 * Return: The sum of all data(n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
