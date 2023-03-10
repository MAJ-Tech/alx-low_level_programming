#include "main.h"
#include <stdio.h>
/**
 * _strncat - Concanate two strings.
 * @dest: destination string.
 * @src: Source string.
 * @n: number of bytes to copy from @src.
 * Return: a pointer to a concanated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *str = dest, *start = src;
	int i = 0, j = 0;
	/** lopps*/
	while (*src++)
		i++;
	while (*dest)
		dest++;
	if (n > i)
		n = i;
	src = start;
	for (; j < n; j++)
		*dest++ = *src++;

	*dest = '\0';
	return (str);
}
