#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char.
 * @s: pointer to a pointer.
 * @to: cha
 * Return: void (no return value).
 */
void set_string(char **s, char *to)
{
	*s = to;
}
