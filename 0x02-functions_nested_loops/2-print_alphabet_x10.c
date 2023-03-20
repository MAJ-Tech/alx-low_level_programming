#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets followed by newline
 *
 * Return: void (Has no return value)
 */
void print_alphabet_x10(void)
{
	char A;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (A = 'a'; A <= 'z'; A++)
		{
			_putchar(A);
		}
		_putchar('\n');
	}
}
