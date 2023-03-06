#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: buffer to be filled.
 * @src: constant to be filled in @s.
 * @n: amount of memory to be filled in @s.
 * Return: a pointer to the memory area @s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *str = dest;

	while (n--)
	{
		*dest = *src;
		dest++, src++;
	}

	return (str);
}
