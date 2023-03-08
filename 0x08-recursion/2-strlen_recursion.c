#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string
 * @s: A string to print.
 *
 * Return: length of @s.
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
