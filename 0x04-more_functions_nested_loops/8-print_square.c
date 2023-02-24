#include "main.h"
#include <stdio.h>
/**
 * print_square - check for digits from 0 to 9
 *@size: nu
 *Return: 1 (true) 0 (false)
 */
void print_square(int size)
{
	int i, j;
	/** */
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
