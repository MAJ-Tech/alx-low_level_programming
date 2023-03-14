#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - check the lenght of a string.
 * @s: The string to be check.
 * Return: int (len of the string.
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * _strdup - dublicate a string @str.
 * @str: string.
 * Return: A pointer to a duplcate of @str.
 */
char *_strdup(char *str)
{
	unsigned int size = _strlen(str), i = 0;
	char *new_str, *start;

	new_str  = malloc(sizeof(char) * (size + 1));
	start = new_str;
	if (new_str == NULL || str == NULL)
		return (NULL);

	while (*str)
	{
		new_str[i] = *str;
		i++, str++;
	}
	new_str[i] = '\0';

	return (start);
}
