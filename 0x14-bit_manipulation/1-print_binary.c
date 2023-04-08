#include "main.h"

/**
 * print_binary - A function that prints the binary representation of a number.
 * @n: inte to be printed.
 * Return: Void ( Has no return value).
 */

void print_binary(unsigned long int n)
{
	unsigned long int flags = 0, max_uint_bits;

	if (n == 0)
		_putchar('0');

	max_uint_bits = 1 << 15;
	while (max_uint_bits)
	{
		if (flags == 1 && (n & max_uint_bits) == 0)
			_putchar('0');
		else if ((n & max_uint_bits) != 0)
		{
			_putchar('1');
			flags = 1;
		}
		max_uint_bits = max_uint_bits >> 1;
	}
}
