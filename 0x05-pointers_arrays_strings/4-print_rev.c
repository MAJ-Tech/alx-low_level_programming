#include "main.h"
/**
 * print_rev - Pints a string in revrse to the stdout
 *
 * @s: The string to be printed
 *
 * Return: Has no eturn value (void)
 */
void  print_rev(char *s)
{
	int i = 0;
	int j;
	/** Find the len of the array 's'*/
	while (s[i] != '\0')
	{
		i++;
	}
	/** Second loop to reverse string*/
	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
