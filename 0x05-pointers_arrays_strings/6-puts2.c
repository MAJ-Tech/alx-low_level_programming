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
	int i = 0, j = 0;
	/** loop through the array to count len*/
	while (str[i] != '\0')
		i++;
	i -= 1;
	for (; j <= i; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
