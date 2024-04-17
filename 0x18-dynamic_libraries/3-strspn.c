#include "main.h"
#include <stddef.h>
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: a string.
 * @accept: a substring.
 *
 * Return: the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *str = accept;

	while (*s != ' ')
	{
		while (*accept)
		{
			if (*s == *accept)
				count += 1;
			accept++;
		}
		accept = str;
		s++;
	}
	return (count);
}
