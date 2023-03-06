#include "main.h"
#include <stddef.h>
/**
 * _strchr - a function that locates a character in a string.
 * @s: a string to search from.
 * @c: a character to search.
 *
 * Return: a pointer to the first occurrence of the character @c.
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
