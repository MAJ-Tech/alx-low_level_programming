#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: buffer to be filled.
 * @b: constant to be filled in @s.
 * @n: amount of memory to be filled in @s.
 * Return: a pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *str = s;
	int i = 0;

	while (i < (int)n)
	{
		s[i] = b;
		i++;

	}
	return (str);
}
