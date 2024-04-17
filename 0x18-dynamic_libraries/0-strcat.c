#include "main.h"
/**
 * _strcat - Concanate two strings.
 * @dest: string1
 * @src: string2
 * Return: a pointer to a concanated string.
 */
char *_strcat(char *dest, char *src)
{
	char *str = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (str);
}
