#include "main.h"

/**
 * _strncpy - Copy @src to @dest.
 * @dest: destination string.
 * @src: Source string.
 * @n: number of bytes to copy from @src.
 * Return: a pointer to a dest string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *str = dest, *start = src;
	int i = 0, j = 0;
	/** lopps*/
	while (*src++)
		i++;
	i++;
	if (n > i)
		n = i;
	src = start;
	for (; j < n; j++)
		*dest++ = *src++;

	return (str);
}
