#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *s);
/**
 * str_concat - Concanate two strings.
 * @s1: A string first passed.
 * @s2: A string.
 * Return: A pointer to a string of two join strings.
 */
char *str_concat(char *s1, char *s2)
{
	int len, i;
	char *new_str, *rtn_str;

	len = _strlen(s1) + _strlen(s2);
	new_str = malloc(sizeof(char) * (len + 1));
	rtn_str = new_str;
	i = 0;

	if (new_str == NULL)
		return (NULL);

	while (*s1)
	{
		new_str[i] = *s1;
		s1++;
		i++;
	}

	while (*s2)
	{
		new_str[i] = *s2;
		s2++;
		i++;
	}
	new_str[i] = '\0';

	return (rtn_str);
}

/**
 * _strlen - cal the len of a string @s.
 * @s: A string.
 * Return: length of @s.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
