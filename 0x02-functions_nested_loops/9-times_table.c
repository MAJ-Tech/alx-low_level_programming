#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the time table of numbers(9)
 *
 * Return: (void) has no return value
 */
void  times_table(void)
{
	int i = 0, j, N;
	/** Beginning of the nested loops (for in while loop)*/
	while (i <= 9)
	{
		for (j = 0; j <= 9; j++)
		{
			N = i * j;
			if ((N / 10) == 0)
			{
				if (j == 0)
				{
					_putchar(N + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(N + '0');
				}
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((N / 10) + '0');
				_putchar((N % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
		i++;
	}
}
