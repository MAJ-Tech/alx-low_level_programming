#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - afunction that allocate memory using malloc.
 * @b: unsigned input integer.
 * Return: A pointer to allocated memory or NULL.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
