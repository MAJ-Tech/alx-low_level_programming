#include "main.h"
/**
 * flip_bits - A function that returns the number of bits you would need to.
 * flip to get from one number to another.
 * @n: The integer to flip.
 * @m: New integer to flip to.
 * Return: The number of bits flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits = 0;
	unsigned long int max_bits = 0x01;

	for (; max_bits <= (n ^ m); max_bits <<= 1)
	{
		if (max_bits & (n ^ m))
			num_bits++;
	}
	return (num_bits);
}
