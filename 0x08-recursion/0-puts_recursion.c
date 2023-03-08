#include "main.h"
/**
 * _puts_recursion - prints a string of characters.
 * @s: a string.
 *
 * Return: void (has no return value)
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;

	_puts_recursion(s);

}
