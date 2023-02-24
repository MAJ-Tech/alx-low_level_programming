#include "main.h"
#include <stdio.h>
/**
 * print_line - check for digits from 0 to 9
 *@n: nu
 *Return: 1 (true) 0 (false)
 */
void print_line(int n)
{
	int i = 0;
	/** */
	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
