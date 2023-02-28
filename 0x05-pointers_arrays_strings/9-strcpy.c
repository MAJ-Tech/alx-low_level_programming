#include "main.h"
/**
 *_strcpy - Copy @src to @dest
 *
 * @src: the string to be coppied
 * @dest: the string to be coppied to.
 * Return: a string containing dest + src.
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;
	while (*src)
		*dest++ = *src++;
	return (aux);
}
