#include "main.h"
#include <stdio.h>
/**
 * get_bit - A  function that returns the value of a bit at a given index.
 * @n: the integer to get bit from.
 * @index: The index of the bit to get.
 * Return: Bit value or -10n failure.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
