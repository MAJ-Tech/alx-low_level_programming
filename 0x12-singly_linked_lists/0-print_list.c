#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - A function that prints a linked list
 * @h: pointer t  head of list
 * Return: number of nodes in list as size_t
 */

size_t print_list(const list_t *h)
{
	unsigned int number_nodes = 0;

	while (h != NULL)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		number_nodes++;
	}

	return (number_nodes);
}
