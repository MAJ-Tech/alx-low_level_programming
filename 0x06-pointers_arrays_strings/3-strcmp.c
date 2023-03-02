#include "main.h"

/**
 * _strcmp - Compare @s1 to @s2.
 * @s1: A string.
 * @s2: A string.
 *
 * Return: 0 (@s1 == @s2) <0 (@s1 < @s2) >0 (@s1 > @s2).
 */
int _strcmp(char *s1, char *s2)
{
	return (*s1 - *s2);
}
