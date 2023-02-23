#include "main.h"
#include <stdio.h>
/**
 * print_numbers - check for digits from 0 to 9
 *
 *Return: 1 (true) 0 (false)
 */
void print_numbers(void)
{
	int i = '0';
	/** */
	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
