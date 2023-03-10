#include "main.h"
/**
 * _puts - Pints a string to the stdout
 *
 * @s: The string to be printed
 *
 * Return: Has no eturn value (void)
 */
void  _puts(char *s)
{
	int i = 0;
	/** loop through the array to count len*/
	while (s[i] != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
