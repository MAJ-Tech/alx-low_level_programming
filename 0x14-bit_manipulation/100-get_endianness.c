#include "main.h"
#include <stdio.h>
/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 1 (Little-endian) 0 (Big-endian).
 */
int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
