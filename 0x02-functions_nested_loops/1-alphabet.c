#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints alphabets followed by newline
 *
 * Return: void (Has no return value)
 */
void print_alphabet(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
	{
		_putchar(A);
	}
	_putchar('\n');
}
