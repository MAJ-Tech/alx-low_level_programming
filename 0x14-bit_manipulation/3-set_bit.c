#include "main.h"
#include <stdio.h>
/**
 * set_bit - A  function that sets the value of a bit to 1 at a given index.
 * @n: An integer to set bits in.
 * @index: Where to set bit.
 * Return: 1 (Successs) -1 (Fail).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bit = 1 << index;

	if (max_bit == 0)
		return (-1);

	*n |= max_bit;

	return (1);
}
