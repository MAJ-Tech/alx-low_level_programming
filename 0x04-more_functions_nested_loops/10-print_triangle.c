#include "main.h"
#include <stdio.h>
/**
 * print_triangle - check for digits from 0 to 9
 *@size: nu
 *Return: 1 (true) 0 (false)
 */
void print_triangle(int size)
{
	int i = 0, j, n = size - 1;
	/** */
	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
