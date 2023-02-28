#include "main.h"
/**
 * puts2 - Pints a string to the stdout
 *
 * @str: The string to be printed
 *
 * Return: Has no eturn value (void)
 */
void  puts2(char *str)
{
	int i = 0;
	/** loop through the array to count len*/
	while (str[i])
	{
		if (str[i] != 0)
		{
			_putchar(*(str + i));
			i += 2;
		}
	}
	_putchar('\n');
}
