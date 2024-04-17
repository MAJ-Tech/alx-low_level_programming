#include "main.h"
#include <stddef.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: A string to search in.
 * @needle: a sub-string to locate in @haystack.
 * Return: A pointer to the beginning of the located substring,
or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *starh = haystack, *starn = needle;

	while (*haystack)
	{
		starh = haystack;

		needle = starn;

		while (*haystack == *needle)
			haystack++, needle++;

		if (*needle == '\0')
			return (haystack);

		haystack = starh + 1;
	}

	return (NULL);
}
