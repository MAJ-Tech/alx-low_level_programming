#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: A string.
 * @accept: a sub-string.
 * Return: the first occurance of any of the bytes of @accept in @s.
 */
char *_strpbrk(char *s, char *accept)
{
	char *str = accept;

	while (*s)
	{

		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		accept = str;
		s++;
	}
	return (NULL);
}
