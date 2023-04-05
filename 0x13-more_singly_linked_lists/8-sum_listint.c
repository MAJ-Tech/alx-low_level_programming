#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint - A function that returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: The first node in the list.
 * Return: An int (sum of all the data of the list).
 */

int sum_listint(listint_t *head)
{
	listint_t *curr = head;
	int sum = 0;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
