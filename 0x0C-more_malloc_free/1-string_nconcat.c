#include <stdio.h>
#include <stdlib.h>
#include "main.h"

unsigned int _strlen(char *s);
/**
 * string_nconcat - Concanate two strings.
 * @s1: A string first passed.
 * @s2: A string.
 * @n: integer number of string to concatnate.
 * Return: A pointer to a string of two join strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1, lens2, i;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	lens1 = _strlen(s1);

	if (s2 == NULL)
		s2 = "";
	lens2 = _strlen(s2);

	if (n >= lens2)
		n = lens2;

	new_str = malloc(sizeof(char) * (lens1 + n + 1));

	if (new_str == NULL)
		return (NULL);

	i = 0;
	while (*s1)
	{
		new_str[i]  = *s1;
		s1++;
		i++;

	}

	while (n != 0)
	{
		new_str[i] = *s2;
		s2++;
		i++, n--;
	}

	new_str[i] = '\0';

	return (new_str);
}

/**
 * _strlen - cal the len of a string @s.
 * @s: A string.
 * Return: length of @s.
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
