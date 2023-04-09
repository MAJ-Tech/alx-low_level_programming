#include "main.h"
/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index.
 * @n: The integer to clear a bit in.
 * @index: The index of the bit to be cleared.
 * Return: 1 (Success) -1 (Failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bit = 1;

	max_bit = ~(max_bit << index);
	if (max_bit == 0x00)
		return (-1);
	*n &= max_bit;
	return (1);
}
