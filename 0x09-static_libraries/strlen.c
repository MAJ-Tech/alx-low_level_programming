#include "main.h"
/**
 * _strlen - check the lenght of a string.
 *
 * @s: The string to be check
 *
 * Return: int (len of the string
 */
int _strlen(char *s)
{
	int i = 0;
	/** loop through the array to count len*/
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
