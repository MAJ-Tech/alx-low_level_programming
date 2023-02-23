#include "main.h"
#include <stdio.h>
/**
 * more_numbers - check for digits from 0 to 9
 *
 *Return: 1 (true) 0 (false)
 */
void more_numbers(void)
{
	int i, j = 0;
	/** */
	for (; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
