#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Create an array of chars initialize with a char.
 * @size: size of the array to create.
 * @c: pointer to the array of characters.
 * Return: a pointer to character.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *str;

	str = malloc(sizeof(c) * size);

	if (str == NULL || !size)
		return (NULL);

	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
