#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - check for digits from 0 to 9
 *@n: nu
 *Return: 1 (true) 0 (false)
 */
void print_diagonal(int n)
{
	int i = 0, j;
	/** */
	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
