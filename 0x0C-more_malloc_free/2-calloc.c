#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocate memory for an array using malloc.
 * @nmemb: Number of elements.
 * @size: Size of bytes for each member.
 * Return: A pointer to memory allocated or NULL if fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *array_space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array_space = malloc(nmemb * size);

	if (array_space == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(array_space + i) = 0;

	return (array_space);
}
