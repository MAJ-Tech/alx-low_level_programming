#include "main.h"
#include <stdlib.h>


#define ONE 1
/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * @b: A pointer to a string.
 * Return:  the converted number, or 0
 * if there is one or more chars in the string b that is not 0 or 1 or b is NUL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = ONE, total = 0, str_len = 0, i = 0, len;
	char *temp = (char *)b;

	if (b == NULL)
		return (0);

	while (*temp++)
		str_len++;

	len = str_len;

	for (; i < len; i++)
	{
		if (b[str_len - ONE] != '0' && b[str_len - ONE] != '1')
			return (0);
		if (b[str_len - ONE] == '1')
			total += base;
		base *= 2;
		str_len--;
	}
	return (total);
}
