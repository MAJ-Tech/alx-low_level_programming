#include "main.h"
/**
 * puts2_half - Prints the last half of a string to the stdout
 *
 * @str: The string to be printed
 *
 * Return: Has no eturn value (void)
 */
void  puts_half(char *str)
{
	int i = 0, j = 0;
	/** loop through the array to count len*/
	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i + 1) / 2;
	}
	for (; j <= i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
