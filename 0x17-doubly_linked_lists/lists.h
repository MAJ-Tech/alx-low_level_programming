#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
/*
 * struct dlistint_t - A node of a doubly linked list.
 * @n: An int value stored in a node.
 * @next: Pointer to the next node.
 * @prev: Pointer to the previous node.
 *
 * Description: You can use paragraphs to describe arguments
 * using this method.
 */
typedef struct dlistint_t
{
	int n;
	/**
	 * struct dlistint_t - A pointer to the next node.
	 */
	struct dlistint_t *next;
	struct dlistint_t *prev;
} dlistint_t;





/** FUNCTION DEFINATION */
size_t print_dlistint(const dlistint_t *h);


#endif
